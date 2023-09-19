/*
 Revisão para a terceira prova de Linguagem De Programação com o professor Luiz e Diego:
 - Matrizes, vetores, e funções
 - Strings
 - Tipos Estruturados

*/

#include <iostream>
#include <cstring>
using namespace std;
/*Matrizes e vetores com funções
int somatorio(int V[], int n){
int soma = 0;
for (int i=0; i<n; i++){
soma = soma + V[i];
}
return soma;
}
int main(){
int V[5];
for(int i=0; i<5; i++)
{
    cin >> V[i];
}
cout << somatorio(V, 5) << endl;
return 0;
} */
int main()
{
char VS[250];
char VS2[250];
//lendo strings//
cin >> VS;
//colocndo o cin.peek() e cin.ignore() para remover o que o cin>> deixou no buffer//
if(cin.peek()=='\n')
    cin.ignore();

cin.getline(VS2, 250);
//imprimindo strings//
cout << VS << " " << VS2;

    return 0;
}

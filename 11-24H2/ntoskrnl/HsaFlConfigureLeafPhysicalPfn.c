/*
 * XREFs of HsaFlConfigureLeafPhysicalPfn @ 0x1405715F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HsaFlConfigureLeafPhysicalPfn(unsigned __int64 *a1, __int64 a2, char a3, unsigned int a4)
{
  unsigned int v4; // r11d
  unsigned __int64 *v5; // r10
  __int64 v6; // rbx
  unsigned __int64 v7; // rcx

  v4 = 0;
  v5 = a1;
  if ( a4 )
  {
    v6 = a2 - (_QWORD)a1;
    do
    {
      if ( *v5 )
        break;
      ++v4;
      v7 = (a3 & 2) != 0 ? 2 : 0;
      *v5 = v7;
      *v5 = (*(unsigned __int64 *)((char *)v5 + v6) << 12) ^ (v7 ^ (*(unsigned __int64 *)((char *)v5 + v6) << 12)) & 0xFFF0000000000FFFuLL | 0x8000000000000005uLL;
      ++v5;
    }
    while ( v4 < a4 );
  }
  return v4;
}

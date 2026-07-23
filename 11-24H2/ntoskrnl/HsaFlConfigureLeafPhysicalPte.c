/*
 * XREFs of HsaFlConfigureLeafPhysicalPte @ 0x140571680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HsaFlConfigureLeafPhysicalPte(unsigned __int64 *a1, unsigned __int64 a2, char a3, unsigned int a4)
{
  int v4; // ebx
  unsigned __int64 v5; // r10
  unsigned int i; // r11d
  unsigned __int64 v9; // r8
  __int64 v10; // rdx

  v4 = a3 & 2;
  v5 = a2 >> 12;
  for ( i = 0; i < a4; ++a1 )
  {
    v9 = *a1;
    if ( *a1 && ((v9 >> 12) & 0xFFFFFFFFFFLL) != v5 )
      break;
    v10 = v5++ << 12;
    ++i;
    *a1 = v10 & 0xFFFFFFFFFF000LL ^ (v9 & 0xFFF0000000000FFDuLL | (v4 != 0 ? 2uLL : 0)) | 0x8000000000000005uLL;
  }
  return i;
}

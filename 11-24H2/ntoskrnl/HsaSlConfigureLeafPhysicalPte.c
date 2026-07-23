/*
 * XREFs of HsaSlConfigureLeafPhysicalPte @ 0x140571B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HsaSlConfigureLeafPhysicalPte(unsigned __int64 *a1, unsigned __int64 a2, char a3, unsigned int a4)
{
  bool v4; // di
  int v6; // r11d
  int v8; // r10d
  unsigned __int64 v9; // rdx
  unsigned int v10; // r9d
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rcx

  v4 = 0;
  v6 = a3 & 1;
  v8 = a3 & 2;
  if ( (a3 & 2) == 0 )
    v4 = !(a3 & 1);
  v9 = a2 >> 12;
  v10 = 0;
  while ( v10 < a4 )
  {
    v11 = *a1;
    v12 = v9;
    if ( *a1 && ((v11 >> 12) & 0xFFFFFFFFFFLL) != v9 )
      break;
    ++v10;
    v13 = (v9++ << 12) & 0xFFFFFFFFFF000LL ^ (v11 & 0x9FF00000000001FFuLL | ((unsigned __int64)(v6 & 0xFFFFFFFD) << 61) | -(__int64)(v8 != 0) & 0x4000000000000000LL);
    *a1++ = v13 | 1;
    if ( v4 )
      v9 = v12;
  }
  return v10;
}

/*
 * XREFs of RtlLengthCurrentClearRunBackwardEx @ 0x18013BB00
 * Callers:
 *     RtlCSparseBitmapFindBitSetCapped @ 0x18009DEEC (RtlCSparseBitmapFindBitSetCapped.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlLengthCurrentClearRunBackwardEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _DWORD *v3; // rdi
  unsigned __int64 v4; // rax
  int v5; // edx
  unsigned int v6; // r11d
  unsigned __int64 v8; // r8
  _DWORD *v9; // r10
  char v10; // dl
  unsigned __int64 v12; // r8

  v3 = *(_DWORD **)(a1 + 8);
  v4 = a2 >> 5;
  v5 = a2 & 0x1F;
  v6 = 31 - v5;
  v8 = 0LL;
  v9 = &v3[v4];
  LODWORD(a1) = dword_18017F850[v5] & *v9;
  while ( !(_DWORD)a1 )
  {
    v8 += 32LL;
    if ( v8 >= a3 && v8 - v6 >= a3 || v9 == v3 )
      goto LABEL_10;
    LODWORD(a1) = *--v9;
  }
  v10 = -1;
  if ( _BitScanReverse64((unsigned __int64 *)&a1, (unsigned int)a1) )
    v10 = a1;
  v8 += (unsigned int)(31 - v10);
LABEL_10:
  v12 = v8 - v6;
  if ( v12 > a3 )
    return a3;
  return v12;
}

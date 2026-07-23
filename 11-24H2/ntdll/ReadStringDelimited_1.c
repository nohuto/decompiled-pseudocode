/*
 * XREFs of ReadStringDelimited_1 @ 0x18012EA54
 * Callers:
 *     _winput_s @ 0x18012ECD4 (_winput_s.c)
 * Callees:
 *     ReadString_1 @ 0x18012E80C (ReadString_1.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180164700 (_alloca_probe.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall ReadStringDelimited_1(
        char a1,
        unsigned __int16 **a2,
        wint_t *a3,
        _DWORD *a4,
        __int64 a5,
        int a6,
        FILE *Stream,
        __int64 a8,
        _DWORD *a9)
{
  unsigned __int16 v12; // di
  unsigned __int16 *v14; // rcx
  char v15; // r10
  unsigned __int16 *v16; // r8
  unsigned __int16 *v17; // r8
  unsigned __int16 i; // ax
  unsigned __int16 *v19; // rdx
  unsigned __int16 v20; // cx
  unsigned __int16 v21; // r9
  unsigned __int64 v22; // rdx
  char v23; // al
  _BYTE v25[11]; // [rsp+50h] [rbp-2048h] BYREF
  char v26; // [rsp+5Bh] [rbp-203Dh]

  v12 = 0;
  memset_thunk_772440563353939046(v25, 0, 0x2000uLL);
  v14 = *a2;
  v15 = a1 | 8;
  v16 = *a2 + 1;
  *a2 = v16;
  if ( *v16 != 94 )
  {
    v16 = v14;
    v15 = a1;
  }
  v17 = v16 + 1;
  i = *v17;
  if ( *v17 != 93 )
    goto LABEL_5;
  v26 = 32;
  ++v17;
  v12 = 93;
  for ( i = *v17; i != 93; i = *v17 )
  {
LABEL_5:
    v19 = v17++;
    if ( i == 45 && v12 && (v20 = *v17, *v17 != 93) )
    {
      v17 = v19 + 2;
      if ( v12 >= v20 )
      {
        v21 = v12;
        v12 = v20;
      }
      else
      {
        v21 = v20;
      }
      do
      {
        v22 = (unsigned __int64)v12 >> 3;
        v23 = v12++;
        v25[v22] |= 1 << (v23 & 7);
      }
      while ( v12 <= v21 );
      v12 = 0;
    }
    else
    {
      v12 = i;
      v25[(unsigned __int64)i >> 3] |= 1 << (i & 7);
    }
  }
  *a2 = v17;
  return ReadString_1(v15, (__int64)v25, a3, a4, a5, a6, Stream, a8, a9);
}

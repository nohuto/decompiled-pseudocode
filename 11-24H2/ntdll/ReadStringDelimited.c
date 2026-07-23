/*
 * XREFs of ReadStringDelimited @ 0x180129A84
 * Callers:
 *     _input_l @ 0x180129C10 (_input_l.c)
 * Callees:
 *     ReadString @ 0x1801298A8 (ReadString.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall ReadStringDelimited(
        char a1,
        unsigned __int8 **a2,
        int *a3,
        _DWORD *a4,
        _QWORD *SrcCh,
        int a6,
        FILE *Stream,
        _DWORD *a8)
{
  unsigned __int8 *v8; // rax
  unsigned __int8 v10; // r10
  unsigned __int8 *v12; // r8
  char v13; // r11
  bool v15; // zf
  unsigned __int8 *v16; // r8
  unsigned __int8 i; // al
  unsigned __int8 *v18; // rdx
  unsigned __int8 v19; // cl
  unsigned __int8 v20; // r9
  unsigned __int64 v21; // rdx
  unsigned __int8 v22; // al
  int v24[4]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v25; // [rsp+50h] [rbp-38h]

  v8 = *a2;
  v10 = 0;
  v12 = *a2 + 1;
  v13 = a1 | 8;
  *a2 = v12;
  v15 = *v12 == 94;
  *(_OWORD *)v24 = 0LL;
  if ( !v15 )
  {
    v12 = v8;
    v13 = a1;
  }
  v16 = v12 + 1;
  v25 = 0LL;
  i = *v16;
  if ( *v16 != 93 )
    goto LABEL_5;
  v10 = 93;
  HIBYTE(v24[2]) = 32;
  for ( i = *++v16; i != 93; i = *v16 )
  {
LABEL_5:
    v18 = v16++;
    if ( i == 45 && v10 && (v19 = *v16, *v16 != 93) )
    {
      v16 = v18 + 2;
      if ( v10 >= v19 )
      {
        v20 = v10;
        v10 = v19;
      }
      else
      {
        v20 = v19;
      }
      do
      {
        v21 = (unsigned __int64)v10 >> 3;
        v22 = v10++;
        *((_BYTE *)v24 + v21) |= 1 << (v22 & 7);
      }
      while ( v10 <= v20 );
      v10 = 0;
    }
    else
    {
      v10 = i;
      *((_BYTE *)v24 + ((unsigned __int64)i >> 3)) |= 1 << (i & 7);
    }
  }
  *a2 = v16;
  return ReadString(v13, (__int64)v24, a3, a4, SrcCh, a6, Stream, a8);
}

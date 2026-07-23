/*
 * XREFs of RtlFindNextClearRunUlong @ 0x1403C598C
 * Callers:
 *     MiRescanPagefileBitmaps @ 0x1403C3F28 (MiRescanPagefileBitmaps.c)
 *     MiFindFreePageFileSpaceForward @ 0x1403C4D94 (MiFindFreePageFileSpaceForward.c)
 *     MiRescanPageFileBitmapPortion @ 0x1403C56D8 (MiRescanPageFileBitmapPortion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindNextClearRunUlong(unsigned int *a1, unsigned int a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  unsigned int v5; // r11d
  unsigned int v6; // edi
  unsigned int v7; // r13d
  __int64 v8; // r12
  unsigned __int64 v9; // rcx
  int v10; // edi
  _DWORD *v11; // r9
  unsigned __int64 v12; // r15
  unsigned int v13; // ebx
  int v14; // r10d
  char v15; // dl
  bool v16; // zf
  __int64 v17; // rcx
  __int64 v18; // rsi
  unsigned int v19; // r8d
  char v20; // bp
  _DWORD *v21; // rcx
  char v22; // dl
  __int64 v23; // rcx
  unsigned int v24; // r8d

  v5 = a4;
  if ( a4 < 0x20 )
    return 0LL;
  v6 = *a1;
  v7 = *a1;
  if ( *a1 < 0x20 || a2 > v6 - 32 )
    return 0LL;
  v8 = *((_QWORD *)a1 + 1);
  v9 = (unsigned __int64)(v6 - 1) >> 5;
  v10 = v6 & 0x1F;
  v11 = (_DWORD *)(v8 + 4 * ((unsigned __int64)a2 >> 5));
  v12 = v8 + 4 * v9 - 4;
  if ( !v10 )
    v12 = v8 + 4 * v9;
  v13 = *v11 | *((_DWORD *)qword_140011DF0 + (a2 & 0x1F));
  v14 = 0;
  do
  {
    while ( 1 )
    {
      if ( v13 != -1 )
      {
        v14 = 32 * (((__int64)v11 - v8) >> 2);
        if ( !v13 )
          goto LABEL_13;
        v15 = -1;
        v16 = !_BitScanReverse64((unsigned __int64 *)&v17, v13);
        if ( !v16 )
          v15 = v17;
        if ( v15 != 31 )
          break;
      }
      v24 = 0;
      if ( (unsigned __int64)v11 >= v12 )
        goto LABEL_26;
      v13 = *++v11;
    }
    v14 += v15 + 1;
LABEL_13:
    v18 = v14 & 0x1F;
    v19 = 0;
    v13 &= ~*((_DWORD *)qword_140011DF0 + v18);
    if ( (unsigned __int64)v11 <= v12 )
    {
      v20 = 0;
      while ( !v13 )
      {
        v19 += 32;
        if ( v19 >= v5 && v19 - (unsigned int)v18 >= v5 )
          goto LABEL_23;
        if ( v11 == (_DWORD *)v12 )
          goto LABEL_14;
        v13 = *++v11;
      }
    }
    else
    {
LABEL_14:
      v20 = 1;
      v21 = v11;
      if ( !v10 )
        goto LABEL_23;
      if ( v19 )
        v13 = v11[1];
      ++v11;
      if ( !v19 )
        v11 = v21;
      v13 |= ~*((_DWORD *)qword_140011DF0 + (v7 & 0x1F));
    }
    v22 = -1;
    v16 = !_BitScanForward64((unsigned __int64 *)&v23, v13);
    if ( !v16 )
      v22 = v23;
    v19 += v22;
LABEL_23:
    v24 = v19 - v18;
    if ( v24 > v5 )
      goto LABEL_29;
    if ( v24 >= 0x20 )
      break;
    v24 = 0;
  }
  while ( !v20 );
LABEL_26:
  if ( v24 > v5 )
    v24 = v5;
  v5 = v24;
LABEL_29:
  *a5 = v14;
  return v5;
}

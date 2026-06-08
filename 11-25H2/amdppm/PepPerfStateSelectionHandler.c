/*
 * XREFs of PepPerfStateSelectionHandler @ 0x14000C610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PepPerfStateSelectionHandler(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        char a8,
        unsigned int *a9,
        _QWORD *a10,
        _QWORD *a11)
{
  __int64 v11; // rdi
  unsigned __int8 v12; // bl
  unsigned __int8 v13; // r10
  unsigned __int8 v16; // r11
  unsigned __int8 v17; // cl
  __int64 v18; // r8
  __int64 v19; // r10
  unsigned __int8 v20; // r9
  unsigned __int8 v21; // dl
  __int64 v22; // r8
  unsigned __int8 v24; // al
  unsigned int v25; // edx
  __int64 v27; // [rsp+60h] [rbp+50h]

  v11 = *(_QWORD *)(a1 + 40);
  v12 = 0;
  v13 = 0;
  v16 = *(_BYTE *)(v11 + 37);
  if ( v16 )
  {
    while ( *(_DWORD *)(*(_QWORD *)(v11 + 40) + 24LL * v13 + 8) > a4 )
    {
      if ( ++v13 >= v16 )
        goto LABEL_6;
    }
    v12 = v13;
  }
LABEL_6:
  v17 = v16 - 1;
  if ( v16 )
  {
    v18 = *(_QWORD *)(v11 + 40);
    while ( *(_DWORD *)(v18 + 24LL * v16 - 16) < a3
         || (a8 & 1) == 0 && *(_DWORD *)(v18 + 24LL * v16 - 24) < *(_DWORD *)(v11 + 12) )
    {
      if ( !--v16 )
        goto LABEL_14;
    }
    v17 = v16 - 1;
  }
LABEL_14:
  v19 = *(_QWORD *)(v11 + 40);
  v20 = v12;
  if ( v17 >= v12 )
    v20 = v17;
  if ( (a8 & 2) != 0 )
  {
    v21 = v12 - 1;
    do
      v22 = v19 + 24LL * ++v21;
    while ( *(_DWORD *)(v22 + 8) > a2 && v21 < v20 );
  }
  else
  {
    v21 = v20 + 1;
    do
      v22 = v19 + 24LL * --v21;
    while ( *(_DWORD *)(v22 + 8) < a2 && v21 > v12 );
  }
  v24 = v21;
  if ( (a8 & 4) != 0 )
    v24 = -1;
  if ( a10 )
  {
    v27 = v24;
    BYTE1(v27) = v20;
    BYTE2(v27) = v12;
    *(_DWORD *)((char *)&v27 + 3) = (unsigned __int8)(255 * a5 / 0x64u);
    *a10 = v27;
    if ( a9 )
    {
      v25 = *(_DWORD *)(v11 + 20);
      if ( v25 >= *(_DWORD *)(v22 + 4) )
        v25 = *(_DWORD *)(v22 + 4);
      *a9 = v25;
    }
  }
  if ( a11 )
    *a11 = 0LL;
  return *(unsigned int *)(v22 + 8);
}

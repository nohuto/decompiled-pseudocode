/*
 * XREFs of IvtGetPageFault @ 0x14056BC90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IvtGetPageFault(_QWORD *a1, int *a2, _QWORD *a3, _WORD *a4, unsigned __int64 *a5, __int64 *a6)
{
  unsigned __int64 v6; // r11
  __int64 v7; // r10
  __int64 v9; // r9
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // r8
  unsigned __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int128 v29; // [rsp+0h] [rbp-28h] BYREF
  __int128 v30; // [rsp+10h] [rbp-18h]

  v6 = a1[20];
  v7 = a1[1];
  v9 = a1[18];
  v29 = 0LL;
  v12 = v6 >> 5;
  v30 = 0LL;
  while ( 1 )
  {
    v13 = *(_QWORD *)(v7 + 192);
    v14 = (v13 >> 5) & 0x3FFF;
    if ( v14 == ((*(_QWORD *)(v7 + 200) >> 5) & 0x3FFFLL) )
      break;
    v15 = 32 * v14;
    v16 = (*(_QWORD *)(v7 + 192) >> 5) + 1LL;
    v17 = *(_OWORD *)(v15 + v9);
    v18 = *(_OWORD *)(v15 + v9 + 16);
    v19 = 0LL;
    LODWORD(v15) = ((*(_QWORD *)(v7 + 192) >> 5) & 0x3FFF) + 1;
    v29 = v17;
    if ( (_DWORD)v15 != (_DWORD)v12 )
      v19 = v16;
    v30 = v18;
    *(_QWORD *)(v7 + 192) = (32 * v19) ^ (v13 ^ (32 * v19)) & 0xFFFFFFFFFFF8001FuLL;
    _InterlockedOr((volatile signed __int32 *)&v29, 0);
    v20 = *((_QWORD *)&v29 + 1);
    v21 = BYTE8(v29) & 1;
    if ( (BYTE8(v29) & 1) != 0 || (BYTE8(v29) & 2) != 0 )
    {
      v22 = v29;
      if ( (v29 & 0x100) != 0 )
        v23 = DWORD1(v29) & 0xFFFFF;
      else
        v23 = -1;
      *a2 = v23;
      *a4 = (v20 >> 3) & 0x1FF;
      *a5 = v20 & 0xFFFFFFFFFFFFF000uLL;
      *a3 = WORD1(v22);
      v24 = (16 * ((v20 >> 2) & 1)) | 2;
      if ( (v20 & 2) == 0 )
        v24 = 16 * ((v20 >> 2) & 1);
      v25 = v24 | 1;
      if ( !v21 )
        v25 = v24;
      v26 = v25 | 8;
      if ( (v22 & 0x20000000000000LL) == 0 )
        v26 = v25;
      v27 = v26 | 4;
      if ( (v22 & 0x10000000000000LL) == 0 )
        v27 = v26;
      *a6 = v27;
      return 1LL;
    }
  }
  if ( (*(_DWORD *)(v7 + 220) & 2) == 0 )
    return 0LL;
  *(_DWORD *)(v7 + 220) = 2;
  _InterlockedOr((volatile signed __int32 *)&v29, 0);
  *a2 = -1;
  *a4 = -1;
  *a5 = 0LL;
  *a6 = 32LL;
  return 1LL;
}

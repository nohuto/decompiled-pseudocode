/*
 * XREFs of ScsiModeSenseRequest @ 0x140115C18
 * Callers:
 *     ScsiToNVMeCommand2 @ 0x140116A7C (ScsiToNVMeCommand2.c)
 * Callees:
 *     NvmeControllerGetHealthInfoLog @ 0x1400C7EF4 (NvmeControllerGetHealthInfoLog.c)
 *     SetSrbSenseData @ 0x140117490 (SetSrbSenseData.c)
 */

__int64 __fastcall ScsiModeSenseRequest(__int64 a1, __int64 a2, _BYTE *a3)
{
  _BYTE *v3; // r13
  __int64 v4; // rbx
  __int64 v5; // r10
  _BYTE *v6; // rbp
  unsigned int v7; // r15d
  _BYTE *v8; // rsi
  char v9; // r12
  unsigned __int8 v10; // al
  unsigned int v11; // r14d
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // r9
  unsigned __int64 v15; // r9
  int v16; // r8d
  char v17; // dl
  char v18; // dl
  _BYTE *v19; // rsi
  __int16 v20; // ax
  char v21; // dl
  char v22; // al
  char v23; // dl
  int v24; // eax

  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v6 = *(_BYTE **)(a2 + 64);
    v7 = *(_DWORD *)(a2 + 60);
    v8 = v6;
  }
  else
  {
    v8 = *(_BYTE **)(a2 + 24);
    v7 = *(_DWORD *)(a2 + 16);
    v6 = v8;
  }
  v9 = *a3;
  v10 = a3[2];
  v11 = 4;
  if ( *a3 != 26 )
    v11 = 8;
  if ( v10 >= 0x40u )
  {
    LOBYTE(a3) = 5;
    LOBYTE(a2) = 6;
    SetSrbSenseData(v4, a2, (_DWORD)a3, 36, 0);
    return 3221225488LL;
  }
  if ( !v8 || v7 < v11 || v10 != 63 && v10 != 8 )
  {
    LOBYTE(a2) = 6;
    goto LABEL_39;
  }
  if ( v7 - v11 < 0xC )
  {
    LOBYTE(a2) = 18;
LABEL_39:
    LOBYTE(a3) = 5;
    SetSrbSenseData(v4, a2, (_DWORD)a3, 36, 0);
    return 3221225485LL;
  }
  v13 = *(_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)(v13 + 136) & 0x200000) != 0 )
  {
    if ( *(_QWORD *)(v13 + 1264) )
      goto LABEL_17;
    result = 3221225473LL;
LABEL_25:
    *(_BYTE *)(v4 + 3) = 4;
    return result;
  }
  result = NvmeControllerGetHealthInfoLog((_QWORD *)v13, 0);
  if ( (int)result < 0 )
    goto LABEL_25;
  v5 = a1;
LABEL_17:
  v14 = 4LL;
  if ( v9 != 26 )
    v14 = 8LL;
  v15 = v14 + 20;
  v16 = 16;
  if ( *v3 == 26 )
  {
    v17 = v6[2];
    v6[1] = 0;
    v18 = v17 | 0x10;
    v6[2] = v18;
    *v8 = v11 + (v7 < v15 ? 11 : 19);
    if ( (**(_BYTE **)(*(_QWORD *)(v5 + 16) + 1264LL) & 8) != 0 )
      v6[2] = v18 | 0x80;
    v19 = v8 + 4;
  }
  else
  {
    v6[2] = 0;
    v20 = v11 + (v7 < v15 ? 10 : 18);
    v6[1] = v20;
    *v8 = HIBYTE(v20);
    v21 = v8[3] | 0x10;
    v8[3] = v21;
    if ( (**(_BYTE **)(*(_QWORD *)(v5 + 16) + 1264LL) & 8) != 0 )
      v8[3] = v21 | 0x80;
    v19 = v8 + 8;
  }
  v22 = *v19 & 0x40;
  v23 = v19[2] & 0xFE;
  v19[1] = 10;
  v19[2] = v23;
  *v19 = v22 | 8;
  v19[2] = v23 ^ (v23 ^ (4 * ((unsigned __int64)*(unsigned int *)(*(_QWORD *)(v5 + 16) + 136LL) >> 19))) & 4;
  if ( v7 < v15 )
  {
    v24 = 20;
  }
  else
  {
    v24 = 28;
    v16 = 24;
  }
  if ( v9 != 26 )
    v16 = v24;
  if ( *(_BYTE *)(v4 + 2) == 40 )
    *(_DWORD *)(v4 + 60) = v16;
  else
    *(_DWORD *)(v4 + 16) = v16;
  *(_BYTE *)(v4 + 3) = 1;
  return 0LL;
}

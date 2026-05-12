/*
 * XREFs of NvmeNamespaceScsiModeSenseRequest @ 0x1401183C8
 * Callers:
 *     NvmeNamespaceExecuteScsiSrb @ 0x140100028 (NvmeNamespaceExecuteScsiSrb.c)
 * Callees:
 *     NvmeAdapterGetControllerLogPageSync @ 0x1400E35FC (NvmeAdapterGetControllerLogPageSync.c)
 *     SetSrbSenseData @ 0x140117490 (SetSrbSenseData.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeNamespaceScsiModeSenseRequest(__int64 a1, void *a2, __int64 a3, char *a4)
{
  char *v4; // rax
  bool v5; // zf
  __int64 v7; // rdi
  _BYTE *v8; // r14
  char v9; // r11
  unsigned int v10; // edi
  unsigned int v11; // r10d
  unsigned int *v12; // r9
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  _BYTE *v15; // rbp
  unsigned int v16; // ecx
  _BYTE *v17; // rsi
  char v18; // r12
  unsigned int v19; // r15d
  unsigned __int8 v20; // al
  int ControllerLogPageSync; // edi
  unsigned __int64 v22; // r13
  __int64 v23; // rdx
  __int64 v24; // r9
  unsigned __int64 v25; // r9
  int v26; // r8d
  char v27; // cl
  char v28; // cl
  _BYTE *v29; // rsi
  __int16 v30; // ax
  char v31; // cl
  char v32; // al
  char v33; // dl
  __int64 v35; // [rsp+28h] [rbp-60h]
  PVOID P; // [rsp+98h] [rbp+10h] BYREF
  char *v38; // [rsp+A8h] [rbp+20h]

  v38 = a4;
  P = a2;
  v4 = a4;
  v5 = *(_BYTE *)(a3 + 2) == 40;
  v7 = a1;
  P = 0LL;
  v8 = 0LL;
  if ( !v5 )
  {
    v17 = *(_BYTE **)(a3 + 24);
    v16 = *(_DWORD *)(a3 + 16);
    v15 = v17;
    goto LABEL_19;
  }
  v9 = 0;
  if ( *(_DWORD *)(a3 + 20) )
    goto LABEL_15;
  v10 = *(_DWORD *)(a3 + 56);
  v11 = 0;
  if ( !v10 )
    goto LABEL_14;
  v12 = (unsigned int *)(a3 + 120);
  do
  {
    v13 = *v12;
    if ( (unsigned int)v13 < 0x80 )
      goto LABEL_12;
    v14 = *(unsigned int *)(a3 + 16);
    if ( (unsigned int)v13 >= (unsigned int)v14 )
      goto LABEL_12;
    if ( *(_DWORD *)(v13 + a3) != 64 )
    {
      if ( *(_DWORD *)(v13 + a3) == 65 )
      {
        if ( v13 + 56 <= v14 )
          v9 = 1;
        goto LABEL_11;
      }
      if ( *(_DWORD *)(v13 + a3) != 66 )
        goto LABEL_11;
    }
    if ( v13 + 40 <= v14 )
      break;
LABEL_11:
    if ( v9 )
      break;
LABEL_12:
    ++v11;
    ++v12;
  }
  while ( v11 < v10 );
  v4 = v38;
LABEL_14:
  v7 = a1;
LABEL_15:
  v15 = *(_BYTE **)(a3 + 64);
  v16 = *(_DWORD *)(a3 + 60);
  v17 = v15;
LABEL_19:
  v18 = *v4;
  v19 = 4;
  v20 = v4[2];
  if ( v18 != 26 )
    v19 = 8;
  if ( v20 >= 0x40u )
  {
    SetSrbSenseData(a3, 6, 5, 36, 0);
    return (unsigned int)-1073741808;
  }
  if ( v17 && v16 >= v19 )
  {
    if ( v20 != 63 && v20 != 8 )
    {
      SetSrbSenseData(a3, 6, 5, 36, 0);
      return (unsigned int)-1073741811;
    }
    if ( v16 - v19 < 0xC )
    {
      SetSrbSenseData(a3, 18, 5, 36, 0);
      return (unsigned int)-1073741811;
    }
    v22 = v16;
    memset_0(v17, 0, v16);
    ControllerLogPageSync = NvmeAdapterGetControllerLogPageSync(
                              *(_QWORD *)(v7 + 16),
                              v23,
                              2u,
                              0x200u,
                              0LL,
                              v35,
                              1,
                              &P,
                              0LL,
                              0LL);
    if ( ControllerLogPageSync >= 0 )
    {
      v24 = 4LL;
      if ( v18 != 26 )
        v24 = 8LL;
      v25 = v24 + 20;
      v26 = 16;
      if ( *v38 == 26 )
      {
        v27 = v15[2];
        v15[1] = 0;
        v8 = P;
        v28 = v27 | 0x10;
        v15[2] = v28;
        *v17 = v19 + (v22 < v25 ? -9 : -1) + 20;
        if ( (*v8 & 8) != 0 )
          v15[2] = v28 | 0x80;
        v29 = v17 + 4;
      }
      else
      {
        v15[2] = 0;
        v8 = P;
        v30 = v19 + (v22 < v25 ? -10 : -2) + 20;
        v15[1] = v30;
        *v17 = HIBYTE(v30);
        v31 = v17[3] | 0x10;
        v17[3] = v31;
        if ( (*v8 & 8) != 0 )
          v17[3] = v31 | 0x80;
        v29 = v17 + 8;
      }
      v32 = *v29 & 0x40;
      v29[1] = 10;
      v33 = v29[2] & 0xFE;
      *v29 = v32 | 8;
      v29[2] = v33;
      v29[2] = v33 ^ (v33 ^ (4 * ((unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 16) + 136LL) >> 19))) & 4;
      if ( v22 < v25 )
      {
        if ( v18 != 26 )
          v26 = 20;
      }
      else
      {
        v26 = 24;
        if ( v18 != 26 )
          v26 = 28;
      }
      if ( *(_BYTE *)(a3 + 2) == 40 )
        *(_DWORD *)(a3 + 60) = v26;
      else
        *(_DWORD *)(a3 + 16) = v26;
      *(_BYTE *)(a3 + 3) = 1;
      ControllerLogPageSync = 0;
    }
    else
    {
      v8 = P;
      *(_BYTE *)(a3 + 3) = 4;
    }
  }
  else
  {
    SetSrbSenseData(a3, 6, 5, 36, 0);
    ControllerLogPageSync = -1073741811;
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0x52436152u);
  return (unsigned int)ControllerLogPageSync;
}

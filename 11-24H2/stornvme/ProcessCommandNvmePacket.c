/*
 * XREFs of ProcessCommandNvmePacket @ 0x14002C8E8
 * Callers:
 *     NVMeHwBuildIo @ 0x140002520 (NVMeHwBuildIo.c)
 * Callees:
 *     NVMeSetSenseData @ 0x140002390 (NVMeSetSenseData.c)
 *     SrbAssignQueueId @ 0x140004320 (SrbAssignQueueId.c)
 *     SetPrpFromSrb @ 0x140004B50 (SetPrpFromSrb.c)
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 *     GetSrbDataBuffer @ 0x14000B970 (GetSrbDataBuffer.c)
 *     NVMeSplitIoCommand @ 0x140024CD0 (NVMeSplitIoCommand.c)
 */

__int64 __fastcall ProcessCommandNvmePacket(__int64 a1, __int64 a2)
{
  unsigned int v3; // r15d
  __int64 SrbExtension; // rax
  __int64 v6; // rdx
  bool v7; // zf
  __int64 v8; // rsi
  bool v9; // r14
  __int64 v10; // rdi
  char v11; // cl
  int v12; // r13d
  int v13; // eax
  char v14; // cl
  char v15; // dl
  char v16; // dl
  char v17; // dl
  int v18; // ecx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // ecx
  unsigned int v23; // r9d
  unsigned int v24; // r8d
  unsigned int v25; // eax
  char v26; // dl
  __int64 v28; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0;
  SrbExtension = GetSrbExtension(a2);
  v7 = *(_BYTE *)(v6 + 2) == 40;
  v8 = SrbExtension;
  v28 = 0LL;
  v9 = 0;
  if ( !v7 )
    goto LABEL_44;
  if ( *(_DWORD *)(v6 + 20) != 10 )
    goto LABEL_44;
  v10 = v6 + *(unsigned int *)(v6 + 120);
  if ( !v10 )
    goto LABEL_44;
  GetSrbDataBuffer(a2, &v28);
  v11 = *(_BYTE *)(v10 + 80);
  v12 = *(_DWORD *)(v10 + 20);
  v13 = *(_BYTE *)(a2 + 2) == 40 ? *(_DWORD *)(a2 + 24) : *(_DWORD *)(a2 + 12);
  if ( (v13 & 0xC0) == 0 && v11 != 1 && *(_BYTE *)(v10 + 16) )
    goto LABEL_44;
  v14 = (v11 == 1) | *(_BYTE *)(v8 + 4225) & 0xFE;
  *(_BYTE *)(v8 + 4225) = v14;
  v15 = v14 & 0xFD | ((*(_BYTE *)(v10 + 82) & 3) != 0 ? 2 : 0);
  *(_BYTE *)(v8 + 4225) = v15;
  v16 = *(_BYTE *)(v10 + 82) & 4 | v15 & 0xFB;
  *(_BYTE *)(v8 + 4225) = v16;
  v17 = v16 & 1;
  if ( !v17 && !*(_WORD *)(a1 + 330) )
    goto LABEL_44;
  if ( v17 )
  {
    v18 = *(_DWORD *)(v10 + 88);
    if ( v18 != -1 && v18 != *(unsigned __int16 *)(a1 + 384) )
    {
LABEL_44:
      v26 = 40;
      goto LABEL_45;
    }
  }
  if ( *(_DWORD *)(v10 + 88) == -1 )
    SrbAssignQueueId(a1, a2);
  else
    *(_WORD *)(v8 + 4212) = *(_WORD *)(v10 + 88);
  if ( (*(_BYTE *)(v10 + 82) & 0x10) != 0 )
    *(_BYTE *)(v8 + 4225) |= 0x20u;
  *(_OWORD *)(v8 + 4096) = *(_OWORD *)(v10 + 16);
  *(_OWORD *)(v8 + 4112) = *(_OWORD *)(v10 + 32);
  *(_OWORD *)(v8 + 4128) = *(_OWORD *)(v10 + 48);
  *(_OWORD *)(v8 + 4144) = *(_OWORD *)(v10 + 64);
  if ( (unsigned int)(unsigned __int8)*(_DWORD *)(v10 + 16) - 1 > 1 || (unsigned int)(v12 - 1) > 0xFFFFFFFD )
    goto LABEL_36;
  v19 = *(_DWORD *)(v10 + 20);
  if ( !v19
    || (v20 = (unsigned int)(v19 - 1), (_DWORD)v20 == -1)
    || (v21 = *(_QWORD *)(a1 + 8 * v20 + 1672)) == 0
    || (v22 = *(_DWORD *)(v21 + 52)) == 0 )
  {
    NVMeSetSenseData(a2, 8, 0, 0);
    return 3238002695LL;
  }
  if ( !*(_QWORD *)(v21 + 56)
    || (v23 = *(unsigned __int16 *)(v21 + 92), !*(_DWORD *)v28)
    || ((v22 - 1) & *(_DWORD *)v28) != 0 )
  {
    v26 = 6;
LABEL_45:
    NVMeSetSenseData(a2, v26, 0, 0);
    return 3238002694LL;
  }
  v24 = *(_DWORD *)(a1 + 52);
  if ( v24 >= v22 && !(v24 % v22) || (_WORD)v23 )
  {
    v28 = *(_QWORD *)(v8 + 4136);
    if ( (_WORD)v23 )
      v25 = v23;
    else
      v25 = v24 / v22;
    v9 = v28 / v25 != (v28 + (unsigned int)(unsigned __int16)*(_DWORD *)(v8 + 4144) + 1 - 1LL) / v25;
  }
LABEL_36:
  if ( !*(_BYTE *)(a2 + 3) )
  {
    v3 = SetPrpFromSrb(a1, a2);
    if ( v3 )
    {
      *(_BYTE *)(a2 + 3) = 4;
    }
    else if ( v9 )
    {
      NVMeSplitIoCommand((_DWORD *)a1, a2);
    }
  }
  return v3;
}

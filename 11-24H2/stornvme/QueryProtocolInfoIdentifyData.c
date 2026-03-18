/*
 * XREFs of QueryProtocolInfoIdentifyData @ 0x140025B90
 * Callers:
 *     IoctlQueryProtocolInfoProcess @ 0x140001DD0 (IoctlQueryProtocolInfoProcess.c)
 * Callees:
 *     SrbAssignQueueId @ 0x140004320 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 *     NVMeAllocateDmaBuffer @ 0x140006160 (NVMeAllocateDmaBuffer.c)
 *     GetSrbDataBuffer @ 0x14000B970 (GetSrbDataBuffer.c)
 *     BuildIdentifyCommandGeneric @ 0x14001F0F4 (BuildIdentifyCommandGeneric.c)
 *     SetCommandUUIDIndex @ 0x14002663C (SetCommandUUIDIndex.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

__int64 __fastcall QueryProtocolInfoIdentifyData(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // r9
  __int64 v6; // r13
  bool v7; // r15
  int v8; // ebx
  int v9; // r12d
  __int64 v10; // r8
  int v11; // r9d
  char v12; // r10
  _DWORD *SrbDataBuffer; // r14
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  __int64 result; // rax
  int v21; // eax
  __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // rbx
  int v25; // eax
  int v26; // eax
  __int64 v27; // rbx
  __int64 v28; // r9
  int v29; // [rsp+20h] [rbp-40h]
  __int64 v30; // [rsp+50h] [rbp-10h]
  int v31; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v32; // [rsp+B0h] [rbp+50h] BYREF
  void *v33; // [rsp+B8h] [rbp+58h]

  v33 = 0LL;
  SrbExtension = GetSrbExtension(a2);
  v30 = v5;
  v6 = SrbExtension;
  v7 = v5;
  v8 = v5;
  LOBYTE(v9) = v5;
  v31 = v5;
  SrbDataBuffer = (_DWORD *)GetSrbDataBuffer(a2, &v32);
  v14 = SrbDataBuffer[11];
  LODWORD(v32) = v14;
  if ( !v14 )
  {
    if ( *(_BYTE *)(a2 + 2) == v12 )
      v26 = *(_DWORD *)(a2 + 24);
    else
      v26 = *(_DWORD *)(a2 + 12);
    if ( (v26 & 1) != 0 )
    {
      v8 = SrbDataBuffer[12];
      v7 = v8 == 0;
      if ( !v8 )
        v8 = v11;
    }
    else if ( (unsigned int)v10 < *(_DWORD *)(a1 + 224) && (v27 = *(_QWORD *)(a1 + 8 * v10 + 1672)) != 0 )
    {
      v8 = *(_DWORD *)(v27 + 16);
    }
    else
    {
      v8 = v11;
    }
    SetCommandUUIDIndex(a1, SrbDataBuffer + 7, &v31);
LABEL_58:
    if ( v7 )
    {
      result = 3238002694LL;
      goto LABEL_60;
    }
    goto LABEL_12;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    SetCommandUUIDIndex(a1, SrbDataBuffer + 7, &v31);
    goto LABEL_12;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    if ( *(_BYTE *)(a2 + 2) == v12 )
      v25 = *(_DWORD *)(a2 + 24);
    else
      v25 = *(_DWORD *)(a2 + 12);
    if ( (v25 & 1) != 0 )
    {
      v8 = SrbDataBuffer[12];
      goto LABEL_12;
    }
    if ( (unsigned int)v10 >= *(_DWORD *)(a1 + 224) || (v24 = *(_QWORD *)(a1 + 8 * v10 + 1672)) == 0 )
    {
      v8 = v11;
      goto LABEL_12;
    }
    goto LABEL_35;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    if ( *(_BYTE *)(a2 + 2) == v12 )
      v23 = *(_DWORD *)(a2 + 24);
    else
      v23 = *(_DWORD *)(a2 + 12);
    if ( (v23 & 1) != 0 )
    {
      v8 = SrbDataBuffer[12];
      v7 = v8 == 0;
      if ( !v8 )
        v8 = v11;
      goto LABEL_58;
    }
    if ( (unsigned int)v10 >= *(_DWORD *)(a1 + 224) || (v24 = *(_QWORD *)(a1 + 8 * v10 + 1672)) == 0 )
    {
      v8 = v11;
      goto LABEL_58;
    }
LABEL_35:
    v8 = *(_DWORD *)(v24 + 16);
    goto LABEL_12;
  }
  v18 = v17 - 2;
  if ( !v18 )
  {
    if ( *(_BYTE *)(a2 + 2) == v12 )
      v21 = *(_DWORD *)(a2 + 24);
    else
      v21 = *(_DWORD *)(a2 + 12);
    if ( (v21 & 1) != 0 )
    {
      v8 = SrbDataBuffer[12];
      v7 = v8 == 0;
      if ( !v8 )
        v8 = v11;
    }
    else if ( (unsigned int)v10 < *(_DWORD *)(a1 + 224) && (v22 = *(_QWORD *)(a1 + 8 * v10 + 1672)) != 0 )
    {
      v8 = *(_DWORD *)(v22 + 16);
    }
    else
    {
      v8 = v11;
    }
    v9 = SrbDataBuffer[18];
    goto LABEL_58;
  }
  v19 = v18 - 1;
  if ( v19 )
  {
    if ( v19 != 17 )
    {
      result = 3238002690LL;
LABEL_60:
      *(_BYTE *)(a2 + 3) = 6;
      return result;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1560) + 96LL) & 0x200) == 0 )
    {
      result = 3238002695LL;
      goto LABEL_60;
    }
  }
  else
  {
    v9 = SrbDataBuffer[18];
  }
LABEL_12:
  if ( SrbDataBuffer[14] >= 0x1000u )
  {
    NVMeAllocateDmaBuffer(a1, 0x1000u);
    if ( v33 )
    {
      memset(v33, 0, 0x1000uLL);
      *(_BYTE *)(v6 + 4225) |= 3u;
      SrbAssignQueueId(a1, a2);
      BuildIdentifyCommandGeneric(a1, v6 + 4096, v32, v28, v29, v9, v30, v8, v31);
      *(_BYTE *)(v6 + 4225) |= 4u;
      *(_QWORD *)(v6 + 4192) = QueryProtocolInfoCompletion;
      *(_QWORD *)(v6 + 4160) = v33;
      *(_QWORD *)(v6 + 4168) = v30;
      result = 0LL;
      *(_DWORD *)(v6 + 4208) = 4096;
    }
    else
    {
      *(_BYTE *)(a2 + 3) = 4;
      return 3238002691LL;
    }
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
  return result;
}

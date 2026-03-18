/*
 * XREFs of FirmwareDownload @ 0x14001FABC
 * Callers:
 *     IoctlFirmwareProcess @ 0x14000CFC0 (IoctlFirmwareProcess.c)
 * Callees:
 *     SrbAssignQueueId @ 0x140004320 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 *     GetControllerMaxTransferSize @ 0x1400065A0 (GetControllerMaxTransferSize.c)
 *     GetSrbDataBuffer @ 0x14000B970 (GetSrbDataBuffer.c)
 *     FillClippedSGL @ 0x14001F774 (FillClippedSGL.c)
 *     GetFirmwareGranularity @ 0x1400202E4 (GetFirmwareGranularity.c)
 *     NVMeQueueWorkItem @ 0x14002393C (NVMeQueueWorkItem.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

__int64 __fastcall FirmwareDownload(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 SrbExtension; // r15
  __int64 SrbDataBuffer; // rax
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // r13
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  char v13; // r9
  unsigned int ControllerMaxTransferSize; // eax
  unsigned __int64 v16; // r8
  unsigned int FirmwareGranularity; // eax
  unsigned int v18; // r12d
  unsigned int v19; // r12d
  unsigned int *ScatterGatherList; // rax
  int v21; // r9d
  unsigned int v22; // r9d
  __int64 v23; // r9
  int v24; // eax
  int v25; // eax
  unsigned __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // [rsp+120h] [rbp+18h] BYREF
  void *v29; // [rsp+128h] [rbp+20h]

  v3 = 0;
  v29 = 0LL;
  SrbExtension = GetSrbExtension(a2);
  SrbDataBuffer = GetSrbDataBuffer(a2, &v28);
  v7 = SrbDataBuffer;
  v8 = SrbDataBuffer + *(unsigned int *)(SrbDataBuffer + 44);
  if ( *(_DWORD *)v8 == 2 && *(_DWORD *)(v8 + 4) >= 0x20u )
    v9 = SrbDataBuffer + *(unsigned int *)(SrbDataBuffer + 44);
  else
    v9 = 0LL;
  v10 = *(unsigned int *)(SrbDataBuffer + 48);
  if ( v9 )
  {
    if ( (unsigned int)v10 < 0x20 )
      goto LABEL_10;
    v11 = *(_QWORD *)(v9 + 16);
    v12 = v11 + 32;
  }
  else
  {
    if ( (unsigned int)v10 < 0x18 )
      goto LABEL_10;
    v11 = *(_QWORD *)(v8 + 16);
    v12 = v11 + 24;
  }
  if ( v10 < v12 || !v11 || (*(_BYTE *)(v8 + 8) & 3) != 0 || (*(_QWORD *)(v8 + 16) & 3) != 0 )
    goto LABEL_10;
  ControllerMaxTransferSize = GetControllerMaxTransferSize((_DWORD *)a1);
  if ( v16 > ControllerMaxTransferSize )
  {
    *(_DWORD *)(v7 + 20) = 4;
    goto LABEL_11;
  }
  if ( (*(_DWORD *)(a1 + 24) & 0x800) == 0 )
  {
    NVMeQueueWorkItem(a1, NVMeControllerValidateFirmwareActivateCapability, 0LL);
    *(_DWORD *)(a1 + 24) |= 0x800u;
  }
  FirmwareGranularity = GetFirmwareGranularity(a1);
  if ( FirmwareGranularity )
  {
    if ( *(_QWORD *)(v8 + 16) % (unsigned __int64)FirmwareGranularity )
    {
LABEL_10:
      *(_DWORD *)(v7 + 20) = 3;
LABEL_11:
      v3 = -1056964602;
LABEL_12:
      v13 = 21;
      goto LABEL_13;
    }
  }
  if ( (*(_DWORD *)(a1 + 56) & 8) != 0 )
  {
    v24 = *(_DWORD *)(v7 + 44);
    if ( v9 )
      v25 = v24 + 32;
    else
      v25 = v24 + 24;
    *(_DWORD *)(SrbExtension + 4176) = v25;
    goto LABEL_43;
  }
  LODWORD(v28) = (((unsigned int)GetControllerMaxTransferSize((_DWORD *)a1) - 1) >> 12) + 2;
  v18 = 24 * v28 + 16;
  StorPortExtendedFunction(0LL, a1, v18, 1701672526LL);
  if ( v29 )
  {
    v19 = v18 >> 2;
    if ( v19 )
      memset(v29, 0, 4LL * v19);
    ScatterGatherList = (unsigned int *)StorPortGetScatterGatherList(a1, a2);
    v21 = *(_DWORD *)(v7 + 44);
    if ( v9 )
      v22 = v21 + 32;
    else
      v22 = v21 + 24;
    if ( !FillClippedSGL(ScatterGatherList, (unsigned int *)v29, v28, v22) )
    {
      if ( v29 )
      {
        StorPortExtendedFunction(1LL, a1, v29, v23);
        v29 = 0LL;
      }
      *(_DWORD *)(v7 + 20) = 4;
      v3 = -1056964607;
      goto LABEL_12;
    }
    *(_QWORD *)(SrbExtension + 4176) = v29;
LABEL_43:
    *(_BYTE *)(SrbExtension + 4225) |= 3u;
    SrbAssignQueueId(a1, a2);
    v26 = *(_QWORD *)(v8 + 8);
    v27 = (*(_QWORD *)(v8 + 16) >> 2) - 1;
    *(_BYTE *)(SrbExtension + 4096) = 17;
    *(_DWORD *)(SrbExtension + 4136) = v27;
    *(_DWORD *)(SrbExtension + 4140) = v26 >> 2;
    *(_QWORD *)(SrbExtension + 4192) = NVMeFirmwareDownloadCompletion;
    return v3;
  }
  v13 = 4;
  *(_DWORD *)(v7 + 20) = 1;
  v3 = -1056964605;
LABEL_13:
  *(_BYTE *)(a2 + 3) = v13;
  if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
    StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
  return v3;
}

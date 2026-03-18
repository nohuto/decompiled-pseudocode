/*
 * XREFs of NVMeWriteBufferFirmwareDownload @ 0x140002140
 * Callers:
 *     ScsiToNVMe @ 0x140002940 (ScsiToNVMe.c)
 * Callees:
 *     NVMeSetSenseData @ 0x140002390 (NVMeSetSenseData.c)
 *     SrbAssignQueueId @ 0x140004320 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 *     GetControllerMaxTransferSize @ 0x1400065A0 (GetControllerMaxTransferSize.c)
 *     FillClippedSGL @ 0x14001F774 (FillClippedSGL.c)
 *     GetFirmwareGranularity @ 0x1400202E4 (GetFirmwareGranularity.c)
 *     NVMeQueueWorkItem @ 0x14002393C (NVMeQueueWorkItem.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

__int64 __fastcall NVMeWriteBufferFirmwareDownload(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned __int8 *v5; // r8
  __int64 v6; // r9
  __int64 SrbExtension; // r14
  unsigned int v8; // ebx
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 result; // rax
  unsigned int FirmwareGranularity; // eax
  unsigned int v16; // r12d
  __int64 v17; // rdx
  __int64 v18; // r9
  unsigned int v19; // r15d
  __int64 ScatterGatherList; // rax
  void *v21; // [rsp+70h] [rbp+18h] BYREF

  v21 = 0LL;
  SrbExtension = GetSrbExtension(a2);
  v8 = v5[5] | ((v5[4] | (v5[3] << 8)) << 8);
  v9 = v5[8] | ((v5[7] | (v5[6] << 8)) << 8);
  if ( (v5[5] & 3) != 0 || (v5[8] & 3) != 0 )
  {
    LOBYTE(v6) = 36;
    LOBYTE(v5) = 5;
    LOBYTE(v4) = 6;
    NVMeSetSenseData(a2, v4, v5, v6);
    return 3238002694LL;
  }
  if ( v9 > (unsigned int)GetControllerMaxTransferSize(a1, v4) )
    goto LABEL_4;
  if ( (*(_DWORD *)(a1 + 24) & 0x800) == 0 )
  {
    NVMeQueueWorkItem(v11, NVMeControllerValidateFirmwareActivateCapability, 0LL);
    *(_DWORD *)(a1 + 24) |= 0x800u;
  }
  FirmwareGranularity = GetFirmwareGranularity(a1);
  v12 = FirmwareGranularity;
  if ( FirmwareGranularity )
  {
    v10 = v9 % FirmwareGranularity;
    if ( v9 % FirmwareGranularity )
    {
LABEL_4:
      LOBYTE(v13) = 36;
      LOBYTE(v12) = 5;
      LOBYTE(v10) = 21;
      NVMeSetSenseData(a2, v10, v12, v13);
      return 3238002694LL;
    }
  }
  if ( (*(_DWORD *)(a1 + 56) & 8) != 0 )
  {
    *(_DWORD *)(SrbExtension + 4176) = v8;
    goto LABEL_22;
  }
  v16 = (((unsigned int)GetControllerMaxTransferSize(a1, v10) - 1) >> 12) + 2;
  StorPortExtendedFunction(0LL, a1, 24 * v16 + 16, 1701672526LL);
  if ( v21 )
  {
    v19 = (24 * v16 + 16) >> 2;
    if ( v19 )
      memset(v21, 0, 4LL * v19);
    ScatterGatherList = StorPortGetScatterGatherList(a1, a2);
    if ( !(unsigned __int8)FillClippedSGL(ScatterGatherList, v21, v16, 0LL, &v21) )
    {
      if ( v21 )
      {
        StorPortExtendedFunction(1LL, a1, v21, v18);
        v21 = 0LL;
      }
      LOBYTE(v18) = 36;
      goto LABEL_18;
    }
    *(_QWORD *)(SrbExtension + 4176) = v21;
LABEL_22:
    *(_BYTE *)(SrbExtension + 4225) |= 3u;
    SrbAssignQueueId(a1, a2);
    *(_DWORD *)(SrbExtension + 4136) = (v9 >> 2) - 1;
    result = 0LL;
    *(_BYTE *)(SrbExtension + 4096) = 17;
    *(_DWORD *)(SrbExtension + 4140) = v8 >> 2;
    *(_QWORD *)(SrbExtension + 4192) = NVMeWriteBufferFirmwareDownloadCompletion;
    return result;
  }
  v18 = 0LL;
LABEL_18:
  LOBYTE(v17) = 38;
  NVMeSetSenseData(a2, v17, 0LL, v18);
  return 3238002691LL;
}

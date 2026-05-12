/*
 * XREFs of NvmeControllerResetRecovery @ 0x140137858
 * Callers:
 *     NvmeAdapterFirmwareActivateResetWorker @ 0x1400D1770 (NvmeAdapterFirmwareActivateResetWorker.c)
 *     NvmeNamespaceSetUnresponsiveAttribute @ 0x140112140 (NvmeNamespaceSetUnresponsiveAttribute.c)
 *     NvmeControllerCommandTimeoutDetectThread @ 0x140136CA0 (NvmeControllerCommandTimeoutDetectThread.c)
 *     NvmeDeviceHierarchicalReset @ 0x140137CF0 (NvmeDeviceHierarchicalReset.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x1400A9028 (StorEtwNvmeControllerEvent.c)
 *     IsNvmeControllerGone @ 0x1400BE914 (IsNvmeControllerGone.c)
 *     NvmeAdapterCompleteAllRequestsForSurpriseRemove @ 0x1400CD54C (NvmeAdapterCompleteAllRequestsForSurpriseRemove.c)
 *     NvmeControllerCancelAllIoCompletionDPCs @ 0x1400EB5E8 (NvmeControllerCancelAllIoCompletionDPCs.c)
 *     NvmeControllerCompletionDpcQuiesce @ 0x1400EBA8C (NvmeControllerCompletionDpcQuiesce.c)
 *     NvmeControllerCompletionQueuePollingQuiesce @ 0x1400EBBC0 (NvmeControllerCompletionQueuePollingQuiesce.c)
 *     NvmeControllerDrainAllFreeCommandIdFromIoSQs @ 0x1400ECC70 (NvmeControllerDrainAllFreeCommandIdFromIoSQs.c)
 *     NvmeControllerQueuesReInit @ 0x1400F3974 (NvmeControllerQueuesReInit.c)
 *     NvmeControllerReinitialize @ 0x1400F3C7C (NvmeControllerReinitialize.c)
 *     NvmeControllerReset @ 0x1400F488C (NvmeControllerReset.c)
 *     NvmeControllerRestart @ 0x1400F4DB4 (NvmeControllerRestart.c)
 *     NvmeControllerSubmissionQueueQuiesce @ 0x1400F5990 (NvmeControllerSubmissionQueueQuiesce.c)
 *     NvmeControllerFreePendingZombieCommands @ 0x140129454 (NvmeControllerFreePendingZombieCommands.c)
 *     NvmeControllerIsOutstandingRequestInResetRecovery @ 0x1401375B4 (NvmeControllerIsOutstandingRequestInResetRecovery.c)
 *     NvmeControllerProcessPendingRequestForResetRecovery @ 0x14013761C (NvmeControllerProcessPendingRequestForResetRecovery.c)
 */

char __fastcall NvmeControllerResetRecovery(ULONG_PTR a1, int a2)
{
  volatile signed __int32 *v4; // rcx
  char v5; // si
  int v6; // edi
  char v7; // bp
  char v8; // dl
  int v9; // r14d
  __int64 v10; // rdx
  int v11; // r8d
  bool v12; // zf
  __int64 v13; // rdx
  unsigned int v14; // r8d
  __int64 v15; // rcx
  unsigned int v16; // edx
  __int64 v17; // rdi
  __int64 v18; // rax
  _QWORD *v19; // rcx
  __int128 v20; // xmm1
  signed __int32 v22[8]; // [rsp+0h] [rbp-E8h] BYREF
  const wchar_t *v23; // [rsp+40h] [rbp-A8h]
  __int64 v24; // [rsp+48h] [rbp-A0h]
  const wchar_t *v25; // [rsp+50h] [rbp-98h]
  __int64 v26; // [rsp+58h] [rbp-90h]
  const wchar_t *v27; // [rsp+60h] [rbp-88h]
  __int64 v28; // [rsp+68h] [rbp-80h]
  const wchar_t *v29; // [rsp+70h] [rbp-78h]
  __int64 v30; // [rsp+78h] [rbp-70h]
  const wchar_t *v31; // [rsp+80h] [rbp-68h]
  __int64 v32; // [rsp+88h] [rbp-60h]
  const wchar_t *v33; // [rsp+90h] [rbp-58h]
  __int64 v34; // [rsp+98h] [rbp-50h]
  __int128 v35; // [rsp+A0h] [rbp-48h]
  __int128 v36; // [rsp+B0h] [rbp-38h]

  v4 = *(volatile signed __int32 **)(a1 + 1288);
  v5 = 1;
  if ( !v4 || *(_DWORD *)(*(_QWORD *)(a1 + 128) + 84LL) != 1 )
  {
    v6 = -1073741436;
    v7 = a2;
    goto LABEL_23;
  }
  if ( _InterlockedCompareExchange(v4, 1, 0) )
  {
    v6 = 259;
    goto LABEL_16;
  }
  v7 = a2;
  StorEtwNvmeControllerEvent(
    a1,
    1,
    4,
    (__int64)L"Controller reset recovery started",
    L"ResetReason",
    a2,
    &word_140150F48,
    0,
    &word_140150F48,
    0,
    &word_140150F48,
    0,
    (void *)&word_140150F48,
    0,
    (void *)&word_140150F48,
    0,
    (void *)&word_140150F48,
    0,
    (void *)&word_140150F48,
    0);
  if ( FeatureFixTRIMAddSCSIPassthrough && IsNvmeControllerGone(a1) )
  {
    NvmeAdapterCompleteAllRequestsForSurpriseRemove(*(_QWORD *)(a1 + 128));
    v6 = -1073741810;
    _InterlockedExchange(*(volatile __int32 **)(a1 + 1288), 0);
LABEL_23:
    v5 = 0;
LABEL_24:
    v18 = *(int *)(a1 + 1192);
    v34 = 0LL;
    v33 = &word_140150F48;
    v32 = 0LL;
    v31 = &word_140150F48;
    v30 = 0LL;
    v29 = &word_140150F48;
    v28 = 0LL;
    v27 = &word_140150F48;
    v26 = v18;
    v25 = L"ControllerErrorState";
    v24 = v6;
    v23 = L"Status";
    StorEtwNvmeControllerEvent(
      a1,
      1,
      2,
      (__int64)L"Controller reset recovery failed",
      L"ResetReason",
      v7,
      L"ControllerState",
      *(_QWORD *)(a1 + 968),
      L"Status",
      v6,
      L"ControllerErrorState",
      v18,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0);
    goto LABEL_16;
  }
  _interlockedbittestandset((volatile signed __int32 *)(a1 + 948), 1u);
  NvmeControllerCancelAllIoCompletionDPCs(a1);
  NvmeControllerCompletionDpcQuiesce(a1);
  NvmeControllerDrainAllFreeCommandIdFromIoSQs(a1);
  NvmeControllerSubmissionQueueQuiesce(a1);
  _interlockedbittestandset((volatile signed __int32 *)(a1 + 1072), 4u);
  NvmeControllerCompletionQueuePollingQuiesce(a1);
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1072), 4u);
  NvmeControllerProcessPendingRequestForResetRecovery(a1, a2);
  *(_QWORD *)(a1 + 968) &= ~1uLL;
  v9 = NvmeControllerReset(a1, v8, a2);
  if ( v9 >= 0 )
  {
    if ( NvmeControllerIsOutstandingRequestInResetRecovery(a1) )
      KeBugCheckEx(0x176u, 4uLL, a1, 0LL, 0LL);
    NvmeControllerReinitialize((_QWORD *)a1, v10, v11);
  }
  else
  {
    v5 = 0;
    NvmeControllerQueuesReInit(a1);
  }
  **(_QWORD **)(*(_QWORD *)(a1 + 1288) + 40LL) = KeQueryUnbiasedInterruptTime();
  _InterlockedOr(v22, 0);
  _InterlockedCompareExchange(*(volatile signed __int32 **)(a1 + 1288), 2, 1);
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 948), 1u);
  _InterlockedExchange(*(volatile __int32 **)(a1 + 1288), 0);
  NvmeControllerRestart(a1);
  NvmeControllerFreePendingZombieCommands(a1);
  v6 = v9;
  if ( v9 < 0 )
    goto LABEL_24;
  if ( !v9 )
    StorEtwNvmeControllerEvent(
      a1,
      1,
      4,
      (__int64)L"Controller reset recovery succeeded",
      L"ResetReason",
      v7,
      &word_140150F48,
      0,
      &word_140150F48,
      0,
      &word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0);
LABEL_16:
  if ( (*(_BYTE *)(a1 + 1360) & 0x10) != 0 )
  {
    v12 = *(_DWORD *)a1 == 1314276178;
    v35 = 0LL;
    LODWORD(v35) = v6;
    BYTE4(v35) = v5;
    v36 = 0LL;
    if ( v12 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 1368) + 8LL * KeGetCurrentProcessorNumberEx(0LL));
      v14 = *(_DWORD *)(v13 + 12);
      v15 = v13 + 64;
      _InterlockedOr(v22, 0);
      if ( v14 )
      {
        if ( v13 != -64 )
        {
          v16 = _InterlockedIncrement((volatile signed __int32 *)v13) % v14;
          v17 = v15 + ((unsigned __int64)v16 << 6);
          if ( (*(_DWORD *)(a1 + 1336) & 1) != 0 )
            *(_DWORD *)(v17 + 4) = _InterlockedIncrement((volatile signed __int32 *)(a1 + 1408));
          else
            *(_DWORD *)(v17 + 4) = v16;
          *(_DWORD *)v17 = 2;
          v19 = (_QWORD *)(v17 + 8);
          if ( (*(_DWORD *)(a1 + 1336) & 2) != 0 )
            KeQuerySystemTimePrecise(v19);
          else
            *v19 = MEMORY[0xFFFFF78000000014];
          v20 = v36;
          *(_OWORD *)(v17 + 16) = v35;
          *(_OWORD *)(v17 + 32) = v20;
        }
      }
    }
  }
  return v5;
}

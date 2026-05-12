/*
 * XREFs of NvmeControllerRestart @ 0x1400F4DB4
 * Callers:
 *     NvmeAdapterRestart @ 0x1400D6CDC (NvmeAdapterRestart.c)
 *     NvmeAdapterNvmeControllerRebuildAssociationWork @ 0x1400E4E20 (NvmeAdapterNvmeControllerRebuildAssociationWork.c)
 *     NvmeCompleteSubmissionQueueRequests @ 0x1400E9958 (NvmeCompleteSubmissionQueueRequests.c)
 *     NvmeControllerRestartRoutine @ 0x1400F4EE0 (NvmeControllerRestartRoutine.c)
 *     NvmeControllerResetRecovery @ 0x140137858 (NvmeControllerResetRecovery.c)
 * Callees:
 *     NvmeNamespaceUnlockIoQueue @ 0x1401152B4 (NvmeNamespaceUnlockIoQueue.c)
 *     StorRestartDeviceCommandQueue @ 0x140127DE8 (StorRestartDeviceCommandQueue.c)
 *     StorRestartDeviceIoQueue @ 0x140127E4C (StorRestartDeviceIoQueue.c)
 *     StorRestartDeviceIoQueue2 @ 0x140127EA8 (StorRestartDeviceIoQueue2.c)
 */

void __fastcall NvmeControllerRestart(__int64 a1)
{
  char v2; // si
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  _QWORD *v8; // rdi
  _QWORD *i; // rbx
  _QWORD *v10; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0;
  **(_QWORD **)(*(_QWORD *)(a1 + 1288) + 40LL) = KeQueryUnbiasedInterruptTime();
  _interlockedbittestandreset(*(volatile signed __int32 **)(a1 + 1024), 2u);
  StorRestartDeviceCommandQueue(*(_QWORD *)(a1 + 1024));
  if ( (*(_BYTE *)(a1 + 136) & 2) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 128);
    if ( v3 )
    {
      v4 = *(_QWORD *)(v3 + 160);
      if ( v4 )
      {
        v5 = *(_DWORD *)(v4 + 76);
        if ( (v5 & 2) != 0 )
        {
          if ( (v5 & 0x20) != 0 )
            return;
          v2 = 1;
        }
      }
    }
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 632), &LockHandle);
  v8 = (_QWORD *)(a1 + 640);
  for ( i = *(_QWORD **)(a1 + 640); i != v8; i = (_QWORD *)*i )
  {
    v10 = i - 3;
    if ( !v2 || *(_BYTE *)(v10[16] + 1LL) != 1 )
    {
      if ( FeatureFixFUAForReadIoPerf )
        NvmeNamespaceUnlockIoQueue(v10);
      else
        _interlockedbittestandreset((volatile signed __int32 *)v10[32], 2u);
      if ( FeatureFixFUAForReadIoPerf )
        StorRestartDeviceIoQueue2(v10, v6, v7);
      else
        StorRestartDeviceIoQueue(v10[32]);
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}

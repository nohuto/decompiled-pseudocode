/*
 * XREFs of NvmeControllerQueueDecrementProcessingCount @ 0x1400F38B8
 * Callers:
 *     NvmeAdapterCompleteControllerQueueRequest @ 0x1400DF110 (NvmeAdapterCompleteControllerQueueRequest.c)
 *     NvmeAdapterProcessControllerQueueRequestAsync @ 0x1400E631C (NvmeAdapterProcessControllerQueueRequestAsync.c)
 *     NvmeAdapterProcessControllerQueueRequestSync @ 0x1400E6500 (NvmeAdapterProcessControllerQueueRequestSync.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeControllerQueueDecrementProcessingCount(__int64 a1)
{
  KSPIN_LOCK *v2; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = (KSPIN_LOCK *)(*(_QWORD *)(a1 + 88) + 720LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
  --*(_WORD *)(a1 + 146);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}

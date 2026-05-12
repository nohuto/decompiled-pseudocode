/*
 * XREFs of NvmeAdapterCleanupControllerQueueRequest @ 0x1400DEF20
 * Callers:
 *     NvmeAdapterCompleteControllerQueueRequest @ 0x1400DF110 (NvmeAdapterCompleteControllerQueueRequest.c)
 *     NvmeAdapterProcessControllerQueueRequestAsync @ 0x1400E631C (NvmeAdapterProcessControllerQueueRequestAsync.c)
 *     NvmeAdapterProcessControllerQueueRequestSync @ 0x1400E6500 (NvmeAdapterProcessControllerQueueRequestSync.c)
 * Callees:
 *     NvmeAdapterDetachXrbFromSrb @ 0x1400E1884 (NvmeAdapterDetachXrbFromSrb.c)
 *     NvmeAdapterReleaseControllerQueueSlot @ 0x1400E6F74 (NvmeAdapterReleaseControllerQueueSlot.c)
 */

void __fastcall NvmeAdapterCleanupControllerQueueRequest(__int64 a1, __int64 a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 104), &LockHandle);
  NvmeAdapterReleaseControllerQueueSlot(a1, *(unsigned __int16 *)(a2 + 780));
  NvmeAdapterDetachXrbFromSrb(a2);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}

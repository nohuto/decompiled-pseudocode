/*
 * XREFs of PiPnpRtlOperationListReleaseLock @ 0x1408D0B10
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x140836F20 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlBeginOperation @ 0x1408D0818 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408D09F8 (PiPnpRtlEndOperation.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 */

__int64 PiPnpRtlOperationListReleaseLock()
{
  ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}

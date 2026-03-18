/*
 * XREFs of PiPnpRtlOperationListReleaseLock @ 0x1408CC270
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x1408B9D40 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlBeginOperation @ 0x1408CBF78 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408CC158 (PiPnpRtlEndOperation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 */

__int64 PiPnpRtlOperationListReleaseLock()
{
  ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
  return KeLeaveCriticalRegionThread();
}

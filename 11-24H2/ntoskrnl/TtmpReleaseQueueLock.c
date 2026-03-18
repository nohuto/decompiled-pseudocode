/*
 * XREFs of TtmpReleaseQueueLock @ 0x140770E60
 * Callers:
 *     TtmiWriteEventToAllQueues @ 0x14076A34C (TtmiWriteEventToAllQueues.c)
 *     TtmiRetrieveEventFromQueue @ 0x140770A58 (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x140770BA4 (TtmiWriteEventToSingleQueue.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 */

void __fastcall TtmpReleaseQueueLock(__int64 a1)
{
  ExReleaseResourceLite((PERESOURCE)(a1 + 24));
  KeLeaveCriticalRegion();
}

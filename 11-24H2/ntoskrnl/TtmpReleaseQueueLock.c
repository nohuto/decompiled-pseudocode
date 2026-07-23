/*
 * XREFs of TtmpReleaseQueueLock @ 0x140771080
 * Callers:
 *     TtmiWriteEventToAllQueues @ 0x14076A56C (TtmiWriteEventToAllQueues.c)
 *     TtmiRetrieveEventFromQueue @ 0x140770C78 (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x140770DC4 (TtmiWriteEventToSingleQueue.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 */

void __fastcall TtmpReleaseQueueLock(__int64 a1)
{
  ExReleaseResourceLite((PERESOURCE)(a1 + 24));
  KeLeaveCriticalRegion();
}

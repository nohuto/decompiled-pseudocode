/*
 * XREFs of CmpForceFlushForCoalescing @ 0x14088740C
 * Callers:
 *     CmpCoalescingCallback @ 0x1404A7810 (CmpCoalescingCallback.c)
 *     HvpMarkDirty @ 0x140886940 (HvpMarkDirty.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 */

void CmpForceFlushForCoalescing()
{
  if ( !BYTE1(NlsMbOemCodePageTag)
    && CmpWorkerDataInitialized
    && !CmpForceFlushPending
    && !_InterlockedCompareExchange(&CmpForceFlushPending, 1, 0) )
  {
    ExQueueWorkItem(&CmpForceFlushWorkItem, DelayedWorkQueue);
  }
}

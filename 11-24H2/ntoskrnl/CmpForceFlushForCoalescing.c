/*
 * XREFs of CmpForceFlushForCoalescing @ 0x14088355C
 * Callers:
 *     CmpCoalescingCallback @ 0x1404AD130 (CmpCoalescingCallback.c)
 *     HvpMarkDirty @ 0x140882A90 (HvpMarkDirty.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
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

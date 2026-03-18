/*
 * XREFs of CmpForceFlushForCoalescing @ 0x14088166C
 * Callers:
 *     CmpCoalescingCallback @ 0x1404ABD30 (CmpCoalescingCallback.c)
 *     HvpMarkDirty @ 0x140880BA0 (HvpMarkDirty.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
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

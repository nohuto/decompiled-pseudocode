/*
 * XREFs of CmpDelayFreeRMDpcRoutine @ 0x14065C8A0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 */

void CmpDelayFreeRMDpcRoutine()
{
  ExQueueWorkItem(&CmpDelayFreeRMWorkItem, DelayedWorkQueue);
}

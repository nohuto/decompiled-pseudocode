/*
 * XREFs of HalpBlkWdTimerRoutine @ 0x14056A150
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 */

void HalpBlkWdTimerRoutine()
{
  if ( (_DWORD)HalpBlkNumberProcessors )
  {
    if ( !_InterlockedExchange(&HalpBlkWdPollingInProgress, 1) )
      ExQueueWorkItem(&HalpBlkWdWorkItem, DelayedWorkQueue);
  }
}

/*
 * XREFs of HalpBlkWdTimerRoutine @ 0x14056A8E0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 */

void HalpBlkWdTimerRoutine()
{
  if ( (_DWORD)HalpBlkNumberProcessors )
  {
    if ( !_InterlockedExchange(&HalpBlkWdPollingInProgress, 1) )
      ExQueueWorkItem(&HalpBlkWdWorkItem, DelayedWorkQueue);
  }
}

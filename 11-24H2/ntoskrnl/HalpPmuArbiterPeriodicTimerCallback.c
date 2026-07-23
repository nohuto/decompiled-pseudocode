/*
 * XREFs of HalpPmuArbiterPeriodicTimerCallback @ 0x1405436D0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 */

void HalpPmuArbiterPeriodicTimerCallback()
{
  if ( !_InterlockedExchange(&dword_140FC2038, 1) )
    ExQueueWorkItem(&stru_140FC2018, DelayedWorkQueue);
}

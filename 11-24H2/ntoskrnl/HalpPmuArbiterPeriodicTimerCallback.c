/*
 * XREFs of HalpPmuArbiterPeriodicTimerCallback @ 0x140545E10
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 */

void HalpPmuArbiterPeriodicTimerCallback()
{
  if ( !_InterlockedExchange(&dword_140FC1DD8, 1) )
    ExQueueWorkItem(&stru_140FC1DB8, DelayedWorkQueue);
}

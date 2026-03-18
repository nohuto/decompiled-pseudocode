/*
 * XREFs of HalpPmuArbiterPeriodicTimerCallback @ 0x140543520
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 */

void HalpPmuArbiterPeriodicTimerCallback()
{
  if ( !_InterlockedExchange(&dword_140FC1638, 1) )
    ExQueueWorkItem(&stru_140FC1618, DelayedWorkQueue);
}

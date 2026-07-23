/*
 * XREFs of WheaFlushETWEventsDpcRoutine @ 0x14065C680
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 */

void WheaFlushETWEventsDpcRoutine()
{
  ExQueueWorkItem(&stru_140EF7CE0, DelayedWorkQueue);
}

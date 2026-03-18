/*
 * XREFs of WheaFlushETWEventsDpcRoutine @ 0x14065DEB0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 */

void WheaFlushETWEventsDpcRoutine()
{
  ExQueueWorkItem(&stru_140EF9A60, DelayedWorkQueue);
}

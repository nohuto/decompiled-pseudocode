/*
 * XREFs of PopUserShutdownCalloutDelayTimerCallback @ 0x1405D12E0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140491E08 (PopQueueWorkItem.c)
 */

char PopUserShutdownCalloutDelayTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140F0C5A8, DelayedWorkQueue);
}

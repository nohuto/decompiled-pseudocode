/*
 * XREFs of PopUserShutdownCalloutDelayTimerCallback @ 0x1405D3BC0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140497478 (PopQueueWorkItem.c)
 */

char PopUserShutdownCalloutDelayTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140F0C248, DelayedWorkQueue);
}

/*
 * XREFs of PopPowerRequestDebounceTimerCallback @ 0x1405CB150
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140491E08 (PopQueueWorkItem.c)
 */

char PopPowerRequestDebounceTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140F0E388, DelayedWorkQueue);
}

/*
 * XREFs of PopPowerRequestDebounceTimerCallback @ 0x1405CD9E0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140497478 (PopQueueWorkItem.c)
 */

char PopPowerRequestDebounceTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140F0E1E8, DelayedWorkQueue);
}

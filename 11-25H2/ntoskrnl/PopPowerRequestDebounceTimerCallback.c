/*
 * XREFs of PopPowerRequestDebounceTimerCallback @ 0x1405C93D0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140497BA0 (PopQueueWorkItem.c)
 */

char PopPowerRequestDebounceTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140F0D968, DelayedWorkQueue);
}

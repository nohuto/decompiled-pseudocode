/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x1405D4230
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140497478 (PopQueueWorkItem.c)
 */

char PopCheckPowerSourceAfterRtcWakeTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140F0AAE8, DelayedWorkQueue);
}

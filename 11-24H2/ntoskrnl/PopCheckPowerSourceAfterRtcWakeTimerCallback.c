/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x1405D19F0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140491E08 (PopQueueWorkItem.c)
 */

char PopCheckPowerSourceAfterRtcWakeTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140F0AC88, DelayedWorkQueue);
}

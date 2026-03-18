/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x1405CF820
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140497BA0 (PopQueueWorkItem.c)
 */

char PopCheckPowerSourceAfterRtcWakeTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140F0A448, DelayedWorkQueue);
}

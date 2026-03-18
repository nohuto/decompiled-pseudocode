/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeInitialize @ 0x1405D4174
 * Callers:
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     PopInitializeTimer @ 0x140749388 (PopInitializeTimer.c)
 */

__int64 PopCheckPowerSourceAfterRtcWakeInitialize()
{
  __int64 result; // rax

  PopInitializeTimer(
    (unsigned int)&PopCheckPowerSourceAfterRtcWakeTimer,
    (unsigned int)PopCheckPowerSourceAfterRtcWakeTimerCallback,
    0,
    (unsigned int)PopCheckPowerSourceAfterRtcWakeTimerWorker,
    0LL);
  LOWORD(PopCheckPowerSourceAfterRtcWakeCompleted.Header.Lock) = 0;
  PopCheckPowerSourceAfterRtcWakeCompleted.Header.WaitListHead.Blink = &PopCheckPowerSourceAfterRtcWakeCompleted.Header.WaitListHead;
  PopCheckPowerSourceAfterRtcWakeCompleted.Header.WaitListHead.Flink = &PopCheckPowerSourceAfterRtcWakeCompleted.Header.WaitListHead;
  result = 0LL;
  PopCheckPowerSourceAfterRtcWakeCompleted.Header.Size = 6;
  PopCheckPowerSourceAfterRtcWakeCompleted.Header.SignalState = 1;
  return result;
}

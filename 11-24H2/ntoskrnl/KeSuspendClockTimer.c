/*
 * XREFs of KeSuspendClockTimer @ 0x1404BA350
 * Callers:
 *     PopHandleNextState @ 0x140B67F50 (PopHandleNextState.c)
 * Callees:
 *     KiSuspendClockTimer @ 0x1404BA368 (KiSuspendClockTimer.c)
 */

__int64 KeSuspendClockTimer()
{
  return KiSuspendClockTimer();
}

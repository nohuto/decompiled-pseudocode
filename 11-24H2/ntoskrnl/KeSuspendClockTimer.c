/*
 * XREFs of KeSuspendClockTimer @ 0x1404BEE1C
 * Callers:
 *     PopHandleNextState @ 0x140B65E10 (PopHandleNextState.c)
 * Callees:
 *     KiSuspendClockTimer @ 0x1404BEE34 (KiSuspendClockTimer.c)
 */

__int64 KeSuspendClockTimer()
{
  return KiSuspendClockTimer();
}

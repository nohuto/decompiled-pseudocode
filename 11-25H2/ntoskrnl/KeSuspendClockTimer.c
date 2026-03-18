/*
 * XREFs of KeSuspendClockTimer @ 0x1404C0710
 * Callers:
 *     PopHandleNextState @ 0x140B55D00 (PopHandleNextState.c)
 * Callees:
 *     KiSuspendClockTimer @ 0x1404C0728 (KiSuspendClockTimer.c)
 */

__int64 KeSuspendClockTimer()
{
  return KiSuspendClockTimer();
}

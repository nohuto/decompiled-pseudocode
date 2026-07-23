/*
 * XREFs of KiCancelClockTimerKTimerDeadlines @ 0x1405B77E8
 * Callers:
 *     KePrepareClockTimerForIdle @ 0x1405B675C (KePrepareClockTimerForIdle.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405B6AE0 (KePrepareClockTimerForPlatformIdle.c)
 * Callees:
 *     KiCancelClockTimer @ 0x140462E90 (KiCancelClockTimer.c)
 */

char __fastcall KiCancelClockTimerKTimerDeadlines(__int64 a1)
{
  KiCancelClockTimer(a1, 1, 0);
  return KiCancelClockTimer(a1, 2, 0);
}

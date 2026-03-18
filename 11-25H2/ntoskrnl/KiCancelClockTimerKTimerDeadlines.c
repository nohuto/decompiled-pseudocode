/*
 * XREFs of KiCancelClockTimerKTimerDeadlines @ 0x1405B6394
 * Callers:
 *     KePrepareClockTimerForIdle @ 0x1405B52DC (KePrepareClockTimerForIdle.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405B5660 (KePrepareClockTimerForPlatformIdle.c)
 * Callees:
 *     KiCancelClockTimer @ 0x1403E9910 (KiCancelClockTimer.c)
 */

char __fastcall KiCancelClockTimerKTimerDeadlines(__int64 a1)
{
  KiCancelClockTimer(a1, 1, 0);
  return KiCancelClockTimer(a1, 2, 0);
}

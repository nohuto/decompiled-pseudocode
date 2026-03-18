/*
 * XREFs of KiCancelClockTimerKTimerDeadlines @ 0x1405BA1B8
 * Callers:
 *     KePrepareClockTimerForIdle @ 0x1405B911C (KePrepareClockTimerForIdle.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405B94A0 (KePrepareClockTimerForPlatformIdle.c)
 * Callees:
 *     KiCancelClockTimer @ 0x140469F60 (KiCancelClockTimer.c)
 */

char __fastcall KiCancelClockTimerKTimerDeadlines(__int64 a1)
{
  KiCancelClockTimer(a1, 1, 0);
  return KiCancelClockTimer(a1, 2, 0);
}

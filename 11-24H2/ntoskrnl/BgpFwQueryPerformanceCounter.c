/*
 * XREFs of BgpFwQueryPerformanceCounter @ 0x1404B0FB4
 * Callers:
 *     AnFwpProgressAnimationManual @ 0x140BB427C (AnFwpProgressAnimationManual.c)
 *     AnFwpFadeAnimationTimer @ 0x140BB4F50 (AnFwpFadeAnimationTimer.c)
 *     AnFwFadeCompletion @ 0x140BB558C (AnFwFadeCompletion.c)
 *     AnFwDisplayFade @ 0x140BB56EC (AnFwDisplayFade.c)
 *     LogFwReport @ 0x140BB63FC (LogFwReport.c)
 *     LogFwStat @ 0x140BB6790 (LogFwStat.c)
 *     AnFwpProgressIndicatorTimer @ 0x140BB69D0 (AnFwpProgressIndicatorTimer.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER __fastcall BgpFwQueryPerformanceCounter(LARGE_INTEGER *a1)
{
  return KeQueryPerformanceCounter(a1);
}

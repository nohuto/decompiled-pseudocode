/*
 * XREFs of BgpFwQueryPerformanceCounter @ 0x1404B67D4
 * Callers:
 *     AnFwpProgressAnimationManual @ 0x140BB227C (AnFwpProgressAnimationManual.c)
 *     AnFwpFadeAnimationTimer @ 0x140BB2F50 (AnFwpFadeAnimationTimer.c)
 *     AnFwFadeCompletion @ 0x140BB358C (AnFwFadeCompletion.c)
 *     AnFwDisplayFade @ 0x140BB36EC (AnFwDisplayFade.c)
 *     LogFwReport @ 0x140BB43FC (LogFwReport.c)
 *     LogFwStat @ 0x140BB4790 (LogFwStat.c)
 *     AnFwpProgressIndicatorTimer @ 0x140BB49D0 (AnFwpProgressIndicatorTimer.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER __fastcall BgpFwQueryPerformanceCounter(LARGE_INTEGER *a1)
{
  return KeQueryPerformanceCounter(a1);
}

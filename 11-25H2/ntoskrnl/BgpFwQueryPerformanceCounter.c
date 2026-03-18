/*
 * XREFs of BgpFwQueryPerformanceCounter @ 0x1404B6CE4
 * Callers:
 *     AnFwpProgressAnimationManual @ 0x140BA227C (AnFwpProgressAnimationManual.c)
 *     AnFwpFadeAnimationTimer @ 0x140BA2F50 (AnFwpFadeAnimationTimer.c)
 *     AnFwFadeCompletion @ 0x140BA358C (AnFwFadeCompletion.c)
 *     AnFwDisplayFade @ 0x140BA36EC (AnFwDisplayFade.c)
 *     LogFwReport @ 0x140BA43FC (LogFwReport.c)
 *     LogFwStat @ 0x140BA4790 (LogFwStat.c)
 *     AnFwpProgressIndicatorTimer @ 0x140BA49D0 (AnFwpProgressIndicatorTimer.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER __fastcall BgpFwQueryPerformanceCounter(LARGE_INTEGER *a1)
{
  return KeQueryPerformanceCounter(a1);
}

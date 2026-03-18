/*
 * XREFs of HalpWatchdogDelayExpiration @ 0x1405488C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     HalpSetTimer @ 0x14028F6F0 (HalpSetTimer.c)
 */

__int64 __fastcall HalpWatchdogDelayExpiration(_QWORD *a1)
{
  __int64 v1; // rbx
  unsigned __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = HalpWatchdogTimer;
  if ( a1 )
    *a1 = HalpTimerWatchdogResetCount;
  if ( !v1 || !HalpTimerWatchdogArmed )
    return 0LL;
  if ( HalpTimerProcessorsFrozen
    && HalpTimerWatchdogLastReset + 3000000000LL >= (unsigned __int64)RtlGetInterruptTimePrecise(&v3) )
  {
    return HalpSetTimer(v1, 3u, HalpTimerWatchdogTimeout, 1, &v3);
  }
  return 3221225473LL;
}

/*
 * XREFs of HalpWatchdogDelayExpiration @ 0x14054B1B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     HalpSetTimer @ 0x1403BC5B0 (HalpSetTimer.c)
 */

__int64 __fastcall HalpWatchdogDelayExpiration(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r9
  unsigned __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v1 = HalpWatchdogTimer;
  if ( a1 )
    *a1 = HalpTimerWatchdogResetCount;
  if ( !v1 || !HalpTimerWatchdogArmed )
    return 0LL;
  if ( !HalpTimerProcessorsFrozen
    || HalpTimerWatchdogLastReset + 3000000000LL < (unsigned __int64)RtlGetInterruptTimePrecise(&v4) )
  {
    return 3221225473LL;
  }
  LOBYTE(v2) = 1;
  return HalpSetTimer(v1, 3u, HalpTimerWatchdogTimeout, v2, &v4);
}

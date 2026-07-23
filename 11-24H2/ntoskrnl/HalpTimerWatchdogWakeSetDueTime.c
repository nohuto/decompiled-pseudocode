/*
 * XREFs of HalpTimerWatchdogWakeSetDueTime @ 0x1404BF254
 * Callers:
 *     HalpTimerWatchdogResetCountdown @ 0x1403196D0 (HalpTimerWatchdogResetCountdown.c)
 *     HalpTimerWatchdogStart @ 0x1405488A0 (HalpTimerWatchdogStart.c)
 * Callees:
 *     <none>
 */

void HalpTimerWatchdogWakeSetDueTime()
{
  unsigned __int64 v0; // rax
  unsigned __int64 v1; // rax

  if ( !HalpWatchdogTimer || (*(_DWORD *)(HalpWatchdogTimer + 224) & 0x80000) == 0 )
  {
    v0 = HalpTimerWatchdogTimeout;
    if ( HalpWatchdogTimer && *(_DWORD *)(HalpWatchdogTimer + 228) == 8 )
      v0 = (unsigned __int64)HalpTimerWatchdogTimeout >> 1;
    if ( v0 <= 0x2FAF0800 )
      v1 = v0 >> 1;
    else
      v1 = v0 - 600000000;
    HalpWatchdogWakeDueTime = HalpTimerWatchdogLastReset + v1;
  }
}

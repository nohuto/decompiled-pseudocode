/*
 * XREFs of HalpTimerWatchdogStop @ 0x14054B070
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void HalpTimerWatchdogStop()
{
  __int64 InternalData; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  if ( HalpWatchdogTimer )
  {
    ++HalpTimerWatchdogStopCount;
    if ( HalpTimerWatchdogArmed )
    {
      InternalData = HalpTimerGetInternalData(HalpWatchdogTimer);
      guard_dispatch_icall_no_overrides(InternalData, v1, v2, v3);
      HalpWatchdogWakeDueTime = 0LL;
      HalpTimerWatchdogArmed = 0;
    }
  }
}

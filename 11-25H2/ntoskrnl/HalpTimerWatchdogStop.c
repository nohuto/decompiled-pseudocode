/*
 * XREFs of HalpTimerWatchdogStop @ 0x140548780
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x14027A960 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void HalpTimerWatchdogStop()
{
  __int64 InternalData; // rax

  if ( HalpWatchdogTimer )
  {
    ++HalpTimerWatchdogStopCount;
    if ( HalpTimerWatchdogArmed )
    {
      InternalData = HalpTimerGetInternalData(HalpWatchdogTimer);
      guard_dispatch_icall_no_overrides(InternalData);
      HalpWatchdogWakeDueTime = 0LL;
      HalpTimerWatchdogArmed = 0;
    }
  }
}

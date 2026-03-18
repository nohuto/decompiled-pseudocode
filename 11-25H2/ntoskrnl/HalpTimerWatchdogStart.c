/*
 * XREFs of HalpTimerWatchdogStart @ 0x1405486F0
 * Callers:
 *     HalpTimerInitializeSystemWatchdog @ 0x14054856C (HalpTimerInitializeSystemWatchdog.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14027A960 (HalpTimerGetInternalData.c)
 *     HalpSetTimer @ 0x14028F6F0 (HalpSetTimer.c)
 *     HalpTimerWatchdogWakeSetDueTime @ 0x1404C5644 (HalpTimerWatchdogWakeSetDueTime.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void HalpTimerWatchdogStart()
{
  __int64 v0; // rbx
  int v1; // eax
  __int64 InternalData; // rax
  unsigned __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  v0 = HalpWatchdogTimer;
  if ( HalpWatchdogTimer )
  {
    v1 = HalpTimerWatchdogStopCount;
    if ( HalpTimerWatchdogStopCount < 0 || (--HalpTimerWatchdogStopCount, v1 - 1 < 0) )
    {
      InternalData = HalpTimerGetInternalData(HalpWatchdogTimer);
      guard_dispatch_icall_no_overrides(InternalData);
      HalpTimerWatchdogLastReset = MEMORY[0xFFFFF78000000008];
      if ( (int)HalpSetTimer(v0, 3u, HalpTimerWatchdogTimeout, 1, &v3) >= 0 )
      {
        HalpTimerWatchdogArmed = 1;
        HalpTimerWatchdogWakeSetDueTime();
      }
    }
  }
}

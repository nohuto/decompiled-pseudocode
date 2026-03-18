/*
 * XREFs of HalpTimerWatchdogStart @ 0x14054AFE0
 * Callers:
 *     HalpTimerInitializeSystemWatchdog @ 0x14054AE5C (HalpTimerInitializeSystemWatchdog.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     HalpSetTimer @ 0x1403BC5B0 (HalpSetTimer.c)
 *     HalpTimerWatchdogWakeSetDueTime @ 0x1404C3D24 (HalpTimerWatchdogWakeSetDueTime.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void HalpTimerWatchdogStart()
{
  __int64 v0; // rbx
  int v1; // eax
  __int64 InternalData; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r9
  unsigned __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v0 = HalpWatchdogTimer;
  if ( HalpWatchdogTimer )
  {
    v1 = HalpTimerWatchdogStopCount;
    if ( HalpTimerWatchdogStopCount < 0 || (--HalpTimerWatchdogStopCount, v1 - 1 < 0) )
    {
      InternalData = HalpTimerGetInternalData(HalpWatchdogTimer);
      guard_dispatch_icall_no_overrides(InternalData, v3, v4, v5);
      LOBYTE(v6) = 1;
      HalpTimerWatchdogLastReset = MEMORY[0xFFFFF78000000008];
      if ( (int)HalpSetTimer(v0, 3u, HalpTimerWatchdogTimeout, v6, &v7) >= 0 )
      {
        HalpTimerWatchdogArmed = 1;
        HalpTimerWatchdogWakeSetDueTime();
      }
    }
  }
}

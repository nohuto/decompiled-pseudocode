/*
 * XREFs of HalpTimerPowerChange @ 0x140545F80
 * Callers:
 *     HalpTimerPowerCriticalTransitionCallback @ 0x1405460A0 (HalpTimerPowerCriticalTransitionCallback.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HalpTimerClockPowerChange @ 0x140544330 (HalpTimerClockPowerChange.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x1405458C8 (HalpTimerPerformanceCounterPowerChange.c)
 *     HalpTimerStallCounterPowerChange @ 0x140546208 (HalpTimerStallCounterPowerChange.c)
 *     HalpTimerRestartProfileInterrupt @ 0x140547834 (HalpTimerRestartProfileInterrupt.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpTimerPowerChange(ULONG_PTR BugCheckParameter3, char a2)
{
  __int64 InternalData; // rax
  __int64 v5; // rdx

  if ( a2 )
  {
    *(_DWORD *)(BugCheckParameter3 + 184) &= ~0x80u;
  }
  else if ( (*(_DWORD *)(BugCheckParameter3 + 224) & 0x8000) != 0 )
  {
    KeBugCheckEx(0x5Cu, 0x113uLL, 0x20uLL, BugCheckParameter3, 0LL);
  }
  if ( BugCheckParameter3 == HalpClockTimer )
    HalpTimerClockPowerChange(BugCheckParameter3, a2);
  if ( BugCheckParameter3 == HalpPerformanceCounter || BugCheckParameter3 == HalpTimerSavedPerformanceCounter )
    HalpTimerPerformanceCounterPowerChange(BugCheckParameter3, a2);
  if ( BugCheckParameter3 == HalpStallCounter || BugCheckParameter3 == HalpSavedStallCounter )
    HalpTimerStallCounterPowerChange(BugCheckParameter3);
  if ( BugCheckParameter3 != HalpProfileTimer )
  {
    if ( a2 )
      return;
    goto LABEL_20;
  }
  if ( !a2 )
  {
LABEL_20:
    *(_DWORD *)(BugCheckParameter3 + 184) |= 0x80u;
    return;
  }
  InternalData = HalpTimerGetInternalData(HalpProfileTimer);
  if ( (int)guard_dispatch_icall_no_overrides(InternalData, v5) >= 0 )
  {
    if ( HalpProfilingActive )
      HalpTimerRestartProfileInterrupt();
  }
  else
  {
    *(_DWORD *)(BugCheckParameter3 + 184) = *(_DWORD *)(BugCheckParameter3 + 184) & 0xFFFFFFFC | 1;
  }
}

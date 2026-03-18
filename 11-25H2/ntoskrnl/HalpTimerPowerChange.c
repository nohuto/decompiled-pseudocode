/*
 * XREFs of HalpTimerPowerChange @ 0x140545DD0
 * Callers:
 *     HalpTimerPowerCriticalTransitionCallback @ 0x140545EF0 (HalpTimerPowerCriticalTransitionCallback.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14027A960 (HalpTimerGetInternalData.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     HalpTimerClockPowerChange @ 0x140544180 (HalpTimerClockPowerChange.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x140545718 (HalpTimerPerformanceCounterPowerChange.c)
 *     HalpTimerStallCounterPowerChange @ 0x140546058 (HalpTimerStallCounterPowerChange.c)
 *     HalpTimerRestartProfileInterrupt @ 0x140547684 (HalpTimerRestartProfileInterrupt.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpTimerPowerChange(ULONG_PTR BugCheckParameter3, char a2)
{
  __int64 InternalData; // rax

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
  if ( (int)guard_dispatch_icall_no_overrides(InternalData) >= 0 )
  {
    if ( HalpProfilingActive )
      HalpTimerRestartProfileInterrupt();
  }
  else
  {
    *(_DWORD *)(BugCheckParameter3 + 184) = *(_DWORD *)(BugCheckParameter3 + 184) & 0xFFFFFFFC | 1;
  }
}

/*
 * XREFs of HalpTimerPowerChange @ 0x1405486C0
 * Callers:
 *     HalpTimerPowerCriticalTransitionCallback @ 0x1405487E0 (HalpTimerPowerCriticalTransitionCallback.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     HalpTimerClockPowerChange @ 0x140546A70 (HalpTimerClockPowerChange.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x140548008 (HalpTimerPerformanceCounterPowerChange.c)
 *     HalpTimerStallCounterPowerChange @ 0x140548948 (HalpTimerStallCounterPowerChange.c)
 *     HalpTimerRestartProfileInterrupt @ 0x140549F74 (HalpTimerRestartProfileInterrupt.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpTimerPowerChange(ULONG_PTR BugCheckParameter3, char a2)
{
  __int64 InternalData; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

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
  if ( (int)guard_dispatch_icall_no_overrides(InternalData, v5, v6, v7) >= 0 )
  {
    if ( HalpProfilingActive )
      HalpTimerRestartProfileInterrupt();
  }
  else
  {
    *(_DWORD *)(BugCheckParameter3 + 184) = *(_DWORD *)(BugCheckParameter3 + 184) & 0xFFFFFFFC | 1;
  }
}

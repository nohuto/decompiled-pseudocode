/*
 * XREFs of HalpTimerSwitchStallSource @ 0x1404F8D80
 * Callers:
 *     HalpAcpiPostSleep @ 0x140B6A5BC (HalpAcpiPostSleep.c)
 *     HalpAcpiPreSleep @ 0x140B6C5C8 (HalpAcpiPreSleep.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerSwitchStallSource(char a1)
{
  __int64 result; // rax
  __int64 InternalData; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  if ( a1 )
  {
    HalpSavedStallCounter = HalpStallCounter;
    result = HalpOriginalStallTimer;
  }
  else
  {
    if ( HalpSavedStallCounter != HalpPerformanceCounter )
    {
      InternalData = HalpTimerGetInternalData(HalpSavedStallCounter);
      guard_dispatch_icall_no_overrides(InternalData, v3, v4, v5);
    }
    result = HalpSavedStallCounter;
    HalpSavedStallCounter = 0LL;
  }
  HalpStallCounter = result;
  return result;
}

/*
 * XREFs of HalpTimerInitialize @ 0x140538BA8
 * Callers:
 *     HalpTimerInitializeEarlyStallSource @ 0x140538C4C (HalpTimerInitializeEarlyStallSource.c)
 *     HalpTimerSelectRoles @ 0x140539128 (HalpTimerSelectRoles.c)
 *     HalpTimerMeasureFrequencies @ 0x140545550 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x140547A84 (HalpTimerInitializeHypervisorTimer.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x1403BC024 (HalpTimerCalibratePerformanceCounter.c)
 *     HalpTimerSetProblemEx @ 0x1404F71C4 (HalpTimerSetProblemEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerInitialize(__int64 a1)
{
  int v2; // edi
  __int64 InternalData; // rax
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rdx

  if ( (*(_DWORD *)(a1 + 184) & 2) != 0 )
  {
    v2 = 0;
  }
  else
  {
    InternalData = HalpTimerGetInternalData(a1);
    v5 = guard_dispatch_icall_no_overrides(InternalData, v4);
    v2 = v5;
    if ( v5 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 224) & 2) != 0 )
      {
        v6 = HalpTimerGetInternalData(a1);
        _InterlockedExchange64((volatile __int64 *)(a1 + 200), guard_dispatch_icall_no_overrides(v6, v7));
        HalpTimerCalibratePerformanceCounter(a1, 0LL);
      }
    }
    else
    {
      HalpTimerSetProblemEx(a1, 15, v5, (__int64)"minkernel\\hals\\lib\\timers\\common\\timer.c", 0xA1Du);
    }
  }
  *(_DWORD *)(a1 + 184) |= (v2 >> 31) + 2;
  return (unsigned int)v2;
}

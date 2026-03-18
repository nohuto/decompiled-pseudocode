/*
 * XREFs of HalpTimerInitialize @ 0x14053B368
 * Callers:
 *     HalpTimerInitializeEarlyStallSource @ 0x14053B40C (HalpTimerInitializeEarlyStallSource.c)
 *     HalpTimerSelectRoles @ 0x14053B848 (HalpTimerSelectRoles.c)
 *     HalpTimerMeasureFrequencies @ 0x140547C90 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x14054A1C4 (HalpTimerInitializeHypervisorTimer.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x1403D69D4 (HalpTimerCalibratePerformanceCounter.c)
 *     HalpTimerSetProblemEx @ 0x1404F98E4 (HalpTimerSetProblemEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerInitialize(__int64 a1)
{
  int v2; // edi
  __int64 InternalData; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

  if ( (*(_DWORD *)(a1 + 184) & 2) != 0 )
  {
    v2 = 0;
  }
  else
  {
    InternalData = HalpTimerGetInternalData(a1);
    v7 = guard_dispatch_icall_no_overrides(InternalData, v4, v5, v6);
    v2 = v7;
    if ( v7 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 224) & 2) != 0 )
      {
        v8 = HalpTimerGetInternalData(a1);
        _InterlockedExchange64((volatile __int64 *)(a1 + 200), guard_dispatch_icall_no_overrides(v8, v9, v10, v11));
        HalpTimerCalibratePerformanceCounter(a1, 0LL);
      }
    }
    else
    {
      HalpTimerSetProblemEx(a1, 15, v7, (__int64)"minkernel\\hals\\lib\\timers\\common\\timer.c", 0xA1Du);
    }
  }
  *(_DWORD *)(a1 + 184) |= (v2 >> 31) + 2;
  return (unsigned int)v2;
}

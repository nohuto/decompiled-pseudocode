/*
 * XREFs of HalpFindTimer @ 0x140544A60
 * Callers:
 *     HalpInitializeTimers @ 0x140537E50 (HalpInitializeTimers.c)
 *     HalpTimerFindIdealClockSource @ 0x14053828C (HalpTimerFindIdealClockSource.c)
 *     HalpTimerFindIdealPerformanceCounterSource @ 0x1405384F0 (HalpTimerFindIdealPerformanceCounterSource.c)
 *     HalpTimerFindIdealScalingSource @ 0x140538640 (HalpTimerFindIdealScalingSource.c)
 *     HalpTimerFindIdealWatchdog @ 0x140538720 (HalpTimerFindIdealWatchdog.c)
 *     HalpTimerInitializeEarlyStallSource @ 0x140538C4C (HalpTimerInitializeEarlyStallSource.c)
 *     HalpTimerQueryCycleCounter @ 0x140538E40 (HalpTimerQueryCycleCounter.c)
 *     HalpTimerSelectRoles @ 0x140539128 (HalpTimerSelectRoles.c)
 *     HalpTimerFindBestAlwaysOnTimer @ 0x140545388 (HalpTimerFindBestAlwaysOnTimer.c)
 *     HalpTscAdvSynchLeader @ 0x140546820 (HalpTscAdvSynchLeader.c)
 *     HalpTscSynchronization @ 0x140547150 (HalpTscSynchronization.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x140547A84 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpTimerConfigureQpcBypass @ 0x140547F3C (HalpTimerConfigureQpcBypass.c)
 *     HalpTimerSaveProcessorFrequency @ 0x14054805C (HalpTimerSaveProcessorFrequency.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x140549AA0 (HalpTimerMeasureProcessorsWorker.c)
 * Callees:
 *     <none>
 */

ULONG_PTR *__fastcall HalpFindTimer(int a1, int a2, int a3, int a4, char a5)
{
  ULONG_PTR *v9; // r8
  ULONG_PTR *v10; // rdx
  ULONG_PTR *v11; // rsi
  ULONG_PTR *v12; // rbp
  ULONG_PTR *v13; // r10
  ULONG_PTR *v14; // r14
  int v15; // ecx
  int v16; // r11d
  ULONG_PTR v17; // rax
  ULONG_PTR v18; // rcx

  if ( !(_DWORD)HalpRegisteredTimerCount )
    return 0LL;
  v9 = (ULONG_PTR *)HalpRegisteredTimers;
  v10 = 0LL;
  while ( v9 != &HalpRegisteredTimers )
  {
    v11 = v9;
    v12 = v9;
    v13 = v9;
    v14 = v10;
    v9 = (ULONG_PTR *)*v9;
    v15 = *((_DWORD *)v11 + 46);
    if ( ((v15 & 0x100) == 0 || (a5 & 4) == 0)
      && (v15 & 1) == 0
      && ((v15 & 4) == 0 || (a5 & 1) != 0)
      && (!a1 || a1 == *((_DWORD *)v11 + 57)) )
    {
      v16 = *((_DWORD *)v13 + 56);
      if ( (a2 & v16) == a2 && (v16 & a3) == 0 && (!a4 || (v16 & a4) != 0) )
      {
        if ( v10 )
        {
          v17 = v11[24];
          v18 = v10[24];
          if ( (a5 & 2) != 0 )
          {
            v10 = v12;
            if ( v17 >= v18 )
              v10 = v14;
          }
          else if ( v17 > v18 )
          {
            v10 = v13;
          }
        }
        else
        {
          v10 = v13;
        }
      }
    }
  }
  if ( (a5 & 4) != 0 )
  {
    if ( v10 )
      *((_DWORD *)v10 + 46) |= 0x100u;
  }
  return v10;
}

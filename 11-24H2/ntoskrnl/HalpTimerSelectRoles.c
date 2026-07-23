/*
 * XREFs of HalpTimerSelectRoles @ 0x140539128
 * Callers:
 *     HalpInitializeTimers @ 0x140537E50 (HalpInitializeTimers.c)
 * Callees:
 *     HalpTimerPropagateQpcBiasUpdate @ 0x1403BC1A4 (HalpTimerPropagateQpcBiasUpdate.c)
 *     HalpTimerSetProblemEx @ 0x1404F71C4 (HalpTimerSetProblemEx.c)
 *     HalpTimerFindIdealClockSource @ 0x14053828C (HalpTimerFindIdealClockSource.c)
 *     HalpTimerFindIdealPerformanceCounterSource @ 0x1405384F0 (HalpTimerFindIdealPerformanceCounterSource.c)
 *     HalpTimerFindIdealScalingSource @ 0x140538640 (HalpTimerFindIdealScalingSource.c)
 *     HalpTimerFindIdealWatchdog @ 0x140538720 (HalpTimerFindIdealWatchdog.c)
 *     HalpTimerInitialize @ 0x140538BA8 (HalpTimerInitialize.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14053F86C (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpFindTimer @ 0x140544A60 (HalpFindTimer.c)
 *     HalpTimerFindBestAlwaysOnTimer @ 0x140545388 (HalpTimerFindBestAlwaysOnTimer.c)
 *     HalpTimerMeasureFrequencies @ 0x140545550 (HalpTimerMeasureFrequencies.c)
 *     HalpVpptTimerRegister @ 0x1405465BC (HalpVpptTimerRegister.c)
 *     HalpTimerStopProfileInterrupt @ 0x140547A34 (HalpTimerStopProfileInterrupt.c)
 */

__int64 __fastcall HalpTimerSelectRoles(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 IdealScalingSource; // rax
  __int64 v4; // rdi
  __int64 IdealClockSource; // rax
  ULONG_PTR v6; // rdi
  __int64 IdealPerformanceCounterSource; // rax
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 Timer; // rax
  __int64 v11; // rdi
  __int64 BestAlwaysOnTimer; // rax
  ULONG_PTR v13; // rdi
  ULONG_PTR v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  ULONG_PTR v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 IdealWatchdog; // rax
  __int64 v24; // rdi

  v2 = 0;
  while ( !HalpTimerFrequenciesMeasured )
  {
    IdealScalingSource = HalpTimerFindIdealScalingSource();
    v4 = IdealScalingSource;
    if ( !IdealScalingSource )
    {
      HalpTimerLastProblem = 19;
      return (unsigned int)-1073741823;
    }
    if ( (int)HalpTimerInitialize(IdealScalingSource) >= 0 )
    {
      HalpTimerMeasureFrequencies(v4);
      HalpTimerFrequenciesMeasured = 1;
    }
  }
  while ( !HalpClockTimer )
  {
    IdealClockSource = HalpTimerFindIdealClockSource();
    v6 = IdealClockSource;
    if ( !IdealClockSource )
    {
      HalpTimerLastProblem = 20;
      return (unsigned int)-1073741823;
    }
    if ( (int)HalpTimerInitialize(IdealClockSource) >= 0 )
    {
      *(_DWORD *)(v6 + 184) |= 4u;
      HalpClockTimer = v6;
      goto LABEL_11;
    }
  }
  do
  {
LABEL_11:
    if ( HalpPerformanceCounter
      && (*(_DWORD *)(HalpPerformanceCounter + 184) & 4) != 0
      && HalpPerformanceCounter != HalpClockTimer )
    {
      goto LABEL_17;
    }
    IdealPerformanceCounterSource = HalpTimerFindIdealPerformanceCounterSource();
    v8 = IdealPerformanceCounterSource;
    if ( !IdealPerformanceCounterSource )
    {
      HalpTimerLastProblem = 21;
      return (unsigned int)-1073741823;
    }
  }
  while ( (int)HalpTimerInitialize(IdealPerformanceCounterSource) < 0 );
  HalpPerformanceCounter = v8;
  HalpTimerPropagateQpcBiasUpdate(v8, a2);
  *(_DWORD *)(v8 + 184) |= 4u;
LABEL_17:
  v9 = HalpStallCounter;
  if ( (*(_DWORD *)(HalpStallCounter + 224) & 0x2000) != 0 || HalpStallCounter == HalpClockTimer )
  {
    v9 = HalpPerformanceCounter;
    HalpStallCounter = HalpPerformanceCounter;
  }
  else
  {
    *(_DWORD *)(HalpStallCounter + 184) |= 4u;
  }
  if ( v9 != HalpOriginalStallTimer )
    *(_DWORD *)(HalpOriginalStallTimer + 184) |= 4u;
  if ( !HalpAuxiliaryCounter )
  {
    Timer = HalpFindTimer(15, 1048578, 24576, 0, 0);
    v11 = Timer;
    if ( Timer )
    {
      if ( *(_QWORD *)(Timer + 192) <= 0x3B9ACA00uLL && (int)HalpTimerInitialize(Timer) >= 0 )
      {
        *(_DWORD *)(v11 + 184) |= 4u;
        HalpAuxiliaryCounter = v11;
      }
    }
  }
  while ( !HalpAlwaysOnTimer )
  {
    if ( (*(_DWORD *)(HalpClockTimer + 224) & 0x8000) != 0 )
      break;
    BestAlwaysOnTimer = HalpTimerFindBestAlwaysOnTimer(0LL);
    v13 = BestAlwaysOnTimer;
    if ( !BestAlwaysOnTimer )
      break;
    if ( (int)HalpTimerInitialize(BestAlwaysOnTimer) >= 0 )
    {
      *(_DWORD *)(v13 + 184) |= 4u;
      HalpAlwaysOnTimer = v13;
      break;
    }
  }
  v14 = HalpClockTimer;
  if ( (*(_DWORD *)(HalpClockTimer + 224) & 1) == 0 )
  {
    if ( (int)HalpVpptTimerRegister(HalpClockTimer, 0LL) < 0 )
    {
      v15 = 0LL;
      HalpClockTimer = 0LL;
    }
    else
    {
      v15 = HalpFindTimer(12, 32, 0, 3840, 0);
      HalpClockTimer = v15;
      if ( v15 )
      {
        v16 = HalpTimerInitialize(v15);
        v14 = HalpClockTimer;
        if ( v16 < 0 )
        {
          HalpTimerSetProblemEx(HalpClockTimer, 20, 2, (__int64)"minkernel\\hals\\lib\\timers\\common\\timer.c", 0xD71u);
          return (unsigned int)-1073741823;
        }
        *(_DWORD *)(HalpClockTimer + 184) |= 4u;
        goto LABEL_39;
      }
    }
    HalpTimerSetProblemEx(v15, 20, 1, (__int64)"minkernel\\hals\\lib\\timers\\common\\timer.c", 0xD65u);
    return (unsigned int)-1073741823;
  }
LABEL_39:
  if ( HalpAlwaysOnTimer && (*(_DWORD *)(HalpAlwaysOnTimer + 224) & 1) == 0 && (*(_DWORD *)(v14 + 224) & 1) != 0 )
  {
    LOBYTE(a2) = 1;
    if ( (int)HalpVpptTimerRegister(HalpAlwaysOnTimer, a2) < 0 )
    {
      HalpAlwaysOnTimer = 0LL;
    }
    else
    {
      v17 = HalpFindTimer(12, 32, 0, 3840, 0);
      HalpAlwaysOnTimer = v17;
      if ( v17 )
      {
        *(_DWORD *)(v17 + 184) |= 4u;
        goto LABEL_45;
      }
    }
    HalpTimerLastProblem = 33;
    return (unsigned int)-1073741823;
  }
LABEL_45:
  while ( !HalpAlwaysOnCounter
       && ((*(_DWORD *)(HalpPerformanceCounter + 224) & 0x8000) == 0
        || (*(_DWORD *)(HalpStallCounter + 224) & 0x8000) == 0) )
  {
    LOBYTE(v14) = 1;
    v18 = HalpTimerFindBestAlwaysOnTimer(v14);
    v19 = v18;
    if ( !v18 )
      break;
    if ( (int)HalpTimerInitialize(v18) >= 0 )
    {
      *(_DWORD *)(v19 + 184) |= 4u;
      HalpAlwaysOnCounter = v19;
      break;
    }
  }
  while ( !HalpProfileTimer && HalpProfileInterface == &DefaultProfileInterface )
  {
    v20 = HalpFindTimer(0, 65, 0, 3840, 0);
    if ( !v20
      && ((unsigned int)HalpQueryMaximumRegisteredProcessorCount() != 1 || (v20 = HalpFindTimer(0, 64, 0, 3840, 0)) == 0) )
    {
      HalpTimerLastProblem = 23;
      break;
    }
    if ( (int)HalpTimerInitialize(v20) >= 0 )
    {
      *(_DWORD *)(v20 + 184) |= 4u;
      HalpProfileTimer = v20;
      HalpTimerStopProfileInterrupt();
      break;
    }
  }
  if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 1) != 0 )
  {
    while ( !HalpFallbackPerformanceCounter )
    {
      v21 = HalpTimerFindIdealPerformanceCounterSource();
      v22 = v21;
      if ( !v21 )
      {
        HalpTimerLastProblem = 22;
        break;
      }
      if ( (int)HalpTimerInitialize(v21) >= 0 )
      {
        *(_DWORD *)(v22 + 184) |= 4u;
        HalpFallbackPerformanceCounter = v22;
        break;
      }
    }
  }
  if ( !HalpTimerWatchdogDisable )
  {
    IdealWatchdog = HalpTimerFindIdealWatchdog();
    v24 = IdealWatchdog;
    if ( IdealWatchdog )
    {
      if ( (int)HalpTimerInitialize(IdealWatchdog) >= 0 )
      {
        *(_DWORD *)(v24 + 184) |= 4u;
        HalpWatchdogTimer = v24;
      }
    }
  }
  return v2;
}

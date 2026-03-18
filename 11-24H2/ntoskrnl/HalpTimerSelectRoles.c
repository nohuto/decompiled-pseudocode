/*
 * XREFs of HalpTimerSelectRoles @ 0x14053B848
 * Callers:
 *     HalpInitializeTimers @ 0x14053A610 (HalpInitializeTimers.c)
 * Callees:
 *     HalpTimerPropagateQpcBiasUpdate @ 0x1403D6B54 (HalpTimerPropagateQpcBiasUpdate.c)
 *     HalpTimerSetProblemEx @ 0x1404F98E4 (HalpTimerSetProblemEx.c)
 *     HalpTimerFindIdealClockSource @ 0x14053AA4C (HalpTimerFindIdealClockSource.c)
 *     HalpTimerFindIdealPerformanceCounterSource @ 0x14053ACB0 (HalpTimerFindIdealPerformanceCounterSource.c)
 *     HalpTimerFindIdealScalingSource @ 0x14053AE00 (HalpTimerFindIdealScalingSource.c)
 *     HalpTimerFindIdealWatchdog @ 0x14053AEE0 (HalpTimerFindIdealWatchdog.c)
 *     HalpTimerInitialize @ 0x14053B368 (HalpTimerInitialize.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x140541F70 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpFindTimer @ 0x1405471A0 (HalpFindTimer.c)
 *     HalpTimerFindBestAlwaysOnTimer @ 0x140547AC8 (HalpTimerFindBestAlwaysOnTimer.c)
 *     HalpTimerMeasureFrequencies @ 0x140547C90 (HalpTimerMeasureFrequencies.c)
 *     HalpVpptTimerRegister @ 0x140548CFC (HalpVpptTimerRegister.c)
 *     HalpTimerStopProfileInterrupt @ 0x14054A174 (HalpTimerStopProfileInterrupt.c)
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
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 Timer; // rax
  __int64 v13; // rdi
  __int64 BestAlwaysOnTimer; // rax
  ULONG_PTR v15; // rdi
  ULONG_PTR v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  ULONG_PTR v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 IdealWatchdog; // rax
  __int64 v26; // rdi

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
  HalpTimerPropagateQpcBiasUpdate(v8, a2, v9, v10);
  *(_DWORD *)(v8 + 184) |= 4u;
LABEL_17:
  v11 = HalpStallCounter;
  if ( (*(_DWORD *)(HalpStallCounter + 224) & 0x2000) != 0 || HalpStallCounter == HalpClockTimer )
  {
    v11 = HalpPerformanceCounter;
    HalpStallCounter = HalpPerformanceCounter;
  }
  else
  {
    *(_DWORD *)(HalpStallCounter + 184) |= 4u;
  }
  if ( v11 != HalpOriginalStallTimer )
    *(_DWORD *)(HalpOriginalStallTimer + 184) |= 4u;
  if ( !HalpAuxiliaryCounter )
  {
    Timer = HalpFindTimer(15, 1048578, 24576, 0, 0);
    v13 = Timer;
    if ( Timer )
    {
      if ( *(_QWORD *)(Timer + 192) <= 0x3B9ACA00uLL && (int)HalpTimerInitialize(Timer) >= 0 )
      {
        *(_DWORD *)(v13 + 184) |= 4u;
        HalpAuxiliaryCounter = v13;
      }
    }
  }
  while ( !HalpAlwaysOnTimer )
  {
    if ( (*(_DWORD *)(HalpClockTimer + 224) & 0x8000) != 0 )
      break;
    BestAlwaysOnTimer = HalpTimerFindBestAlwaysOnTimer(0LL);
    v15 = BestAlwaysOnTimer;
    if ( !BestAlwaysOnTimer )
      break;
    if ( (int)HalpTimerInitialize(BestAlwaysOnTimer) >= 0 )
    {
      *(_DWORD *)(v15 + 184) |= 4u;
      HalpAlwaysOnTimer = v15;
      break;
    }
  }
  v16 = HalpClockTimer;
  if ( (*(_DWORD *)(HalpClockTimer + 224) & 1) == 0 )
  {
    if ( (int)HalpVpptTimerRegister(HalpClockTimer, 0LL) < 0 )
    {
      v17 = 0LL;
      HalpClockTimer = 0LL;
    }
    else
    {
      v17 = HalpFindTimer(12, 32, 0, 3840, 0);
      HalpClockTimer = v17;
      if ( v17 )
      {
        v18 = HalpTimerInitialize(v17);
        v16 = HalpClockTimer;
        if ( v18 < 0 )
        {
          HalpTimerSetProblemEx(HalpClockTimer, 20, 2, (__int64)"minkernel\\hals\\lib\\timers\\common\\timer.c", 0xD32u);
          return (unsigned int)-1073741823;
        }
        *(_DWORD *)(HalpClockTimer + 184) |= 4u;
        goto LABEL_39;
      }
    }
    HalpTimerSetProblemEx(v17, 20, 1, (__int64)"minkernel\\hals\\lib\\timers\\common\\timer.c", 0xD26u);
    return (unsigned int)-1073741823;
  }
LABEL_39:
  if ( HalpAlwaysOnTimer && (*(_DWORD *)(HalpAlwaysOnTimer + 224) & 1) == 0 && (*(_DWORD *)(v16 + 224) & 1) != 0 )
  {
    LOBYTE(a2) = 1;
    if ( (int)HalpVpptTimerRegister(HalpAlwaysOnTimer, a2) < 0 )
    {
      HalpAlwaysOnTimer = 0LL;
    }
    else
    {
      v19 = HalpFindTimer(12, 32, 0, 3840, 0);
      HalpAlwaysOnTimer = v19;
      if ( v19 )
      {
        *(_DWORD *)(v19 + 184) |= 4u;
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
    LOBYTE(v16) = 1;
    v20 = HalpTimerFindBestAlwaysOnTimer(v16);
    v21 = v20;
    if ( !v20 )
      break;
    if ( (int)HalpTimerInitialize(v20) >= 0 )
    {
      *(_DWORD *)(v21 + 184) |= 4u;
      HalpAlwaysOnCounter = v21;
      break;
    }
  }
  while ( !HalpProfileTimer && HalpProfileInterface == &DefaultProfileInterface )
  {
    v22 = HalpFindTimer(0, 65, 0, 3840, 0);
    if ( !v22
      && ((unsigned int)HalpQueryMaximumRegisteredProcessorCount() != 1 || (v22 = HalpFindTimer(0, 64, 0, 3840, 0)) == 0) )
    {
      HalpTimerLastProblem = 23;
      break;
    }
    if ( (int)HalpTimerInitialize(v22) >= 0 )
    {
      *(_DWORD *)(v22 + 184) |= 4u;
      HalpProfileTimer = v22;
      HalpTimerStopProfileInterrupt();
      break;
    }
  }
  if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 1) != 0 )
  {
    while ( !HalpFallbackPerformanceCounter )
    {
      v23 = HalpTimerFindIdealPerformanceCounterSource();
      v24 = v23;
      if ( !v23 )
      {
        HalpTimerLastProblem = 22;
        break;
      }
      if ( (int)HalpTimerInitialize(v23) >= 0 )
      {
        *(_DWORD *)(v24 + 184) |= 4u;
        HalpFallbackPerformanceCounter = v24;
        break;
      }
    }
  }
  if ( !HalpTimerWatchdogDisable )
  {
    IdealWatchdog = HalpTimerFindIdealWatchdog();
    v26 = IdealWatchdog;
    if ( IdealWatchdog )
    {
      if ( (int)HalpTimerInitialize(IdealWatchdog) >= 0 )
      {
        *(_DWORD *)(v26 + 184) |= 4u;
        HalpWatchdogTimer = v26;
      }
    }
  }
  return v2;
}

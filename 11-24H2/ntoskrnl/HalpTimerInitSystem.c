/*
 * XREFs of HalpTimerInitSystem @ 0x14053AFA0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402105E0 (KeQueryActiveProcessorCountEx.c)
 *     HalpMmAllocCtxAlloc @ 0x14024BD68 (HalpMmAllocCtxAlloc.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     HalpInterruptModel @ 0x1403BAB3C (HalpInterruptModel.c)
 *     HalQueryMaximumProcessorCount @ 0x1403BC0C0 (HalQueryMaximumProcessorCount.c)
 *     HalpTimerPropagateQpcBiasUpdate @ 0x1403D6B54 (HalpTimerPropagateQpcBiasUpdate.c)
 *     KeIpiGenericCall @ 0x1404677F0 (KeIpiGenericCall.c)
 *     HalpTimerQueryAndResetRtcErrors @ 0x1404D0280 (HalpTimerQueryAndResetRtcErrors.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     HalpInitializePnTimers @ 0x14053A550 (HalpInitializePnTimers.c)
 *     HalpInitializeTimers @ 0x14053A610 (HalpInitializeTimers.c)
 *     HalpTimerCaptureCloestAuxiliaryQpcPair @ 0x14053A858 (HalpTimerCaptureCloestAuxiliaryQpcPair.c)
 *     HalpTimerInitializeEarlyStallSource @ 0x14053B40C (HalpTimerInitializeEarlyStallSource.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x14053B720 (HalpTimerSchedulePeriodicQueries.c)
 *     HalpTimerInitializeClock @ 0x140546CF4 (HalpTimerInitializeClock.c)
 *     HalpTimerInitializeClockPn @ 0x140546EE4 (HalpTimerInitializeClockPn.c)
 *     HalpTimerInitPowerManagement @ 0x140547B68 (HalpTimerInitPowerManagement.c)
 *     HalpTscFallbackToPlatformSource @ 0x1405495E4 (HalpTscFallbackToPlatformSource.c)
 *     HalpTscReserveResources @ 0x1405496F0 (HalpTscReserveResources.c)
 *     HalpTimerInitializeProfiling @ 0x140549DCC (HalpTimerInitializeProfiling.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x14054A1C4 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpTimerConfigureQpcBypass @ 0x14054A67C (HalpTimerConfigureQpcBypass.c)
 *     HalpTimerSaveProcessorFrequency @ 0x14054A79C (HalpTimerSaveProcessorFrequency.c)
 *     HalpTimerInitializeSystemWatchdog @ 0x14054AE5C (HalpTimerInitializeSystemWatchdog.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     HalpTimerTraceTimingHardware @ 0x1406FC970 (HalpTimerTraceTimingHardware.c)
 *     HalpTscReportSyncStatus @ 0x1406FE6CC (HalpTscReportSyncStatus.c)
 *     HalpTimerWatchdogLogReset @ 0x1406FE804 (HalpTimerWatchdogLogReset.c)
 */

__int64 __fastcall HalpTimerInitSystem(int a1, __int64 a2, __int64 a3)
{
  unsigned int inited; // ebx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rcx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  const EVENT_DESCRIPTOR *v12; // rcx
  __int64 v13; // rcx
  unsigned int MaximumProcessorCount; // eax
  __int64 v15; // rcx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int8 v22; // cl
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR Context[2]; // [rsp+38h] [rbp-30h] BYREF
  int v25; // [rsp+48h] [rbp-20h]

  inited = 0;
  v4 = a1 - 1;
  if ( v4 )
  {
    v5 = v4 - 7;
    if ( !v5 )
    {
      v22 = byte_140FC0D4C;
      if ( !byte_140FC0D4C )
        v22 = 50;
      HalpCmosCenturyOffset = v22;
      off_140E00CD8 = HalpTimerQueryRtcErrors;
      return inited;
    }
    v6 = v5 - 6;
    if ( !v6 )
    {
      if ( (unsigned int)HalpInterruptModel() == 1 )
        off_140E008F0[0] = HalpTscSynchronization;
      off_140E00AB8[0] = HalpTimerClockActivate;
      off_140E00AC0[0] = HalpTimerClockInitialize;
      off_140E00AC8[0] = HalpTimerClockStop;
      off_140E00AD0[0] = (__int64 (__fastcall *)())HalpTimerClockArm;
      off_140E00AB0[0] = HalpTimerGetClockConfiguration;
      off_140E00AD8[0] = HalpTimerOnlyClockInterruptPending;
      off_140E00A30 = HalpTimerQueryCycleCounter;
      off_140E00C40 = (__int64 (__fastcall *)())HalpTimerGetReferencePage;
      off_140E00B68[0] = (__int64 (__fastcall *)())HalpTimerConvertAuxiliaryCounterToPerformanceCounter;
      off_140E00B60[0] = (__int64 (__fastcall *)())HalpTimerConvertPerformanceCounterToAuxiliaryCounter;
      off_140E00B70[0] = HalpTimerQueryAuxiliaryCounterFrequency;
      HalpInitializeTimers(v17);
      ((void (*)(void))HalpTimerSaveProcessorFrequency)();
      HalpTimerInitializeClock();
      KiProfileIrql = 15;
      v18 = HalpTimerInitializeProfiling();
      inited = v18;
      if ( v18 < 0 )
        KeBugCheckEx(0x5Cu, 0x110uLL, v18, 0LL, 0LL);
      HalpTimerPropagateQpcBiasUpdate(HalpPerformanceCounter, v19, v20, v21);
      return inited;
    }
    v7 = v6 - 3;
    if ( v7 )
    {
      v8 = (unsigned int)(v7 - 2);
      if ( !(_DWORD)v8 )
      {
        if ( !qword_140FC0EC8 )
        {
          v8 = 16LL;
          __writemsr(0x10u, 0LL);
        }
        HalpTimerSaveProcessorFrequency(v8);
        HalpInitializePnTimers();
        HalpTimerInitializeClockPn();
        return (unsigned int)HalpTimerInitializeProfiling();
      }
      v9 = v8 - 2;
      if ( v9 )
      {
        v10 = v9 - 4;
        if ( v10 )
        {
          v11 = v10 - 4;
          if ( v11 )
          {
            if ( v11 == 3 )
            {
              off_140E00B88[0] = (__int64 (__fastcall *)())HalpTimerQueryAndResetRtcErrors;
              HalpTimerQueryAndResetRtcErrors(0, 1);
              HalpTimerTraceTimingHardware();
              HalpTscReportSyncStatus();
            }
          }
          else
          {
            inited = HalpTimerInitPowerManagement();
            HalpTimerWatchdogLogReset();
          }
        }
        else if ( HalpWatchdogTimer )
        {
          HalpTimerInitializeSystemWatchdog();
        }
        return inited;
      }
      HalpTimerSchedulePeriodicQueries();
      HalpTimerConfigureQpcBypass();
      off_140E00C20[0] = HalpTimerQueryHostPerformanceCounter;
      if ( (unsigned int)HalpInterruptModel() == 1 )
      {
        if ( !HalpTimerProcessorFrequencyKnown && *(_DWORD *)(HalpPerformanceCounter + 228) != 5 )
        {
          Context[0] = KeQueryActiveProcessorCountEx(0xFFFFu);
          Context[1] = 0LL;
          v25 = 5;
          KeIpiGenericCall(HalpTimerMeasureProcessorsWorker, (ULONG_PTR)Context);
        }
        if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
        {
          if ( HalpTscSynchronizationFailureFallback )
          {
            v12 = (const EVENT_DESCRIPTOR *)HAL_ETW_EVENT_UNEXPECTED_FALLBACK;
          }
          else
          {
            if ( !HalpTscProcessorFeatureFallback )
              goto LABEL_24;
            v12 = &HAL_ETW_EVENT_EXPECTED_FALLBACK;
          }
          HalpTscFallbackToPlatformSource(v12);
        }
      }
LABEL_24:
      v13 = HalpAuxiliaryCounter;
      PerformanceFrequency.QuadPart = 0LL;
      if ( HalpAuxiliaryCounter )
      {
        if ( HalpTimerAuxiliaryClockEnabled )
        {
          if ( (*(_DWORD *)(HalpAuxiliaryCounter + 224) & 0x6000) != 0 )
          {
            v13 = 0LL;
            HalpAuxiliaryCounter = 0LL;
          }
          if ( v13 )
          {
            if ( !HalpTimerQpcFreqForAuxQpcConversion )
            {
              KeQueryPerformanceCounter(&PerformanceFrequency);
              HalpTimerQpcFreqForAuxQpcConversion = PerformanceFrequency.QuadPart;
            }
            HalpTimerEarliestQpcAllowedToConvert = KeQueryPerformanceCounter(0LL).QuadPart;
            HalpTimerCaptureCloestAuxiliaryQpcPair();
          }
        }
        else
        {
          HalpAuxiliaryCounter = 0LL;
        }
      }
      return inited;
    }
    HalpTscReserveResources();
    MaximumProcessorCount = HalQueryMaximumProcessorCount();
    HalpTimerSavedProcessorCounter = HalpMmAllocCtxAlloc(v15, 8LL * MaximumProcessorCount);
    if ( !HalpTimerSavedProcessorCounter )
      return 3221225626LL;
    if ( (unsigned int)HalpInterruptModel() == 1 )
      HalpTimerInitializeHypervisorTimer();
  }
  else
  {
    inited = HalpTimerInitializeEarlyStallSource(a3);
    off_140E00978[0] = HalpTimerNotifyProcessorFreeze;
  }
  return inited;
}

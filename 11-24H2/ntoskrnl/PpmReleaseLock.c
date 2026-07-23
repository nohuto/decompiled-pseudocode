/*
 * XREFs of PpmReleaseLock @ 0x1402AE140
 * Callers:
 *     PoNotifyVSyncChange @ 0x1402AD970 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x1402ADB70 (PpmMediaBufferingWorker.c)
 *     PpmCheckRun @ 0x1402ADDF0 (PpmCheckRun.c)
 *     PpmIdleUpdateSystemLatencyLimit @ 0x1402AEDA4 (PpmIdleUpdateSystemLatencyLimit.c)
 *     PpmRegisterPerfCap @ 0x1404188A0 (PpmRegisterPerfCap.c)
 *     PpmCheckPausePpmEngineForSx @ 0x1404881EC (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x140488230 (PpmCheckResumePpmEngineFromSx.c)
 *     PopDeepSleepEvaluateCallback @ 0x140498A40 (PopDeepSleepEvaluateCallback.c)
 *     PpmParkSetLpiCap @ 0x1404C8A78 (PpmParkSetLpiCap.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1404CA420 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmPerfGetVmPerfConfig @ 0x1404CD8A0 (PpmPerfGetVmPerfConfig.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x1404D00F8 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmPerfGetVmCppcConfig @ 0x1405D0204 (PpmPerfGetVmCppcConfig.c)
 *     PpmPerfGetVmPerfPriorityConfig @ 0x1405D04B0 (PpmPerfGetVmPerfPriorityConfig.c)
 *     PpmPerfGetVmPerfPrioritySupport @ 0x14074DE28 (PpmPerfGetVmPerfPrioritySupport.c)
 *     PpmPerfTelemetryWorker @ 0x14074E040 (PpmPerfTelemetryWorker.c)
 *     PpmRegisterPerfStates @ 0x14074E1F4 (PpmRegisterPerfStates.c)
 *     PpmUpdatePerfStates @ 0x14074EF60 (PpmUpdatePerfStates.c)
 *     PpmRegisterProfiles @ 0x1407635A0 (PpmRegisterProfiles.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1407637F0 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmInfoReleaseLocks @ 0x1409A4174 (PpmInfoReleaseLocks.c)
 *     PopCheckResiliencyScenarios @ 0x140A1BD98 (PopCheckResiliencyScenarios.c)
 *     PopWnfFullscreenVideoCallback @ 0x140A30D70 (PopWnfFullscreenVideoCallback.c)
 *     PpmPerfGetFrequencyBandStats @ 0x140A3A0FC (PpmPerfGetFrequencyBandStats.c)
 *     PpmApplyProfile @ 0x140A3CDF8 (PpmApplyProfile.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140A3CFDC (PpmCompareAndApplyPolicySettings.c)
 *     PpmIdleGetConcurrencyStats @ 0x140A5A754 (PpmIdleGetConcurrencyStats.c)
 *     PpmIdleGetPackageIdleIntervalStats @ 0x140A60E74 (PpmIdleGetPackageIdleIntervalStats.c)
 *     PdcPoPpmResetProfile @ 0x140A9D910 (PdcPoPpmResetProfile.c)
 *     PopEnforceResiliencyScenarios @ 0x140AA7080 (PopEnforceResiliencyScenarios.c)
 *     PpmSetSimulatedLoad @ 0x140AAFAA0 (PpmSetSimulatedLoad.c)
 *     PpmClearSimulatedLoad @ 0x140AB0B2C (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x140AB6C38 (PpmPerfGetBrandedFrequency.c)
 *     PpmPerfGetVmPerfControlSupport @ 0x140ABCAA8 (PpmPerfGetVmPerfControlSupport.c)
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140AC40C8 (PpmPerfUpdateDomainPolicy.c)
 *     PpmCheckInitProcessors @ 0x140AC506C (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x140AC5250 (PpmReapplyPerfPolicy.c)
 *     PpmEventTraceControlCallback @ 0x140AC8550 (PpmEventTraceControlCallback.c)
 *     PpmParkApplyForcedMask @ 0x140AC893C (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x140AC8B58 (PpmParkClearForcedMask.c)
 *     PpmDisableProfile @ 0x140AC8F20 (PpmDisableProfile.c)
 *     PpmInitPolicyConfiguration @ 0x140C32408 (PpmInitPolicyConfiguration.c)
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KiComputeThreadPriority @ 0x140280090 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402801CC (KiSetPriorityThread.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402D1150 (KiAcquireThreadLockRaiseToDpc.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

LONG __fastcall PpmReleaseLock(__int64 *a1)
{
  __int64 v1; // rbx
  LONG result; // eax
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 v4; // al
  unsigned __int8 v5; // al
  unsigned int v6; // eax
  unsigned int v7; // eax
  __int64 v8; // r9
  char v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v1 = *a1;
  *a1 = 0LL;
  result = KeSetEvent((PRKEVENT)(a1 + 1), 0, 0);
  if ( v1 )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = 0LL;
    v9 = 0;
    KiAcquireThreadLockRaiseToDpc(CurrentThread, &v9);
    v4 = CurrentThread->PriorityFloorCounts[22];
    if ( !v4 )
      KeBugCheckEx(0x157u, (ULONG_PTR)CurrentThread, 0x16uLL, 2uLL, 0LL);
    v5 = v4 - 1;
    CurrentThread->PriorityFloorCounts[22] = v5;
    if ( !v5 )
    {
      v6 = CurrentThread->PriorityFloorSummary ^ 0x400000;
      CurrentThread->PriorityFloorSummary = v6;
      if ( v6 < 0x400000 && CurrentThread->Priority <= 31 )
      {
        v7 = KiComputeThreadPriority((__int64)CurrentThread, 0, 0);
        if ( (int)v7 < CurrentThread->Priority )
          KiSetPriorityThread(CurrentThread, (__int64)&v10, v7, v8);
      }
    }
    CurrentThread->ThreadLock = 0LL;
    KiProcessDeferredReadyList(KeGetCurrentPrcb());
    return KeLeaveCriticalRegionThread();
  }
  return result;
}

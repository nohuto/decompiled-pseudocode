/*
 * XREFs of PpmReleaseLock @ 0x140204CAC
 * Callers:
 *     PoNotifyVSyncChange @ 0x140203AC0 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x140203C20 (PpmMediaBufferingWorker.c)
 *     PpmIdleUpdateSystemLatencyLimit @ 0x140203EC4 (PpmIdleUpdateSystemLatencyLimit.c)
 *     PpmCheckRun @ 0x140204960 (PpmCheckRun.c)
 *     PpmRegisterPerfCap @ 0x14042C980 (PpmRegisterPerfCap.c)
 *     PpmCheckPausePpmEngineForSx @ 0x14048E044 (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x14048E088 (PpmCheckResumePpmEngineFromSx.c)
 *     PopDeepSleepEvaluateCallback @ 0x14049EB60 (PopDeepSleepEvaluateCallback.c)
 *     PpmParkSetLpiCap @ 0x1404CF974 (PpmParkSetLpiCap.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1404D1310 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmPerfGetVmPerfConfig @ 0x1404D4AEC (PpmPerfGetVmPerfConfig.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x1404D7E78 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmPerfGetVmCppcConfig @ 0x1405CE210 (PpmPerfGetVmCppcConfig.c)
 *     PpmPerfGetVmPerfPriorityConfig @ 0x1405CE4BC (PpmPerfGetVmPerfPriorityConfig.c)
 *     PpmPerfGetVmPerfPrioritySupport @ 0x140743A28 (PpmPerfGetVmPerfPrioritySupport.c)
 *     PpmPerfTelemetryWorker @ 0x140743C50 (PpmPerfTelemetryWorker.c)
 *     PpmRegisterPerfStates @ 0x140743E04 (PpmRegisterPerfStates.c)
 *     PpmUpdatePerfStates @ 0x140744B70 (PpmUpdatePerfStates.c)
 *     PpmRegisterProfiles @ 0x14075411C (PpmRegisterProfiles.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x140754360 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmInfoReleaseLocks @ 0x140965E18 (PpmInfoReleaseLocks.c)
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 *     PpmIdleGetPackageIdleIntervalStats @ 0x140A1CF1C (PpmIdleGetPackageIdleIntervalStats.c)
 *     PopCheckResiliencyScenarios @ 0x140A1E378 (PopCheckResiliencyScenarios.c)
 *     PopWnfFullscreenVideoCallback @ 0x140A36800 (PopWnfFullscreenVideoCallback.c)
 *     PpmApplyProfile @ 0x140A3EA68 (PpmApplyProfile.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140A3EC4C (PpmCompareAndApplyPolicySettings.c)
 *     PpmReapplyPerfPolicy @ 0x140A3EE58 (PpmReapplyPerfPolicy.c)
 *     PpmPerfGetFrequencyBandStats @ 0x140A4137C (PpmPerfGetFrequencyBandStats.c)
 *     PpmIdleGetConcurrencyStats @ 0x140A60704 (PpmIdleGetConcurrencyStats.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140A69270 (PpmPerfUpdateDomainPolicy.c)
 *     PdcPoPpmResetProfile @ 0x140A9CD80 (PdcPoPpmResetProfile.c)
 *     PopEnforceResiliencyScenarios @ 0x140AA6AF0 (PopEnforceResiliencyScenarios.c)
 *     PpmSetSimulatedLoad @ 0x140AB0620 (PpmSetSimulatedLoad.c)
 *     PpmParkApplyForcedMask @ 0x140AB1350 (PpmParkApplyForcedMask.c)
 *     PpmClearSimulatedLoad @ 0x140AB1848 (PpmClearSimulatedLoad.c)
 *     PpmParkClearForcedMask @ 0x140AB5804 (PpmParkClearForcedMask.c)
 *     PpmPerfGetBrandedFrequency @ 0x140AB78D8 (PpmPerfGetBrandedFrequency.c)
 *     PpmPerfGetVmPerfControlSupport @ 0x140ABD9D0 (PpmPerfGetVmPerfControlSupport.c)
 *     PpmCheckInitProcessors @ 0x140AC1BF8 (PpmCheckInitProcessors.c)
 *     PpmEventTraceControlCallback @ 0x140AC4110 (PpmEventTraceControlCallback.c)
 *     PpmDisableProfile @ 0x140AC4518 (PpmDisableProfile.c)
 *     PpmInitPolicyConfiguration @ 0x140C1F1E8 (PpmInitPolicyConfiguration.c)
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     KiAcquireThreadLockRaiseToDpc @ 0x140204DB0 (KiAcquireThreadLockRaiseToDpc.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KiComputeThreadPriority @ 0x1402E7250 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402E7840 (KiSetPriorityThread.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

LONG __fastcall PpmReleaseLock(__int64 *a1)
{
  __int64 v1; // rbx
  LONG result; // eax
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v4; // r8
  unsigned __int8 v5; // al
  unsigned __int8 v6; // al
  unsigned int v7; // eax
  unsigned int v8; // eax
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
    v5 = CurrentThread->PriorityFloorCounts[22];
    if ( !v5 )
      KeBugCheckEx(0x157u, (ULONG_PTR)CurrentThread, 0x16uLL, 2uLL, 0LL);
    v6 = v5 - 1;
    CurrentThread->PriorityFloorCounts[22] = v6;
    if ( !v6 )
    {
      v7 = CurrentThread->PriorityFloorSummary ^ 0x400000;
      CurrentThread->PriorityFloorSummary = v7;
      if ( v7 < 0x400000 && CurrentThread->Priority <= 31 )
      {
        v8 = KiComputeThreadPriority(CurrentThread, 0LL);
        if ( (int)v8 < CurrentThread->Priority )
          KiSetPriorityThread(CurrentThread, &v10, v8);
      }
    }
    CurrentThread->ThreadLock = 0LL;
    LOBYTE(v4) = v9;
    KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v10, v4);
    return KeLeaveCriticalRegionThread(KeGetCurrentThread());
  }
  return result;
}

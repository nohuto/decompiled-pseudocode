/*
 * XREFs of PpmReleaseLock @ 0x1402A1504
 * Callers:
 *     PpmCheckRun @ 0x14029FA80 (PpmCheckRun.c)
 *     PoNotifyVSyncChange @ 0x1403B5600 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x1403B5760 (PpmMediaBufferingWorker.c)
 *     PpmIdleUpdateSystemLatencyLimit @ 0x1403B5810 (PpmIdleUpdateSystemLatencyLimit.c)
 *     PpmRegisterPerfCap @ 0x1404249F0 (PpmRegisterPerfCap.c)
 *     PpmCheckPausePpmEngineForSx @ 0x14048D954 (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x14048D998 (PpmCheckResumePpmEngineFromSx.c)
 *     PopDeepSleepEvaluateCallback @ 0x14049DC40 (PopDeepSleepEvaluateCallback.c)
 *     PpmParkSetLpiCap @ 0x1404CF9C8 (PpmParkSetLpiCap.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1404D13E0 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmPerfGetVmPerfConfig @ 0x1404D4690 (PpmPerfGetVmPerfConfig.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x1404D6CA8 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmPerfGetVmCppcConfig @ 0x1405D2AE4 (PpmPerfGetVmCppcConfig.c)
 *     PpmPerfGetVmPerfPriorityConfig @ 0x1405D2D90 (PpmPerfGetVmPerfPriorityConfig.c)
 *     PpmPerfGetVmPerfPrioritySupport @ 0x14074FAF8 (PpmPerfGetVmPerfPrioritySupport.c)
 *     PpmPerfTelemetryWorker @ 0x14074FD20 (PpmPerfTelemetryWorker.c)
 *     PpmRegisterPerfStates @ 0x14074FED4 (PpmRegisterPerfStates.c)
 *     PpmUpdatePerfStates @ 0x140750C40 (PpmUpdatePerfStates.c)
 *     PpmRegisterProfiles @ 0x140763BDC (PpmRegisterProfiles.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x140763E20 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmInfoReleaseLocks @ 0x1409BDB24 (PpmInfoReleaseLocks.c)
 *     PopCheckResiliencyScenarios @ 0x140A27318 (PopCheckResiliencyScenarios.c)
 *     PopWnfFullscreenVideoCallback @ 0x140A3B590 (PopWnfFullscreenVideoCallback.c)
 *     PpmPerfGetFrequencyBandStats @ 0x140A4486C (PpmPerfGetFrequencyBandStats.c)
 *     PpmApplyProfile @ 0x140A46E88 (PpmApplyProfile.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140A4706C (PpmCompareAndApplyPolicySettings.c)
 *     PpmIdleGetConcurrencyStats @ 0x140A61E54 (PpmIdleGetConcurrencyStats.c)
 *     PpmIdleGetPackageIdleIntervalStats @ 0x140A6797C (PpmIdleGetPackageIdleIntervalStats.c)
 *     PdcPoPpmResetProfile @ 0x140AA2580 (PdcPoPpmResetProfile.c)
 *     PopEnforceResiliencyScenarios @ 0x140AAC0B0 (PopEnforceResiliencyScenarios.c)
 *     PpmSetSimulatedLoad @ 0x140AB5610 (PpmSetSimulatedLoad.c)
 *     PpmClearSimulatedLoad @ 0x140AB6854 (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x140ABBC18 (PpmPerfGetBrandedFrequency.c)
 *     PpmPerfGetVmPerfControlSupport @ 0x140AC17C0 (PpmPerfGetVmPerfControlSupport.c)
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140AC66D0 (PpmPerfUpdateDomainPolicy.c)
 *     PpmCheckInitProcessors @ 0x140AC75E0 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x140AC77C4 (PpmReapplyPerfPolicy.c)
 *     PpmEventTraceControlCallback @ 0x140ACA960 (PpmEventTraceControlCallback.c)
 *     PpmParkApplyForcedMask @ 0x140ACAD80 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x140ACAF9C (PpmParkClearForcedMask.c)
 *     PpmDisableProfile @ 0x140ACB310 (PpmDisableProfile.c)
 *     PpmInitPolicyConfiguration @ 0x140C302E8 (PpmInitPolicyConfiguration.c)
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x14024FA80 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x14024FBBC (KiSetPriorityThread.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402A1A20 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiProcessDeferredReadyList @ 0x14031D3D0 (KiProcessDeferredReadyList.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
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

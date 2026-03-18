/*
 * XREFs of PpmAcquireLock @ 0x1403B64F8
 * Callers:
 *     PoNotifyVSyncChange @ 0x1403B5600 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x1403B5760 (PpmMediaBufferingWorker.c)
 *     PpmIdleUpdateSystemLatencyLimit @ 0x1403B5810 (PpmIdleUpdateSystemLatencyLimit.c)
 *     PpmRegisterPerfCap @ 0x1404249F0 (PpmRegisterPerfCap.c)
 *     PpmCheckPausePpmEngineForSx @ 0x14048D954 (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x14048D998 (PpmCheckResumePpmEngineFromSx.c)
 *     PopDeepSleepEvaluateCallback @ 0x14049DC40 (PopDeepSleepEvaluateCallback.c)
 *     PpmCheckDelayedPeriodicStart @ 0x1404B48A0 (PpmCheckDelayedPeriodicStart.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x1404C0B20 (PpmPerfLatencySensitivityHintWorker.c)
 *     PpmParkSetLpiCap @ 0x1404CF9C8 (PpmParkSetLpiCap.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1404D13E0 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmPerfGetVmPerfConfig @ 0x1404D4690 (PpmPerfGetVmPerfConfig.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x1404D6CA8 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmPerfClearBootOverrides @ 0x1404EB758 (PpmPerfClearBootOverrides.c)
 *     PpmHeteroHgsUpdateWorker @ 0x1404EBED0 (PpmHeteroHgsUpdateWorker.c)
 *     PpmPerfGetVmCppcConfig @ 0x1405D2AE4 (PpmPerfGetVmCppcConfig.c)
 *     PpmPerfGetVmPerfPriorityConfig @ 0x1405D2D90 (PpmPerfGetVmPerfPriorityConfig.c)
 *     PopIntSteerSetMode @ 0x1405DC310 (PopIntSteerSetMode.c)
 *     PpmPerfGetVmPerfPrioritySupport @ 0x14074FAF8 (PpmPerfGetVmPerfPrioritySupport.c)
 *     PpmPerfReApplyStates @ 0x14074FB74 (PpmPerfReApplyStates.c)
 *     PpmPerfRemoveMaximumOverride @ 0x14074FBC8 (PpmPerfRemoveMaximumOverride.c)
 *     PpmPerfSetMaximumOverride @ 0x14074FCE0 (PpmPerfSetMaximumOverride.c)
 *     PpmPerfTelemetryWorker @ 0x14074FD20 (PpmPerfTelemetryWorker.c)
 *     PpmRegisterPerfStates @ 0x14074FED4 (PpmRegisterPerfStates.c)
 *     PpmUpdatePerfStates @ 0x140750C40 (PpmUpdatePerfStates.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x140758F20 (PpmPerfProcCapFloorSettingCallback.c)
 *     PpmEnableProfile @ 0x140763B2C (PpmEnableProfile.c)
 *     PpmRegisterProfiles @ 0x140763BDC (PpmRegisterProfiles.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x140763E20 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmSetProfilePolicySetting @ 0x1409BD414 (PpmSetProfilePolicySetting.c)
 *     PopCheckResiliencyScenarios @ 0x140A27318 (PopCheckResiliencyScenarios.c)
 *     PopWnfFullscreenVideoCallback @ 0x140A3B590 (PopWnfFullscreenVideoCallback.c)
 *     PpmPerfGetFrequencyBandStats @ 0x140A4486C (PpmPerfGetFrequencyBandStats.c)
 *     PpmProfileAcDcUpdate @ 0x140A46B88 (PpmProfileAcDcUpdate.c)
 *     PpmApplyProfile @ 0x140A46E88 (PpmApplyProfile.c)
 *     PpmIdleGetConcurrencyStats @ 0x140A61E54 (PpmIdleGetConcurrencyStats.c)
 *     PpmIdleGetPackageIdleIntervalStats @ 0x140A6797C (PpmIdleGetPackageIdleIntervalStats.c)
 *     PdcPoPpmResetProfile @ 0x140AA2580 (PdcPoPpmResetProfile.c)
 *     PopEnforceResiliencyScenarios @ 0x140AAC0B0 (PopEnforceResiliencyScenarios.c)
 *     PpmSetSimulatedLoad @ 0x140AB5610 (PpmSetSimulatedLoad.c)
 *     PpmClearSimulatedLoad @ 0x140AB6854 (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x140ABBC18 (PpmPerfGetBrandedFrequency.c)
 *     PpmPerfGetVmPerfControlSupport @ 0x140AC17C0 (PpmPerfGetVmPerfControlSupport.c)
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 *     PpmCheckInitProcessors @ 0x140AC75E0 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x140AC77C4 (PpmReapplyPerfPolicy.c)
 *     PpmEventTraceControlCallback @ 0x140ACA960 (PpmEventTraceControlCallback.c)
 *     PpmParkApplyForcedMask @ 0x140ACAD80 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x140ACAF9C (PpmParkClearForcedMask.c)
 *     PpmDisableProfile @ 0x140ACB310 (PpmDisableProfile.c)
 *     PpmHvEnableQosEnlightenment @ 0x140ACB488 (PpmHvEnableQosEnlightenment.c)
 *     PpmInitPolicyConfiguration @ 0x140C302E8 (PpmInitPolicyConfiguration.c)
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x1403B6558 (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 */

struct _KTHREAD *__fastcall PpmAcquireLock(struct _KTHREAD **a1, __int64 a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KiSetSystemPriorityThread((ULONG_PTR)KeGetCurrentThread(), 22, a3);
  KeWaitForSingleObject(a1 + 1, Executive, 0, 0, 0LL);
  result = KeGetCurrentThread();
  *a1 = result;
  return result;
}

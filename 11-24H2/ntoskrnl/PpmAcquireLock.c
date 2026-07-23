/*
 * XREFs of PpmAcquireLock @ 0x1402AE7DC
 * Callers:
 *     PoNotifyVSyncChange @ 0x1402AD970 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x1402ADB70 (PpmMediaBufferingWorker.c)
 *     PpmIdleUpdateSystemLatencyLimit @ 0x1402AEDA4 (PpmIdleUpdateSystemLatencyLimit.c)
 *     PpmRegisterPerfCap @ 0x1404188A0 (PpmRegisterPerfCap.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x14044BD40 (PpmPerfLatencySensitivityHintWorker.c)
 *     PpmCheckDelayedPeriodicStart @ 0x14044BD70 (PpmCheckDelayedPeriodicStart.c)
 *     PpmCheckPausePpmEngineForSx @ 0x1404881EC (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x140488230 (PpmCheckResumePpmEngineFromSx.c)
 *     PopDeepSleepEvaluateCallback @ 0x140498A40 (PopDeepSleepEvaluateCallback.c)
 *     PpmParkSetLpiCap @ 0x1404C8A78 (PpmParkSetLpiCap.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1404CA420 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmPerfGetVmPerfConfig @ 0x1404CD8A0 (PpmPerfGetVmPerfConfig.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x1404D00F8 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmPerfClearBootOverrides @ 0x1404E2698 (PpmPerfClearBootOverrides.c)
 *     PpmHeteroHgsUpdateWorker @ 0x1404E2DF0 (PpmHeteroHgsUpdateWorker.c)
 *     PpmPerfGetVmCppcConfig @ 0x1405D0204 (PpmPerfGetVmCppcConfig.c)
 *     PpmPerfGetVmPerfPriorityConfig @ 0x1405D04B0 (PpmPerfGetVmPerfPriorityConfig.c)
 *     PopIntSteerSetMode @ 0x1405D91E0 (PopIntSteerSetMode.c)
 *     PpmPerfGetVmPerfPrioritySupport @ 0x14074DE28 (PpmPerfGetVmPerfPrioritySupport.c)
 *     PpmPerfReApplyStates @ 0x14074DEA4 (PpmPerfReApplyStates.c)
 *     PpmPerfRemoveMaximumOverride @ 0x14074DEF8 (PpmPerfRemoveMaximumOverride.c)
 *     PpmPerfSetMaximumOverride @ 0x14074E004 (PpmPerfSetMaximumOverride.c)
 *     PpmPerfTelemetryWorker @ 0x14074E040 (PpmPerfTelemetryWorker.c)
 *     PpmRegisterPerfStates @ 0x14074E1F4 (PpmRegisterPerfStates.c)
 *     PpmUpdatePerfStates @ 0x14074EF60 (PpmUpdatePerfStates.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x1407573A0 (PpmPerfProcCapFloorSettingCallback.c)
 *     PpmEnableProfile @ 0x1407634F0 (PpmEnableProfile.c)
 *     PpmRegisterProfiles @ 0x1407635A0 (PpmRegisterProfiles.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1407637F0 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmSetProfilePolicySetting @ 0x1409A3A64 (PpmSetProfilePolicySetting.c)
 *     PopCheckResiliencyScenarios @ 0x140A1BD98 (PopCheckResiliencyScenarios.c)
 *     PopWnfFullscreenVideoCallback @ 0x140A30D70 (PopWnfFullscreenVideoCallback.c)
 *     PpmPerfGetFrequencyBandStats @ 0x140A3A0FC (PpmPerfGetFrequencyBandStats.c)
 *     PpmProfileAcDcUpdate @ 0x140A3CAF8 (PpmProfileAcDcUpdate.c)
 *     PpmApplyProfile @ 0x140A3CDF8 (PpmApplyProfile.c)
 *     PpmIdleGetConcurrencyStats @ 0x140A5A754 (PpmIdleGetConcurrencyStats.c)
 *     PpmIdleGetPackageIdleIntervalStats @ 0x140A60E74 (PpmIdleGetPackageIdleIntervalStats.c)
 *     PdcPoPpmResetProfile @ 0x140A9D910 (PdcPoPpmResetProfile.c)
 *     PopEnforceResiliencyScenarios @ 0x140AA7080 (PopEnforceResiliencyScenarios.c)
 *     PpmSetSimulatedLoad @ 0x140AAFAA0 (PpmSetSimulatedLoad.c)
 *     PpmClearSimulatedLoad @ 0x140AB0B2C (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x140AB6C38 (PpmPerfGetBrandedFrequency.c)
 *     PpmPerfGetVmPerfControlSupport @ 0x140ABCAA8 (PpmPerfGetVmPerfControlSupport.c)
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 *     PpmCheckInitProcessors @ 0x140AC506C (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x140AC5250 (PpmReapplyPerfPolicy.c)
 *     PpmEventTraceControlCallback @ 0x140AC8550 (PpmEventTraceControlCallback.c)
 *     PpmParkApplyForcedMask @ 0x140AC893C (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x140AC8B58 (PpmParkClearForcedMask.c)
 *     PpmDisableProfile @ 0x140AC8F20 (PpmDisableProfile.c)
 *     PpmHvEnableQosEnlightenment @ 0x140AC9098 (PpmHvEnableQosEnlightenment.c)
 *     PpmInitPolicyConfiguration @ 0x140C32408 (PpmInitPolicyConfiguration.c)
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x1402AE83C (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
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

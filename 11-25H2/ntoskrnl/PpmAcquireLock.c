/*
 * XREFs of PpmAcquireLock @ 0x1402045E4
 * Callers:
 *     PoNotifyVSyncChange @ 0x140203AC0 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x140203C20 (PpmMediaBufferingWorker.c)
 *     PpmIdleUpdateSystemLatencyLimit @ 0x140203EC4 (PpmIdleUpdateSystemLatencyLimit.c)
 *     PpmRegisterPerfCap @ 0x14042C980 (PpmRegisterPerfCap.c)
 *     PpmCheckPausePpmEngineForSx @ 0x14048E044 (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x14048E088 (PpmCheckResumePpmEngineFromSx.c)
 *     PopDeepSleepEvaluateCallback @ 0x14049EB60 (PopDeepSleepEvaluateCallback.c)
 *     PpmCheckDelayedPeriodicStart @ 0x1404B4F80 (PpmCheckDelayedPeriodicStart.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x1404C26D0 (PpmPerfLatencySensitivityHintWorker.c)
 *     PpmParkSetLpiCap @ 0x1404CF974 (PpmParkSetLpiCap.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1404D1310 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmPerfGetVmPerfConfig @ 0x1404D4AEC (PpmPerfGetVmPerfConfig.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x1404D7E78 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmPerfClearBootOverrides @ 0x1404E9D08 (PpmPerfClearBootOverrides.c)
 *     PpmHeteroHgsUpdateWorker @ 0x1404E9D50 (PpmHeteroHgsUpdateWorker.c)
 *     PpmPerfGetVmCppcConfig @ 0x1405CE210 (PpmPerfGetVmCppcConfig.c)
 *     PpmPerfGetVmPerfPriorityConfig @ 0x1405CE4BC (PpmPerfGetVmPerfPriorityConfig.c)
 *     PopIntSteerSetMode @ 0x1405D7130 (PopIntSteerSetMode.c)
 *     PpmPerfGetVmPerfPrioritySupport @ 0x140743A28 (PpmPerfGetVmPerfPrioritySupport.c)
 *     PpmPerfReApplyStates @ 0x140743AA4 (PpmPerfReApplyStates.c)
 *     PpmPerfRemoveMaximumOverride @ 0x140743AF8 (PpmPerfRemoveMaximumOverride.c)
 *     PpmPerfSetMaximumOverride @ 0x140743C10 (PpmPerfSetMaximumOverride.c)
 *     PpmPerfTelemetryWorker @ 0x140743C50 (PpmPerfTelemetryWorker.c)
 *     PpmRegisterPerfStates @ 0x140743E04 (PpmRegisterPerfStates.c)
 *     PpmUpdatePerfStates @ 0x140744B70 (PpmUpdatePerfStates.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x14074CCC0 (PpmPerfProcCapFloorSettingCallback.c)
 *     PpmEnableProfile @ 0x14075406C (PpmEnableProfile.c)
 *     PpmRegisterProfiles @ 0x14075411C (PpmRegisterProfiles.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x140754360 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmSetProfilePolicySetting @ 0x140965708 (PpmSetProfilePolicySetting.c)
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 *     PpmIdleGetPackageIdleIntervalStats @ 0x140A1CF1C (PpmIdleGetPackageIdleIntervalStats.c)
 *     PopCheckResiliencyScenarios @ 0x140A1E378 (PopCheckResiliencyScenarios.c)
 *     PopWnfFullscreenVideoCallback @ 0x140A36800 (PopWnfFullscreenVideoCallback.c)
 *     PpmProfileAcDcUpdate @ 0x140A3E764 (PpmProfileAcDcUpdate.c)
 *     PpmApplyProfile @ 0x140A3EA68 (PpmApplyProfile.c)
 *     PpmReapplyPerfPolicy @ 0x140A3EE58 (PpmReapplyPerfPolicy.c)
 *     PpmPerfGetFrequencyBandStats @ 0x140A4137C (PpmPerfGetFrequencyBandStats.c)
 *     PpmIdleGetConcurrencyStats @ 0x140A60704 (PpmIdleGetConcurrencyStats.c)
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
 *     PpmHvEnableQosEnlightenment @ 0x140AC46CC (PpmHvEnableQosEnlightenment.c)
 *     PpmInitPolicyConfiguration @ 0x140C1F1E8 (PpmInitPolicyConfiguration.c)
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x140204644 (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
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

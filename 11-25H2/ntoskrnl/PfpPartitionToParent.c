/*
 * XREFs of PfpPartitionToParent @ 0x1404BDA40
 * Callers:
 *     PfpLogScenarioEventCallback @ 0x140739AF0 (PfpLogScenarioEventCallback.c)
 *     PfTStart @ 0x14073AAEC (PfTStart.c)
 *     PfpFlushBuffers @ 0x140923880 (PfpFlushBuffers.c)
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x140A9C35C (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 *     PfpLogEventRequest @ 0x140AA366C (PfpLogEventRequest.c)
 *     PfpPowerActionSleepSystemPhaseCallback @ 0x140B4AEC0 (PfpPowerActionSleepSystemPhaseCallback.c)
 *     PfpPowerActionStartScenarioTracingCallback @ 0x140B4AF30 (PfpPowerActionStartScenarioTracingCallback.c)
 *     PfTAccessTracingStart @ 0x140B4B640 (PfTAccessTracingStart.c)
 *     PfTSetTracingPriority @ 0x140B4B6BC (PfTSetTracingPriority.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpPartitionToParent(__int64 a1)
{
  return *(_QWORD *)a1;
}

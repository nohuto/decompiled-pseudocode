/*
 * XREFs of PfpPartitionToParent @ 0x1404BCA40
 * Callers:
 *     MiStopPageAccessor @ 0x14026ADB0 (MiStopPageAccessor.c)
 *     PfpLogScenarioEventCallback @ 0x140745B10 (PfpLogScenarioEventCallback.c)
 *     PfTStart @ 0x140746B0C (PfTStart.c)
 *     PfpFlushBuffers @ 0x14094F8D0 (PfpFlushBuffers.c)
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x140AA1C4C (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 *     PfpLogEventRequest @ 0x140AA86F4 (PfpLogEventRequest.c)
 *     PfpPowerActionSleepSystemPhaseCallback @ 0x140B5AE30 (PfpPowerActionSleepSystemPhaseCallback.c)
 *     PfpPowerActionStartScenarioTracingCallback @ 0x140B5AEA0 (PfpPowerActionStartScenarioTracingCallback.c)
 *     PfTAccessTracingStart @ 0x140B5B5B0 (PfTAccessTracingStart.c)
 *     PfTSetTracingPriority @ 0x140B5B62C (PfTSetTracingPriority.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpPartitionToParent(__int64 a1)
{
  return *(_QWORD *)a1;
}

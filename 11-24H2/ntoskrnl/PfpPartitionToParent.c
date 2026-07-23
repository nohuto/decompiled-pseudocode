/*
 * XREFs of PfpPartitionToParent @ 0x1404B7BB0
 * Callers:
 *     MiStopPageAccessor @ 0x140220340 (MiStopPageAccessor.c)
 *     PfpLogScenarioEventCallback @ 0x140743E00 (PfpLogScenarioEventCallback.c)
 *     PfTStart @ 0x140744DFC (PfTStart.c)
 *     PfpFlushBuffers @ 0x140971DE0 (PfpFlushBuffers.c)
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x140A9CFDC (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 *     PfpLogEventRequest @ 0x140AA3778 (PfpLogEventRequest.c)
 *     PfpPowerActionSleepSystemPhaseCallback @ 0x140B5CEA0 (PfpPowerActionSleepSystemPhaseCallback.c)
 *     PfpPowerActionStartScenarioTracingCallback @ 0x140B5CF10 (PfpPowerActionStartScenarioTracingCallback.c)
 *     PfTAccessTracingStart @ 0x140B5D620 (PfTAccessTracingStart.c)
 *     PfTSetTracingPriority @ 0x140B5D69C (PfTSetTracingPriority.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpPartitionToParent(__int64 a1)
{
  return *(_QWORD *)a1;
}

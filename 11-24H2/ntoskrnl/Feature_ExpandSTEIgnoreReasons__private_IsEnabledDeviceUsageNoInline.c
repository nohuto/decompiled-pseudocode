/*
 * XREFs of Feature_ExpandSTEIgnoreReasons__private_IsEnabledDeviceUsageNoInline @ 0x1405CCDE8
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1405D87A0 (PdcPoCurrentPdcPhase.c)
 *     PopRecordPhysicalPowerButton @ 0x1407497C0 (PopRecordPhysicalPowerButton.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x140A9EA5C (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 *     NtSetThreadExecutionState @ 0x140AC6F10 (NtSetThreadExecutionState.c)
 *     PopDiagTraceSetThreadExecutionState @ 0x140AC742C (PopDiagTraceSetThreadExecutionState.c)
 * Callees:
 *     Feature_ExpandSTEIgnoreReasons__private_IsEnabledFallback @ 0x1405CCE20 (Feature_ExpandSTEIgnoreReasons__private_IsEnabledFallback.c)
 */

__int64 Feature_ExpandSTEIgnoreReasons__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ExpandSTEIgnoreReasons__private_featureState & 0x10) != 0 )
    return Feature_ExpandSTEIgnoreReasons__private_featureState & 1;
  else
    return Feature_ExpandSTEIgnoreReasons__private_IsEnabledFallback(
             (unsigned int)Feature_ExpandSTEIgnoreReasons__private_featureState,
             3LL);
}

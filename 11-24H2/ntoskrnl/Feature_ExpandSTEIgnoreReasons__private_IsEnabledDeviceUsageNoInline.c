/*
 * XREFs of Feature_ExpandSTEIgnoreReasons__private_IsEnabledDeviceUsageNoInline @ 0x1405CA558
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1405D5CC0 (PdcPoCurrentPdcPhase.c)
 *     PopRecordPhysicalPowerButton @ 0x140747AF0 (PopRecordPhysicalPowerButton.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x140A99FCC (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 *     NtSetThreadExecutionState @ 0x140AC4920 (NtSetThreadExecutionState.c)
 *     PopDiagTraceSetThreadExecutionState @ 0x140AC4EB8 (PopDiagTraceSetThreadExecutionState.c)
 * Callees:
 *     Feature_ExpandSTEIgnoreReasons__private_IsEnabledFallback @ 0x1405CA590 (Feature_ExpandSTEIgnoreReasons__private_IsEnabledFallback.c)
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

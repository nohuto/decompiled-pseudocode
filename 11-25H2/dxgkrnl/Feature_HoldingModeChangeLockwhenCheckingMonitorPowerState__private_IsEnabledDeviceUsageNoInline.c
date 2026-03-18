/*
 * XREFs of Feature_HoldingModeChangeLockwhenCheckingMonitorPowerState__private_IsEnabledDeviceUsageNoInline @ 0x14006B83C
 * Callers:
 *     DxgkCheckMonitorPowerState @ 0x14040F790 (DxgkCheckMonitorPowerState.c)
 * Callees:
 *     Feature_HoldingModeChangeLockwhenCheckingMonitorPowerState__private_IsEnabledFallback @ 0x14006B874 (Feature_HoldingModeChangeLockwhenCheckingMonitorPowerState__private_IsEnabledFallback.c)
 */

__int64 Feature_HoldingModeChangeLockwhenCheckingMonitorPowerState__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_HoldingModeChangeLockwhenCheckingMonitorPowerState__private_featureState & 0x10) != 0 )
    return Feature_HoldingModeChangeLockwhenCheckingMonitorPowerState__private_featureState & 1;
  else
    return Feature_HoldingModeChangeLockwhenCheckingMonitorPowerState__private_IsEnabledFallback(
             (unsigned int)Feature_HoldingModeChangeLockwhenCheckingMonitorPowerState__private_featureState,
             3LL);
}

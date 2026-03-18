/*
 * XREFs of Feature_MonitorPowerOnWatchdogTimeout__private_IsEnabledDeviceUsageNoInline @ 0x1401AED64
 * Callers:
 *     ?InitializePowerWatchdogTimeoutDefaults@@YAXXZ @ 0x140140064 (-InitializePowerWatchdogTimeoutDefaults@@YAXXZ.c)
 * Callees:
 *     Feature_MonitorPowerOnWatchdogTimeout__private_IsEnabledFallback @ 0x1401AED9C (Feature_MonitorPowerOnWatchdogTimeout__private_IsEnabledFallback.c)
 */

__int64 Feature_MonitorPowerOnWatchdogTimeout__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_MonitorPowerOnWatchdogTimeout__private_featureState & 0x10) != 0 )
    return Feature_MonitorPowerOnWatchdogTimeout__private_featureState & 1;
  else
    return Feature_MonitorPowerOnWatchdogTimeout__private_IsEnabledFallback(
             (unsigned int)Feature_MonitorPowerOnWatchdogTimeout__private_featureState,
             3LL);
}

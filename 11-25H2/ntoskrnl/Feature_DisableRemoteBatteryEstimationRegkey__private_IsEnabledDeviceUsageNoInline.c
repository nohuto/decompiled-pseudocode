/*
 * XREFs of Feature_DisableRemoteBatteryEstimationRegkey__private_IsEnabledDeviceUsageNoInline @ 0x1405D30E4
 * Callers:
 *     PopBatteryWorker @ 0x140AC2900 (PopBatteryWorker.c)
 * Callees:
 *     Feature_DisableRemoteBatteryEstimationRegkey__private_IsEnabledFallback @ 0x1405D311C (Feature_DisableRemoteBatteryEstimationRegkey__private_IsEnabledFallback.c)
 */

__int64 Feature_DisableRemoteBatteryEstimationRegkey__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DisableRemoteBatteryEstimationRegkey__private_featureState & 0x10) != 0 )
    return Feature_DisableRemoteBatteryEstimationRegkey__private_featureState & 1;
  else
    return Feature_DisableRemoteBatteryEstimationRegkey__private_IsEnabledFallback(
             (unsigned int)Feature_DisableRemoteBatteryEstimationRegkey__private_featureState,
             3LL);
}

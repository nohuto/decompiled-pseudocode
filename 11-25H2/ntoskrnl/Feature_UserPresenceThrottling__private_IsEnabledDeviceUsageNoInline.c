/*
 * XREFs of Feature_UserPresenceThrottling__private_IsEnabledDeviceUsageNoInline @ 0x1404F0A4C
 * Callers:
 *     KiComputeThreadQos @ 0x140318250 (KiComputeThreadQos.c)
 *     PspSetProcessPpmPolicy @ 0x140AC4BB0 (PspSetProcessPpmPolicy.c)
 * Callees:
 *     Feature_UserPresenceThrottling__private_IsEnabledFallback @ 0x1405BE0FC (Feature_UserPresenceThrottling__private_IsEnabledFallback.c)
 */

__int64 Feature_UserPresenceThrottling__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UserPresenceThrottling__private_featureState & 0x10) != 0 )
    return Feature_UserPresenceThrottling__private_featureState & 1;
  else
    return Feature_UserPresenceThrottling__private_IsEnabledFallback(
             (unsigned int)Feature_UserPresenceThrottling__private_featureState,
             3LL);
}

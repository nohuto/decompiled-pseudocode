/*
 * XREFs of Feature_UserPresenceThrottling__private_IsEnabledDeviceUsageNoInline @ 0x1402A9650
 * Callers:
 *     KiComputeThreadQos @ 0x1402A8F40 (KiComputeThreadQos.c)
 *     PspSetProcessPpmPolicy @ 0x140AC95E0 (PspSetProcessPpmPolicy.c)
 * Callees:
 *     Feature_UserPresenceThrottling__private_IsEnabledFallback @ 0x1404F8E00 (Feature_UserPresenceThrottling__private_IsEnabledFallback.c)
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

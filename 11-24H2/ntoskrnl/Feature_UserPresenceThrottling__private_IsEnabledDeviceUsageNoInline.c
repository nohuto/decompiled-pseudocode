/*
 * XREFs of Feature_UserPresenceThrottling__private_IsEnabledDeviceUsageNoInline @ 0x14029AB60
 * Callers:
 *     KiComputeThreadQos @ 0x14029A450 (KiComputeThreadQos.c)
 *     PspSetProcessPpmPolicy @ 0x140ACB960 (PspSetProcessPpmPolicy.c)
 * Callees:
 *     Feature_UserPresenceThrottling__private_IsEnabledFallback @ 0x1404FB53C (Feature_UserPresenceThrottling__private_IsEnabledFallback.c)
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

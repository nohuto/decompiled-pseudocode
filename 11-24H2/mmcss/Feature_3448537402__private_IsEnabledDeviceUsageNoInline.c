/*
 * XREFs of Feature_3448537402__private_IsEnabledDeviceUsageNoInline @ 0x140004E58
 * Callers:
 *     CiNdisCleanupThrottle @ 0x14000DB90 (CiNdisCleanupThrottle.c)
 *     CiNdisUpdateThrottleState @ 0x14000FA20 (CiNdisUpdateThrottleState.c)
 *     CiNdisThrottle @ 0x14000FC90 (CiNdisThrottle.c)
 * Callees:
 *     Feature_3448537402__private_IsEnabledFallback @ 0x140004E90 (Feature_3448537402__private_IsEnabledFallback.c)
 */

__int64 Feature_3448537402__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_3448537402__private_featureState & 0x10) != 0 )
    return Feature_3448537402__private_featureState & 1;
  else
    return Feature_3448537402__private_IsEnabledFallback((unsigned int)Feature_3448537402__private_featureState, 3LL);
}

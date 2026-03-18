/*
 * XREFs of Feature_RSIdleRevoke__private_IsEnabledDeviceUsageNoInline @ 0x1405D2D5C
 * Callers:
 *     PopPowerAggregatorEnterScreenOff @ 0x140A2BD88 (PopPowerAggregatorEnterScreenOff.c)
 * Callees:
 *     Feature_RSIdleRevoke__private_IsEnabledFallback @ 0x1405D2D94 (Feature_RSIdleRevoke__private_IsEnabledFallback.c)
 */

__int64 Feature_RSIdleRevoke__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_RSIdleRevoke__private_featureState & 0x10) != 0 )
    return Feature_RSIdleRevoke__private_featureState & 1;
  else
    return Feature_RSIdleRevoke__private_IsEnabledFallback(
             (unsigned int)Feature_RSIdleRevoke__private_featureState,
             3LL);
}

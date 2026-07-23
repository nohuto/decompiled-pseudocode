/*
 * XREFs of Feature_2077227322__private_IsEnabledDeviceUsageNoInline @ 0x1406067EC
 * Callers:
 *     SeValidSecurityDescriptor @ 0x140835560 (SeValidSecurityDescriptor.c)
 * Callees:
 *     Feature_2077227322__private_IsEnabledFallback @ 0x140606824 (Feature_2077227322__private_IsEnabledFallback.c)
 */

__int64 Feature_2077227322__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_2077227322__private_featureState & 0x10) != 0 )
    return Feature_2077227322__private_featureState & 1;
  else
    return Feature_2077227322__private_IsEnabledFallback((unsigned int)Feature_2077227322__private_featureState, 3LL);
}

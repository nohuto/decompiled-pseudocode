/*
 * XREFs of Feature_ConfAccImp__private_IsEnabledDeviceUsageNoInline @ 0x1406678D0
 * Callers:
 *     Feature_ConfAccImp_IsEnabledWithReporting @ 0x140667850 (Feature_ConfAccImp_IsEnabledWithReporting.c)
 * Callees:
 *     Feature_ConfAccImp__private_IsEnabledFallback @ 0x140667908 (Feature_ConfAccImp__private_IsEnabledFallback.c)
 */

__int64 Feature_ConfAccImp__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ConfAccImp__private_featureState & 0x10) != 0 )
    return Feature_ConfAccImp__private_featureState & 1;
  else
    return Feature_ConfAccImp__private_IsEnabledFallback((unsigned int)Feature_ConfAccImp__private_featureState, 3LL);
}

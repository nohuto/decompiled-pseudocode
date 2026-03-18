/*
 * XREFs of Feature_PreferSourceModeGreaterThanContentSize__private_IsEnabledDeviceUsageNoInline @ 0x14008F9AC
 * Callers:
 *     BmlCompareSourceModesWithContentRes @ 0x1402C7A9C (BmlCompareSourceModesWithContentRes.c)
 * Callees:
 *     Feature_PreferSourceModeGreaterThanContentSize__private_IsEnabledFallback @ 0x14008F9E4 (Feature_PreferSourceModeGreaterThanContentSize__private_IsEnabledFallback.c)
 */

__int64 Feature_PreferSourceModeGreaterThanContentSize__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_PreferSourceModeGreaterThanContentSize__private_featureState & 0x10) != 0 )
    return Feature_PreferSourceModeGreaterThanContentSize__private_featureState & 1;
  else
    return Feature_PreferSourceModeGreaterThanContentSize__private_IsEnabledFallback(
             (unsigned int)Feature_PreferSourceModeGreaterThanContentSize__private_featureState,
             3LL);
}

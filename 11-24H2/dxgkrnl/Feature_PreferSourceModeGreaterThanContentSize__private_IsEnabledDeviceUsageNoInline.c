/*
 * XREFs of Feature_PreferSourceModeGreaterThanContentSize__private_IsEnabledDeviceUsageNoInline @ 0x140090E10
 * Callers:
 *     BmlCompareSourceModesWithContentRes @ 0x1402DE9C4 (BmlCompareSourceModesWithContentRes.c)
 * Callees:
 *     Feature_PreferSourceModeGreaterThanContentSize__private_IsEnabledFallback @ 0x140090E48 (Feature_PreferSourceModeGreaterThanContentSize__private_IsEnabledFallback.c)
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

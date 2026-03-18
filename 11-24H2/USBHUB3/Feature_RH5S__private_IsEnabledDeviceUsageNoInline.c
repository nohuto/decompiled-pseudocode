/*
 * XREFs of Feature_RH5S__private_IsEnabledDeviceUsageNoInline @ 0x14000C908
 * Callers:
 *     HUBFDO_PowerSettingCallback @ 0x14000EC30 (HUBFDO_PowerSettingCallback.c)
 *     HUBFDO_SetupHubPostErrataQuery @ 0x14000F044 (HUBFDO_SetupHubPostErrataQuery.c)
 *     HUBREG_QueryHubErrataFlags @ 0x140088B7C (HUBREG_QueryHubErrataFlags.c)
 * Callees:
 *     Feature_RH5S__private_IsEnabledFallback @ 0x14000C940 (Feature_RH5S__private_IsEnabledFallback.c)
 */

__int64 Feature_RH5S__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_RH5S__private_featureState & 0x10) != 0 )
    return Feature_RH5S__private_featureState & 1;
  else
    return Feature_RH5S__private_IsEnabledFallback((unsigned int)Feature_RH5S__private_featureState, 3LL);
}

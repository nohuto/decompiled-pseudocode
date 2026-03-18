/*
 * XREFs of Feature_RH5S__private_IsEnabledDeviceUsageNoInline @ 0x14000C8B4
 * Callers:
 *     HUBFDO_PowerSettingCallback @ 0x14000EBE0 (HUBFDO_PowerSettingCallback.c)
 *     HUBFDO_SetupHubPostErrataQuery @ 0x14000EFF4 (HUBFDO_SetupHubPostErrataQuery.c)
 *     HUBREG_QueryHubErrataFlags @ 0x140089C2C (HUBREG_QueryHubErrataFlags.c)
 * Callees:
 *     Feature_RH5S__private_IsEnabledFallback @ 0x14000C8EC (Feature_RH5S__private_IsEnabledFallback.c)
 */

__int64 Feature_RH5S__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_RH5S__private_featureState & 0x10) != 0 )
    return Feature_RH5S__private_featureState & 1;
  else
    return Feature_RH5S__private_IsEnabledFallback((unsigned int)Feature_RH5S__private_featureState, 3LL);
}

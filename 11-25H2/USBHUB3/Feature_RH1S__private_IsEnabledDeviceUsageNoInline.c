/*
 * XREFs of Feature_RH1S__private_IsEnabledDeviceUsageNoInline @ 0x14000C860
 * Callers:
 *     HUBFDO_PowerSettingCallback @ 0x14000EBE0 (HUBFDO_PowerSettingCallback.c)
 *     HUBFDO_SetupHubPostErrataQuery @ 0x14000EFF4 (HUBFDO_SetupHubPostErrataQuery.c)
 *     HUBREG_QueryHubErrataFlags @ 0x140089C2C (HUBREG_QueryHubErrataFlags.c)
 * Callees:
 *     Feature_RH1S__private_IsEnabledFallback @ 0x14000C898 (Feature_RH1S__private_IsEnabledFallback.c)
 */

__int64 Feature_RH1S__private_IsEnabledDeviceUsageNoInline()
{
  if ( ((__int64)WPP_MAIN_CB.Reserved & 0x10) != 0 )
    return (__int64)WPP_MAIN_CB.Reserved & 1;
  else
    return Feature_RH1S__private_IsEnabledFallback(LODWORD(WPP_MAIN_CB.Reserved), 3LL);
}

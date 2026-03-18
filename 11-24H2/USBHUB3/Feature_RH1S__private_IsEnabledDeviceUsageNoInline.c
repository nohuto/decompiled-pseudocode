/*
 * XREFs of Feature_RH1S__private_IsEnabledDeviceUsageNoInline @ 0x14000C8B4
 * Callers:
 *     HUBFDO_PowerSettingCallback @ 0x14000EC30 (HUBFDO_PowerSettingCallback.c)
 *     HUBFDO_SetupHubPostErrataQuery @ 0x14000F044 (HUBFDO_SetupHubPostErrataQuery.c)
 *     HUBREG_QueryHubErrataFlags @ 0x140088B7C (HUBREG_QueryHubErrataFlags.c)
 * Callees:
 *     Feature_RH1S__private_IsEnabledFallback @ 0x14000C8EC (Feature_RH1S__private_IsEnabledFallback.c)
 */

__int64 Feature_RH1S__private_IsEnabledDeviceUsageNoInline()
{
  if ( ((__int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink & 0x10) != 0 )
    return (__int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink & 1;
  else
    return Feature_RH1S__private_IsEnabledFallback(LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink), 3LL);
}

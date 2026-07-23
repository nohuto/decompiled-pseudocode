/*
 * XREFs of Feature_PowerAdapterIrpCompleteFlagFix__private_IsEnabledDeviceUsageNoInline @ 0x1405D521C
 * Callers:
 *     PopPowerAdapterAdd @ 0x14075A030 (PopPowerAdapterAdd.c)
 *     PopPowerAdapterQueryStatus @ 0x14075A84C (PopPowerAdapterQueryStatus.c)
 * Callees:
 *     Feature_PowerAdapterIrpCompleteFlagFix__private_IsEnabledFallback @ 0x1405D5254 (Feature_PowerAdapterIrpCompleteFlagFix__private_IsEnabledFallback.c)
 */

__int64 Feature_PowerAdapterIrpCompleteFlagFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_PowerAdapterIrpCompleteFlagFix__private_featureState & 0x10) != 0 )
    return Feature_PowerAdapterIrpCompleteFlagFix__private_featureState & 1;
  else
    return Feature_PowerAdapterIrpCompleteFlagFix__private_IsEnabledFallback(
             (unsigned int)Feature_PowerAdapterIrpCompleteFlagFix__private_featureState,
             3LL);
}

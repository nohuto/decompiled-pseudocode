/*
 * XREFs of Feature_Servicing_LidCloseDisplayOff__private_IsEnabledDeviceUsageNoInline @ 0x1405D78D0
 * Callers:
 *     PopPowerAggregatorForceSessionSwitch @ 0x140AC7988 (PopPowerAggregatorForceSessionSwitch.c)
 *     PopPowerAggregatorInitialize @ 0x140C6809C (PopPowerAggregatorInitialize.c)
 * Callees:
 *     Feature_Servicing_LidCloseDisplayOff__private_IsEnabledFallback @ 0x1405D7908 (Feature_Servicing_LidCloseDisplayOff__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_LidCloseDisplayOff__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_LidCloseDisplayOff__private_featureState & 0x10) != 0 )
    return Feature_Servicing_LidCloseDisplayOff__private_featureState & 1;
  else
    return Feature_Servicing_LidCloseDisplayOff__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_LidCloseDisplayOff__private_featureState,
             3LL);
}

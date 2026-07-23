/*
 * XREFs of Feature_Servicing_BatteryTestExempt__private_IsEnabledDeviceUsageNoInline @ 0x1405CD1A8
 * Callers:
 *     PopPowerAdapterAdd @ 0x14075A030 (PopPowerAdapterAdd.c)
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 *     PopBatteryInitialize @ 0x140AC5B8C (PopBatteryInitialize.c)
 *     PopBatteryInitPhaseTwo @ 0x140C33E6C (PopBatteryInitPhaseTwo.c)
 * Callees:
 *     Feature_Servicing_BatteryTestExempt__private_IsEnabledFallback @ 0x1405CD1E0 (Feature_Servicing_BatteryTestExempt__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_BatteryTestExempt__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_BatteryTestExempt__private_featureState & 0x10) != 0 )
    return Feature_Servicing_BatteryTestExempt__private_featureState & 1;
  else
    return Feature_Servicing_BatteryTestExempt__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_BatteryTestExempt__private_featureState,
             3LL);
}

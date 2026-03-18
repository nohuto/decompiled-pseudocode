/*
 * XREFs of Feature_Servicing_MonitorATMAPIsAndBackDoorEvents__private_IsEnabledDeviceUsage @ 0x1C013F7B8
 * Callers:
 *     GreNamedEscape @ 0x1C02B2F38 (GreNamedEscape.c)
 * Callees:
 *     Feature_Servicing_MonitorATMAPIsAndBackDoorEvents__private_IsEnabledFallback @ 0x1C013F7F0 (Feature_Servicing_MonitorATMAPIsAndBackDoorEvents__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_MonitorATMAPIsAndBackDoorEvents__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_MonitorATMAPIsAndBackDoorEvents__private_featureState & 0x10) != 0 )
    return Feature_Servicing_MonitorATMAPIsAndBackDoorEvents__private_featureState & 1;
  else
    return Feature_Servicing_MonitorATMAPIsAndBackDoorEvents__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_MonitorATMAPIsAndBackDoorEvents__private_featureState,
             3LL);
}

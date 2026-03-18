/*
 * XREFs of Feature_Servicing_MonitorATMAPIsAndBackDoorEvents__private_IsEnabledDeviceUsageNoInline @ 0x140336D50
 * Callers:
 *     GreNamedEscape @ 0x14025E294 (GreNamedEscape.c)
 * Callees:
 *     Feature_Servicing_MonitorATMAPIsAndBackDoorEvents__private_IsEnabledFallback @ 0x140336D88 (Feature_Servicing_MonitorATMAPIsAndBackDoorEvents__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_MonitorATMAPIsAndBackDoorEvents__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_MonitorATMAPIsAndBackDoorEvents__private_featureState & 0x10) != 0 )
    return Feature_Servicing_MonitorATMAPIsAndBackDoorEvents__private_featureState & 1;
  else
    return Feature_Servicing_MonitorATMAPIsAndBackDoorEvents__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_MonitorATMAPIsAndBackDoorEvents__private_featureState,
             3LL);
}

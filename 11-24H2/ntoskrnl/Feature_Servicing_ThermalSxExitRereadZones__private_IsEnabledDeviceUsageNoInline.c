/*
 * XREFs of Feature_Servicing_ThermalSxExitRereadZones__private_IsEnabledDeviceUsageNoInline @ 0x1405D1304
 * Callers:
 *     PopThermalSxExit @ 0x1405D1508 (PopThermalSxExit.c)
 * Callees:
 *     Feature_Servicing_ThermalSxExitRereadZones__private_IsEnabledFallback @ 0x1405D133C (Feature_Servicing_ThermalSxExitRereadZones__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_ThermalSxExitRereadZones__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_ThermalSxExitRereadZones__private_featureState & 0x10) != 0 )
    return Feature_Servicing_ThermalSxExitRereadZones__private_featureState & 1;
  else
    return Feature_Servicing_ThermalSxExitRereadZones__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_ThermalSxExitRereadZones__private_featureState,
             3LL);
}

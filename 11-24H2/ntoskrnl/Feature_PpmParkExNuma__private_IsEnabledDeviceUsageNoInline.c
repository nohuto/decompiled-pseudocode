/*
 * XREFs of Feature_PpmParkExNuma__private_IsEnabledDeviceUsageNoInline @ 0x1405DE910
 * Callers:
 *     PpmParkRegisterParkingEx @ 0x1405E1218 (PpmParkRegisterParkingEx.c)
 * Callees:
 *     Feature_PpmParkExNuma__private_IsEnabledFallback @ 0x1405DE948 (Feature_PpmParkExNuma__private_IsEnabledFallback.c)
 */

__int64 Feature_PpmParkExNuma__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_PpmParkExNuma__private_featureState & 0x10) != 0 )
    return Feature_PpmParkExNuma__private_featureState & 1;
  else
    return Feature_PpmParkExNuma__private_IsEnabledFallback(
             (unsigned int)Feature_PpmParkExNuma__private_featureState,
             3LL);
}

/*
 * XREFs of Feature_PpmParkExNuma_GnrOnly__private_IsEnabledDeviceUsageNoInline @ 0x1405E129C
 * Callers:
 *     PpmParkRegisterParkingEx @ 0x1405E3C90 (PpmParkRegisterParkingEx.c)
 * Callees:
 *     Feature_PpmParkExNuma_GnrOnly__private_IsEnabledFallback @ 0x1405E12D4 (Feature_PpmParkExNuma_GnrOnly__private_IsEnabledFallback.c)
 */

__int64 Feature_PpmParkExNuma_GnrOnly__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_PpmParkExNuma_GnrOnly__private_featureState & 0x10) != 0 )
    return Feature_PpmParkExNuma_GnrOnly__private_featureState & 1;
  else
    return Feature_PpmParkExNuma_GnrOnly__private_IsEnabledFallback(
             (unsigned int)Feature_PpmParkExNuma_GnrOnly__private_featureState,
             3LL);
}

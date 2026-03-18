/*
 * XREFs of Feature_1930645816__private_IsEnabledDeviceUsageNoInline @ 0x1405C02E0
 * Callers:
 *     KiSetFeatureBits @ 0x140B59BF4 (KiSetFeatureBits.c)
 * Callees:
 *     Feature_1930645816__private_IsEnabledFallback @ 0x1405C0318 (Feature_1930645816__private_IsEnabledFallback.c)
 */

__int64 Feature_1930645816__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_1930645816__private_featureState & 0x10) != 0 )
    return Feature_1930645816__private_featureState & 1;
  else
    return Feature_1930645816__private_IsEnabledFallback((unsigned int)Feature_1930645816__private_featureState, 3LL);
}

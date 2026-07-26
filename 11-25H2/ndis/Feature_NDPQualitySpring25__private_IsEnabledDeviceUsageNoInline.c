/*
 * XREFs of Feature_NDPQualitySpring25__private_IsEnabledDeviceUsageNoInline @ 0x14009F48C
 * Callers:
 *     DriverEntry @ 0x140196234 (DriverEntry.c)
 * Callees:
 *     Feature_NDPQualitySpring25__private_IsEnabledFallback @ 0x14009F4C4 (Feature_NDPQualitySpring25__private_IsEnabledFallback.c)
 */

__int64 Feature_NDPQualitySpring25__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_NDPQualitySpring25__private_featureState & 0x10) != 0 )
    return Feature_NDPQualitySpring25__private_featureState & 1;
  else
    return Feature_NDPQualitySpring25__private_IsEnabledFallback(
             (unsigned int)Feature_NDPQualitySpring25__private_featureState,
             3LL);
}

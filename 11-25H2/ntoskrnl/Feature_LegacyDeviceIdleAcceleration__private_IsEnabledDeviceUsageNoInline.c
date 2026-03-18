/*
 * XREFs of Feature_LegacyDeviceIdleAcceleration__private_IsEnabledDeviceUsageNoInline @ 0x1404F210C
 * Callers:
 *     PopScanIdleList @ 0x14048872C (PopScanIdleList.c)
 * Callees:
 *     Feature_LegacyDeviceIdleAcceleration__private_IsEnabledFallback @ 0x1404F2144 (Feature_LegacyDeviceIdleAcceleration__private_IsEnabledFallback.c)
 */

__int64 Feature_LegacyDeviceIdleAcceleration__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_LegacyDeviceIdleAcceleration__private_featureState & 0x10) != 0 )
    return Feature_LegacyDeviceIdleAcceleration__private_featureState & 1;
  else
    return Feature_LegacyDeviceIdleAcceleration__private_IsEnabledFallback(
             (unsigned int)Feature_LegacyDeviceIdleAcceleration__private_featureState,
             3LL);
}

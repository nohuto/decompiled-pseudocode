/*
 * XREFs of Feature_HvciScanHvptHandling__private_IsEnabledDeviceUsageNoInline @ 0x1405A3728
 * Callers:
 *     PiIsDriverBlocked @ 0x1409BA914 (PiIsDriverBlocked.c)
 * Callees:
 *     Feature_HvciScanHvptHandling__private_IsEnabledFallback @ 0x1405A3760 (Feature_HvciScanHvptHandling__private_IsEnabledFallback.c)
 */

__int64 Feature_HvciScanHvptHandling__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_HvciScanHvptHandling__private_featureState & 0x10) != 0 )
    return Feature_HvciScanHvptHandling__private_featureState & 1;
  else
    return Feature_HvciScanHvptHandling__private_IsEnabledFallback(
             (unsigned int)Feature_HvciScanHvptHandling__private_featureState,
             3LL);
}

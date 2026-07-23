/*
 * XREFs of Feature_PlutonDynamicUpgrade__private_IsEnabledDeviceUsageNoInline @ 0x1405D0ABC
 * Callers:
 *     PopBuildMemoryImageHeader @ 0x140B66A30 (PopBuildMemoryImageHeader.c)
 * Callees:
 *     Feature_PlutonDynamicUpgrade__private_IsEnabledFallback @ 0x1405D0AF4 (Feature_PlutonDynamicUpgrade__private_IsEnabledFallback.c)
 */

__int64 Feature_PlutonDynamicUpgrade__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_PlutonDynamicUpgrade__private_featureState & 0x10) != 0 )
    return Feature_PlutonDynamicUpgrade__private_featureState & 1;
  else
    return Feature_PlutonDynamicUpgrade__private_IsEnabledFallback(
             (unsigned int)Feature_PlutonDynamicUpgrade__private_featureState,
             3LL);
}

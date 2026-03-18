/*
 * XREFs of Feature_FixModernStandbyDRIPSForMultipleSSDInStorNVMe__private_IsEnabledDeviceUsageNoInline @ 0x14001772C
 * Callers:
 *     NVMeHwFindAdapter @ 0x140017CA0 (NVMeHwFindAdapter.c)
 * Callees:
 *     Feature_FixModernStandbyDRIPSForMultipleSSDInStorNVMe__private_IsEnabledFallback @ 0x140017764 (Feature_FixModernStandbyDRIPSForMultipleSSDInStorNVMe__private_IsEnabledFallback.c)
 */

__int64 Feature_FixModernStandbyDRIPSForMultipleSSDInStorNVMe__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixModernStandbyDRIPSForMultipleSSDInStorNVMe__private_featureState & 0x10) != 0 )
    return Feature_FixModernStandbyDRIPSForMultipleSSDInStorNVMe__private_featureState & 1;
  else
    return Feature_FixModernStandbyDRIPSForMultipleSSDInStorNVMe__private_IsEnabledFallback(
             (unsigned int)Feature_FixModernStandbyDRIPSForMultipleSSDInStorNVMe__private_featureState,
             3LL);
}

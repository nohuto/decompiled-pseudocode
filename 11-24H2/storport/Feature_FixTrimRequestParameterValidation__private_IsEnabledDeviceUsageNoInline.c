/*
 * XREFs of Feature_FixTrimRequestParameterValidation__private_IsEnabledDeviceUsageNoInline @ 0x1400FA258
 * Callers:
 *     NvmeNamespaceDsmWriteZeroes @ 0x1400FF274 (NvmeNamespaceDsmWriteZeroes.c)
 *     NvmeNamespaceDataSetManagementIoctl @ 0x1401A15F8 (NvmeNamespaceDataSetManagementIoctl.c)
 * Callees:
 *     Feature_FixTrimRequestParameterValidation__private_IsEnabledFallback @ 0x1400FA290 (Feature_FixTrimRequestParameterValidation__private_IsEnabledFallback.c)
 */

__int64 Feature_FixTrimRequestParameterValidation__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixTrimRequestParameterValidation__private_featureState & 0x10) != 0 )
    return Feature_FixTrimRequestParameterValidation__private_featureState & 1;
  else
    return Feature_FixTrimRequestParameterValidation__private_IsEnabledFallback(
             (unsigned int)Feature_FixTrimRequestParameterValidation__private_featureState,
             3LL);
}

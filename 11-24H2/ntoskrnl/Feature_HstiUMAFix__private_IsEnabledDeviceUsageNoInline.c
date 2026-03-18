/*
 * XREFs of Feature_HstiUMAFix__private_IsEnabledDeviceUsageNoInline @ 0x1406A372C
 * Callers:
 *     SeQueryHSTIResults @ 0x140AE89C8 (SeQueryHSTIResults.c)
 * Callees:
 *     Feature_HstiUMAFix__private_IsEnabledFallback @ 0x1406A3764 (Feature_HstiUMAFix__private_IsEnabledFallback.c)
 */

__int64 Feature_HstiUMAFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_HstiUMAFix__private_featureState & 0x10) != 0 )
    return Feature_HstiUMAFix__private_featureState & 1;
  else
    return Feature_HstiUMAFix__private_IsEnabledFallback((unsigned int)Feature_HstiUMAFix__private_featureState, 3LL);
}

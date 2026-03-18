/*
 * XREFs of Feature_Servicing_HotpatchLoaderFixes__private_IsEnabledDeviceUsageNoInline @ 0x14067CE40
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x1407F191C (MiApplyImageHotPatchRequest.c)
 * Callees:
 *     Feature_Servicing_HotpatchLoaderFixes__private_IsEnabledFallback @ 0x14067CE78 (Feature_Servicing_HotpatchLoaderFixes__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_HotpatchLoaderFixes__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_HotpatchLoaderFixes__private_featureState & 0x10) != 0 )
    return Feature_Servicing_HotpatchLoaderFixes__private_featureState & 1;
  else
    return Feature_Servicing_HotpatchLoaderFixes__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_HotpatchLoaderFixes__private_featureState,
             3LL);
}

/*
 * XREFs of Feature_Servicing_HotpatchLoaderFixes__private_IsEnabledDeviceUsageNoInline @ 0x14067DFCC
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x1407F1EEC (MiApplyImageHotPatchRequest.c)
 * Callees:
 *     Feature_Servicing_HotpatchLoaderFixes__private_IsEnabledFallback @ 0x14067E004 (Feature_Servicing_HotpatchLoaderFixes__private_IsEnabledFallback.c)
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

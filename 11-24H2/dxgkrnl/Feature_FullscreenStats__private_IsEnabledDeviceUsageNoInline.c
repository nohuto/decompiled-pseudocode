/*
 * XREFs of Feature_FullscreenStats__private_IsEnabledDeviceUsageNoInline @ 0x14009D174
 * Callers:
 *     ?QueryStats@CCompositionBuffer@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x14005F3D8 (-QueryStats@CCompositionBuffer@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 *     ?QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x14005F470 (-QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 *     ?NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N_K@Z @ 0x14009D920 (-NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N_K@Z.c)
 * Callees:
 *     Feature_FullscreenStats__private_IsEnabledFallback @ 0x14009D1AC (Feature_FullscreenStats__private_IsEnabledFallback.c)
 */

__int64 Feature_FullscreenStats__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FullscreenStats__private_featureState & 0x10) != 0 )
    return Feature_FullscreenStats__private_featureState & 1;
  else
    return Feature_FullscreenStats__private_IsEnabledFallback(
             (unsigned int)Feature_FullscreenStats__private_featureState,
             3LL);
}

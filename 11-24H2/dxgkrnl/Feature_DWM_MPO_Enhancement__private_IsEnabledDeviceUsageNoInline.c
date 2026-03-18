/*
 * XREFs of Feature_DWM_MPO_Enhancement__private_IsEnabledDeviceUsageNoInline @ 0x14009D120
 * Callers:
 *     ?Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@PEA_K@Z @ 0x140018B8C (-Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@PEA_K@Z.c)
 *     ?UpdatePresentRate@CCompositionSurface@@IEAAXXZ @ 0x14001E498 (-UpdatePresentRate@CCompositionSurface@@IEAAXXZ.c)
 *     ?QueryFrameRate@CCompositionSurface@@QEBAIXZ @ 0x14005F3A4 (-QueryFrameRate@CCompositionSurface@@QEBAIXZ.c)
 * Callees:
 *     Feature_DWM_MPO_Enhancement__private_IsEnabledFallback @ 0x14009D158 (Feature_DWM_MPO_Enhancement__private_IsEnabledFallback.c)
 */

__int64 Feature_DWM_MPO_Enhancement__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DWM_MPO_Enhancement__private_featureState & 0x10) != 0 )
    return Feature_DWM_MPO_Enhancement__private_featureState & 1;
  else
    return Feature_DWM_MPO_Enhancement__private_IsEnabledFallback(
             (unsigned int)Feature_DWM_MPO_Enhancement__private_featureState,
             3LL);
}

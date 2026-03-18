/*
 * XREFs of Feature_DWM_MPO_Enhancement__private_IsEnabledDeviceUsageNoInline @ 0x14009AEF8
 * Callers:
 *     ?Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@PEA_K@Z @ 0x140009680 (-Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@PEA_K@Z.c)
 *     ?CalcFrameRate@CPresentRate@@QEBAIXZ @ 0x1400471C8 (-CalcFrameRate@CPresentRate@@QEBAIXZ.c)
 * Callees:
 *     Feature_DWM_MPO_Enhancement__private_IsEnabledFallback @ 0x14009AF30 (Feature_DWM_MPO_Enhancement__private_IsEnabledFallback.c)
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

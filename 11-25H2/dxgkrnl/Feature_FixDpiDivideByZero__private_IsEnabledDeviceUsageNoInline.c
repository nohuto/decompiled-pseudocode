/*
 * XREFs of Feature_FixDpiDivideByZero__private_IsEnabledDeviceUsageNoInline @ 0x14006EECC
 * Callers:
 *     ?HeuristicallyDetermineViewingDistance@@YAIAEBUtagSIZE@@H0@Z @ 0x14005DD34 (-HeuristicallyDetermineViewingDistance@@YAIAEBUtagSIZE@@H0@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1403A6D68 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 * Callees:
 *     Feature_FixDpiDivideByZero__private_IsEnabledFallback @ 0x14006EF04 (Feature_FixDpiDivideByZero__private_IsEnabledFallback.c)
 */

__int64 Feature_FixDpiDivideByZero__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixDpiDivideByZero__private_featureState & 0x10) != 0 )
    return Feature_FixDpiDivideByZero__private_featureState & 1;
  else
    return Feature_FixDpiDivideByZero__private_IsEnabledFallback(
             (unsigned int)Feature_FixDpiDivideByZero__private_featureState,
             3LL);
}

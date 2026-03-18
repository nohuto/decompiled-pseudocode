/*
 * XREFs of Feature_Servicing_UMPDInheritSrcSurfacePalette__private_IsEnabledDeviceUsageNoInline @ 0x1402FEF60
 * Callers:
 *     ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x1402590D8 (-bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z.c)
 * Callees:
 *     Feature_Servicing_UMPDInheritSrcSurfacePalette__private_IsEnabledFallback @ 0x1402FEF98 (Feature_Servicing_UMPDInheritSrcSurfacePalette__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_UMPDInheritSrcSurfacePalette__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_UMPDInheritSrcSurfacePalette__private_featureState & 0x10) != 0 )
    return Feature_Servicing_UMPDInheritSrcSurfacePalette__private_featureState & 1;
  else
    return Feature_Servicing_UMPDInheritSrcSurfacePalette__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_UMPDInheritSrcSurfacePalette__private_featureState,
             3LL);
}

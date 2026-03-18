/*
 * XREFs of ?GetSwapChainRealization@CGlobalCompositionSurfaceInfo@@IEBAPEAVISwapChainRealization@@XZ @ 0x1800D2830
 * Callers:
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D1DF0 (-GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D2090 (-CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?GetScaledLetterboxingMargins@CCompositionSurfaceBitmap@@QEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D2700 (-GetScaledLetterboxingMargins@CCompositionSurfaceBitmap@@QEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@QEBA?AW4SizePreference@@XZ @ 0x1800D27D0 (-GetSizePreference@CCompositionSurfaceBitmap@@QEBA-AW4SizePreference@@XZ.c)
 *     ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x1800D29C0 (-GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z.c)
 *     ?GetBorderColor@CGlobalCompositionSurfaceInfo@@UEBA?AU_D3DCOLORVALUE@@XZ @ 0x180213AF0 (-GetBorderColor@CGlobalCompositionSurfaceInfo@@UEBA-AU_D3DCOLORVALUE@@XZ.c)
 * Callees:
 *     <none>
 */

struct ISwapChainRealization *__fastcall CGlobalCompositionSurfaceInfo::GetSwapChainRealization(
        CGlobalCompositionSurfaceInfo *this)
{
  struct ISwapChainRealization *result; // rax

  result = (struct ISwapChainRealization *)*((_QWORD *)this + 26);
  if ( !result
    || (unsigned int)((__int64)(*((_QWORD *)this + 24) - *((_QWORD *)this + 23)) >> 3) <= 1
    && *((_DWORD *)this + 36) != 3 )
  {
    return 0LL;
  }
  return result;
}

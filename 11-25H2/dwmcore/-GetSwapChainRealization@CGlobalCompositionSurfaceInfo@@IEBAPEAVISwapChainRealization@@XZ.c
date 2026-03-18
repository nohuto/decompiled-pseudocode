/*
 * XREFs of ?GetSwapChainRealization@CGlobalCompositionSurfaceInfo@@IEBAPEAVISwapChainRealization@@XZ @ 0x1800A25A0
 * Callers:
 *     ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x1800A0970 (-GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z.c)
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A1B60 (-GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A1E00 (-CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?GetScaledLetterboxingMargins@CCompositionSurfaceBitmap@@QEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A2470 (-GetScaledLetterboxingMargins@CCompositionSurfaceBitmap@@QEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@QEBA?AW4SizePreference@@XZ @ 0x1800A2540 (-GetSizePreference@CCompositionSurfaceBitmap@@QEBA-AW4SizePreference@@XZ.c)
 *     ?GetBorderColor@CGlobalCompositionSurfaceInfo@@UEBA?AU_D3DCOLORVALUE@@XZ @ 0x18021EE10 (-GetBorderColor@CGlobalCompositionSurfaceInfo@@UEBA-AU_D3DCOLORVALUE@@XZ.c)
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

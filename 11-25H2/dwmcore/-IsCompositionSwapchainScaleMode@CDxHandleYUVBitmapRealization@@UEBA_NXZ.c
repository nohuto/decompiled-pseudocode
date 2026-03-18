/*
 * XREFs of ?IsCompositionSwapchainScaleMode@CDxHandleYUVBitmapRealization@@UEBA_NXZ @ 0x180226C60
 * Callers:
 *     ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x1800A0970 (-GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleYUVBitmapRealization::IsCompositionSwapchainScaleMode(CDxHandleYUVBitmapRealization *this)
{
  return (*((_DWORD *)this - 22) & 0x4000) != 0;
}

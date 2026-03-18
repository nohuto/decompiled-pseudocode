/*
 * XREFs of ?IsOfType@CCachedVisualImage@@MEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801EE2E0
 * Callers:
 *     ?GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ @ 0x1801EE15C (-GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ.c)
 *     ?DrawBitmap@CRenderDataBounds@@UEAAJPEAVCResource@@@Z @ 0x1801EE1C0 (-DrawBitmap@CRenderDataBounds@@UEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCachedVisualImage::IsOfType(__int64 a1, int a2)
{
  return a2 == 84 || a2 == 18;
}

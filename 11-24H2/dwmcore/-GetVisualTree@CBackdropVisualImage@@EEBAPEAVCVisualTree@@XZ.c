/*
 * XREFs of ?GetVisualTree@CBackdropVisualImage@@EEBAPEAVCVisualTree@@XZ @ 0x1800F7850
 * Callers:
 *     ?CalcOcclusion@CCachedVisualImage@@MEAAPEAVCOcclusionContext@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800F7740 (-CalcOcclusion@CCachedVisualImage@@MEAAPEAVCOcclusionContext@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 * Callees:
 *     <none>
 */

struct CVisualTree *__fastcall CBackdropVisualImage::GetVisualTree(CVisual **this)
{
  return CVisual::GetVisualTreeNoRef(this[17]);
}

/*
 * XREFs of ?GetVisualTree@CCachedVisualImage@@MEBAPEAVCVisualTree@@XZ @ 0x18016F0C0
 * Callers:
 *     ?IsSameVisualTree@CCachedVisualImage@@QEBA_NPEBVCVisualTree@@@Z @ 0x18016E7C4 (-IsSameVisualTree@CCachedVisualImage@@QEBA_NPEBVCVisualTree@@@Z.c)
 *     ?GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x18016E810 (-GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGene.c)
 * Callees:
 *     <none>
 */

struct CVisualTree *__fastcall CCachedVisualImage::GetVisualTree(CCachedVisualImage *this)
{
  return (struct CVisualTree *)*((_QWORD *)this + 22);
}

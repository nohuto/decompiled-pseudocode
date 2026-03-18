/*
 * XREFs of ?GetVisualTree@CCachedVisualImage@@MEBAPEAVCVisualTree@@XZ @ 0x18006F2F0
 * Callers:
 *     ?IsSameVisualTree@CCachedVisualImage@@QEBA_NPEBVCVisualTree@@@Z @ 0x18006E9FC (-IsSameVisualTree@CCachedVisualImage@@QEBA_NPEBVCVisualTree@@@Z.c)
 *     ?GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x18006EA40 (-GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGene.c)
 * Callees:
 *     <none>
 */

struct CVisualTree *__fastcall CCachedVisualImage::GetVisualTree(CCachedVisualImage *this)
{
  return (struct CVisualTree *)*((_QWORD *)this + 22);
}

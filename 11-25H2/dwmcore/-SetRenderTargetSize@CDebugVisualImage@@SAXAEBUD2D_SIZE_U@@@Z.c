/*
 * XREFs of ?SetRenderTargetSize@CDebugVisualImage@@SAXAEBUD2D_SIZE_U@@@Z @ 0x1801FAE14
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x180054628 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 * Callees:
 *     <none>
 */

void __fastcall CDebugVisualImage::SetRenderTargetSize(const struct D2D_SIZE_U *a1)
{
  if ( a1->width > (unsigned int)CDebugVisualImage::s_renderTargetSize
    && a1->height > HIDWORD(CDebugVisualImage::s_renderTargetSize) )
  {
    CDebugVisualImage::s_renderTargetSize = (CDisplayManager *)*a1;
  }
}

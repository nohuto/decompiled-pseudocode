/*
 * XREFs of ?IncrementDrawListGenerationCount@CDesktopTree@@UEBAXXZ @ 0x1801F6300
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x180054628 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 * Callees:
 *     <none>
 */

void __fastcall CDesktopTree::IncrementDrawListGenerationCount(CDesktopTree *this)
{
  *((_QWORD *)this + 325) = ++CDesktopTree::s_desktopDrawlistGenerationCount;
}

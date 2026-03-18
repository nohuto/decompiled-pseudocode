/*
 * XREFs of ?GetSharedOcclusionContext@CDesktopTree@@QEBAPEBVCOcclusionContext@@XZ @ 0x1800CAC30
 * Callers:
 *     ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800815F4 (-DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_R.c)
 *     ?AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x1800C9C3C (-AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV-$span@PEBVCVisual@@$0-0@gsl@@@Z.c)
 *     ?CalcVisibleArea@OverlayPlaneInfo@COverlayContext@@QEAA_NPEBVCDesktopTree@@AEBVCMILMatrix@@_N@Z @ 0x18027460C (-CalcVisibleArea@OverlayPlaneInfo@COverlayContext@@QEAA_NPEBVCDesktopTree@@AEBVCMILMatrix@@_N@Z.c)
 *     ?HasOverlappingCornerRects@COverlayContext@@CA_NPEAVOverlayPlaneInfo@1@AEBV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180276C08 (-HasOverlappingCornerRects@COverlayContext@@CA_NPEAVOverlayPlaneInfo@1@AEBV-$vector_facade@PEAVO.c)
 * Callees:
 *     <none>
 */

const struct COcclusionContext *__fastcall CDesktopTree::GetSharedOcclusionContext(CDesktopTree *this)
{
  const struct COcclusionContext *result; // rax
  __int64 v3; // r8
  char *v4; // rcx

  result = 0LL;
  v3 = 0LL;
  if ( g_pComposition )
    v3 = *((_QWORD *)g_pComposition + 111);
  v4 = (char *)this + 2648;
  if ( *((_QWORD *)this + 334) == v3 )
    return (const struct COcclusionContext *)v4;
  return result;
}

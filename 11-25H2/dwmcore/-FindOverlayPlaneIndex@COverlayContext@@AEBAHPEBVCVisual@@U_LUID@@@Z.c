/*
 * XREFs of ?FindOverlayPlaneIndex@COverlayContext@@AEBAHPEBVCVisual@@U_LUID@@@Z @ 0x1801FAD98
 * Callers:
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18024BB4C (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV-$TMilRect_@HUtagRECT@@UD2D_POINT.c)
 *     ?NotifyOverlayInvertedContent@COverlayContext@@QEAAXPEBVCVisual@@U_LUID@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18024FF6C (-NotifyOverlayInvertedContent@COverlayContext@@QEAAXPEBVCVisual@@U_LUID@@AEBV-$TMilRect_@HUtagRE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall COverlayContext::FindOverlayPlaneIndex(
        COverlayContext *this,
        const struct CVisual *a2,
        struct _LUID a3)
{
  __int64 v3; // rbx
  unsigned int v4; // r11d
  unsigned int i; // r9d
  __int64 v6; // rax

  v3 = *((_QWORD *)this + 1617);
  v4 = -1;
  for ( i = 0; i < -1030792151 * (unsigned int)((*((_QWORD *)this + 1618) - v3) >> 4); ++i )
  {
    v6 = 400LL * i;
    if ( *(const struct CVisual **)(v6 + v3 + 8) == a2 && *(_QWORD *)(*(_QWORD *)(v6 + v3 + 16) + 40LL) == a3 )
      return i;
  }
  return v4;
}

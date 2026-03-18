/*
 * XREFs of ?FindOverlayPlaneIndex@COverlayContext@@AEBAHPEBVCVisual@@U_LUID@@@Z @ 0x1801EE648
 * Callers:
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180242F58 (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV-$TMilRect_@HUtagRECT@@UD2D_POINT.c)
 *     ?NotifyOverlayInvertedContent@COverlayContext@@QEAAXPEBVCVisual@@U_LUID@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180245C54 (-NotifyOverlayInvertedContent@COverlayContext@@QEAAXPEBVCVisual@@U_LUID@@AEBV-$TMilRect_@HUtagRE.c)
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

  v3 = *((_QWORD *)this + 1585);
  v4 = -1;
  for ( i = 0; i < 438261969 * (unsigned int)((*((_QWORD *)this + 1586) - v3) >> 3); ++i )
  {
    v6 = 392LL * i;
    if ( *(const struct CVisual **)(v6 + v3 + 8) == a2 && *(_QWORD *)(*(_QWORD *)(v6 + v3 + 16) + 40LL) == a3 )
      return i;
  }
  return v4;
}

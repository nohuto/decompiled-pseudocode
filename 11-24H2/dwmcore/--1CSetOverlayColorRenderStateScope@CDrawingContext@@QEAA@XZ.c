/*
 * XREFs of ??1CSetOverlayColorRenderStateScope@CDrawingContext@@QEAA@XZ @ 0x1802137F4
 * Callers:
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180242F58 (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV-$TMilRect_@HUtagRECT@@UD2D_POINT.c)
 * Callees:
 *     <none>
 */

void __fastcall CDrawingContext::CSetOverlayColorRenderStateScope::~CSetOverlayColorRenderStateScope(
        CDrawingContext::CSetOverlayColorRenderStateScope *this)
{
  if ( *(_QWORD *)this )
    --*(_DWORD *)(*(_QWORD *)this + 652LL);
}

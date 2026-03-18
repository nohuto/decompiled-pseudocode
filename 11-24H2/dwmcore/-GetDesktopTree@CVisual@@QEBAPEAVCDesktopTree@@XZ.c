/*
 * XREFs of ?GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ @ 0x1800399A0
 * Callers:
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180048BB8 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x1800495FC (-SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 *     ?HasOverlappingCornerRects@COverlayContext@@CA_NPEAVOverlayPlaneInfo@1@AEBV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18026C09C (-HasOverlappingCornerRects@COverlayContext@@CA_NPEAVOverlayPlaneInfo@1@AEBV-$vector_facade@PEAVO.c)
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180281244 (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetContentBounds@CCursorVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180290020 (-GetContentBounds@CCursorVisual@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?UpdateNotificationMode@CCursorVisual@@QEAAXXZ @ 0x180290BB8 (-UpdateNotificationMode@CCursorVisual@@QEAAXXZ.c)
 * Callees:
 *     ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x180039AC0 (-GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct CDesktopTree *__fastcall CVisual::GetDesktopTree(CVisual *this)
{
  __int64 v2; // rbx
  struct CVisualTree *VisualTreeNoRef; // rax
  struct CVisualTree *v4; // rsi

  v2 = 0LL;
  while ( this )
  {
    VisualTreeNoRef = CVisual::GetVisualTreeNoRef(this);
    v4 = VisualTreeNoRef;
    if ( VisualTreeNoRef
      && (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)VisualTreeNoRef + 184LL))(VisualTreeNoRef) )
    {
      return v4;
    }
    this = (CVisual *)*((_QWORD *)this + 11);
  }
  return (struct CDesktopTree *)v2;
}

/*
 * XREFs of ?GetMonitorTransform@CLegacyRenderTarget@@UEBAAEBVCMonitorTransform@@XZ @ 0x180189810
 * Callers:
 *     ?GetVirtualModeClip@COverlayContext@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1801894F8 (-GetVirtualModeClip@COverlayContext@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAND.c)
 *     ?IsRevokable@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x18018959C (-IsRevokable@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z.c)
 *     ?GetDeviceTransform@COverlayContext@@QEBAAEBVCMILMatrix@@XZ @ 0x1801897C4 (-GetDeviceTransform@COverlayContext@@QEBAAEBVCMILMatrix@@XZ.c)
 * Callees:
 *     <none>
 */

const struct CMonitorTransform *__fastcall CLegacyRenderTarget::GetMonitorTransform(CLegacyRenderTarget *this)
{
  return (CLegacyRenderTarget *)((char *)this + 30728);
}

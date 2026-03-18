/*
 * XREFs of ?GetMonitorTransform@CDDisplayRenderTarget@@UEBAAEBVCMonitorTransform@@XZ @ 0x1800234A0
 * Callers:
 *     ?GetVirtualModeClip@COverlayContext@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800231A8 (-GetVirtualModeClip@COverlayContext@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAND.c)
 *     ?IsRevokable@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x18002324C (-IsRevokable@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z.c)
 *     ?GetDeviceTransform@COverlayContext@@QEBAAEBVCMILMatrix@@XZ @ 0x180023440 (-GetDeviceTransform@COverlayContext@@QEBAAEBVCMILMatrix@@XZ.c)
 * Callees:
 *     <none>
 */

const struct CMonitorTransform *__fastcall CDDisplayRenderTarget::GetMonitorTransform(CDDisplayRenderTarget *this)
{
  return (CDDisplayRenderTarget *)((char *)this + 30352);
}

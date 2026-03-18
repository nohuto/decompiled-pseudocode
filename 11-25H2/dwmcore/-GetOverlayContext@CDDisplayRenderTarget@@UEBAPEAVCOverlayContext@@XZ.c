/*
 * XREFs of ?GetOverlayContext@CDDisplayRenderTarget@@UEBAPEAVCOverlayContext@@XZ @ 0x1800C9C30
 * Callers:
 *     ?CheckForFullscreenVideoNotifications@CFSVPProvider@@QEAAXXZ @ 0x1800C9618 (-CheckForFullscreenVideoNotifications@CFSVPProvider@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct COverlayContext *__fastcall CDDisplayRenderTarget::GetOverlayContext(CDDisplayRenderTarget *this)
{
  return (CDDisplayRenderTarget *)((char *)this + 64);
}

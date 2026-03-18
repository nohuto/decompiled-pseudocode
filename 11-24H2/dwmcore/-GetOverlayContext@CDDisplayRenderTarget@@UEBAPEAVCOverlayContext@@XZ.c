/*
 * XREFs of ?GetOverlayContext@CDDisplayRenderTarget@@UEBAPEAVCOverlayContext@@XZ @ 0x18009B9D0
 * Callers:
 *     ?CheckForFullscreenVideoNotifications@CFSVPProvider@@QEAAXXZ @ 0x18009B4E8 (-CheckForFullscreenVideoNotifications@CFSVPProvider@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct COverlayContext *__fastcall CDDisplayRenderTarget::GetOverlayContext(CDDisplayRenderTarget *this)
{
  return (CDDisplayRenderTarget *)((char *)this + 64);
}

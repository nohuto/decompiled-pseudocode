/*
 * XREFs of ?SyncLock@CDDisplayRenderTarget@@UEAAXI@Z @ 0x1800C52C0
 * Callers:
 *     ?Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800C6C14 (-Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@II_N@Z @ 0x180085CF0 (-SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@II_N@Z.c)
 *     ?NotifySyncLock@CTargetStats@@QEAAXI@Z @ 0x1800C5074 (-NotifySyncLock@CTargetStats@@QEAAXI@Z.c)
 */

void __fastcall CDDisplayRenderTarget::SyncLock(CDDisplayRenderTarget *this, unsigned int a2)
{
  if ( *((_DWORD *)this + 8404) )
  {
    if ( (int)COverlayContext::SyncLock(
                (CDDisplayRenderTarget *)((char *)this + 64),
                (struct IOverlaySwapChain *)((*((_QWORD *)this + 6) + 24LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 6) >> 64)),
                a2,
                *((_DWORD *)this + 8394),
                0) >= 0 )
      CTargetStats::NotifySyncLock((CDDisplayRenderTarget *)((char *)this + 33368), a2);
  }
}

/*
 * XREFs of ?PresentNeeded@CDDisplayRenderTarget@@IEBA_NXZ @ 0x1801E10E0
 * Callers:
 *     ?Present@CDDisplayRenderTarget@@IEAAJXZ @ 0x1800C6E9C (-Present@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800C7630 (-RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetSyncLockCount@CDDisplayRenderTarget@@UEBAI_KI@Z @ 0x18028A140 (-GetSyncLockCount@CDDisplayRenderTarget@@UEBAI_KI@Z.c)
 * Callees:
 *     ?PresentNeeded@COverlayContext@@QEBA_NXZ @ 0x1801E1148 (-PresentNeeded@COverlayContext@@QEBA_NXZ.c)
 */

char __fastcall CDDisplayRenderTarget::PresentNeeded(CDDisplayRenderTarget *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_BYTE *)this + 33904) || COverlayContext::PresentNeeded((CDDisplayRenderTarget *)((char *)this + 224)) )
    return 1;
  return v1;
}

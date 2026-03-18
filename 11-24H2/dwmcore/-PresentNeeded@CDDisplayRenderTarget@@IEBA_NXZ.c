/*
 * XREFs of ?PresentNeeded@CDDisplayRenderTarget@@IEBA_NXZ @ 0x1801D4EE0
 * Callers:
 *     ?Present@CDDisplayRenderTarget@@IEAAJXZ @ 0x18009912C (-Present@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x180099730 (-RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetSyncLockCount@CDDisplayRenderTarget@@UEBAI_KI@Z @ 0x18027F320 (-GetSyncLockCount@CDDisplayRenderTarget@@UEBAI_KI@Z.c)
 * Callees:
 *     ?PresentNeeded@COverlayContext@@QEBA_NXZ @ 0x1801D4F48 (-PresentNeeded@COverlayContext@@QEBA_NXZ.c)
 */

char __fastcall CDDisplayRenderTarget::PresentNeeded(CDDisplayRenderTarget *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_BYTE *)this + 33520) || COverlayContext::PresentNeeded((CDDisplayRenderTarget *)((char *)this + 224)) )
    return 1;
  return v1;
}

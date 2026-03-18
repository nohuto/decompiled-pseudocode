/*
 * XREFs of ?PresentNeeded@CLegacyRenderTarget@@IEBA_NXZ @ 0x1801D4F14
 * Callers:
 *     ?Present@CLegacyRenderTarget@@IEAAJXZ @ 0x180099BC8 (-Present@CLegacyRenderTarget@@IEAAJXZ.c)
 *     ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x18009A200 (-RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetSyncLockCount@CLegacyRenderTarget@@UEBAI_KI@Z @ 0x1801D4E40 (-GetSyncLockCount@CLegacyRenderTarget@@UEBAI_KI@Z.c)
 * Callees:
 *     ?PresentNeeded@COverlayContext@@QEBA_NXZ @ 0x1801D4F48 (-PresentNeeded@COverlayContext@@QEBA_NXZ.c)
 */

char __fastcall CLegacyRenderTarget::PresentNeeded(CLegacyRenderTarget *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_BYTE *)this + 33512) || COverlayContext::PresentNeeded((CLegacyRenderTarget *)((char *)this + 216)) )
    return 1;
  return v1;
}

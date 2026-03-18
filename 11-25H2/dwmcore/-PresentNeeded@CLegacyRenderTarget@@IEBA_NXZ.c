/*
 * XREFs of ?PresentNeeded@CLegacyRenderTarget@@IEBA_NXZ @ 0x1801E1114
 * Callers:
 *     ?Present@CLegacyRenderTarget@@IEAAJXZ @ 0x1800C7AC8 (-Present@CLegacyRenderTarget@@IEAAJXZ.c)
 *     ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800C81C0 (-RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetSyncLockCount@CLegacyRenderTarget@@UEBAI_KI@Z @ 0x1801E1040 (-GetSyncLockCount@CLegacyRenderTarget@@UEBAI_KI@Z.c)
 * Callees:
 *     ?PresentNeeded@COverlayContext@@QEBA_NXZ @ 0x1801E1148 (-PresentNeeded@COverlayContext@@QEBA_NXZ.c)
 */

char __fastcall CLegacyRenderTarget::PresentNeeded(CLegacyRenderTarget *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_BYTE *)this + 33896) || COverlayContext::PresentNeeded((CLegacyRenderTarget *)((char *)this + 216)) )
    return 1;
  return v1;
}

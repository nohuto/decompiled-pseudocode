/*
 * XREFs of ?UseLegacyPresent@CLegacyRenderTarget@@MEBA_NXZ @ 0x180058890
 * Callers:
 *     ?Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180057F90 (-Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?SyncLock@CLegacyRenderTarget@@UEAAXI@Z @ 0x1801F8960 (-SyncLock@CLegacyRenderTarget@@UEAAXI@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLegacyRenderTarget::UseLegacyPresent(CLegacyRenderTarget *this)
{
  return *((_BYTE *)this + 33513);
}

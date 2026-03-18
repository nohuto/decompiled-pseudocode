/*
 * XREFs of ?UseLegacyPresent@CLegacyRenderTarget@@MEBA_NXZ @ 0x180085CE0
 * Callers:
 *     ?SyncLock@CLegacyRenderTarget@@UEAAXI@Z @ 0x180084850 (-SyncLock@CLegacyRenderTarget@@UEAAXI@Z.c)
 *     ?Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180086570 (-Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLegacyRenderTarget::UseLegacyPresent(CLegacyRenderTarget *this)
{
  return *((_BYTE *)this + 33897);
}

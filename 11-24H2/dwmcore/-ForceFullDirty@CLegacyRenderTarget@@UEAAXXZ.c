/*
 * XREFs of ?ForceFullDirty@CLegacyRenderTarget@@UEAAXXZ @ 0x1802229C0
 * Callers:
 *     ?ForceFullDirty@CLegacyRenderTarget@@WEI@EAAXXZ @ 0x180276440 (-ForceFullDirty@CLegacyRenderTarget@@WEI@EAAXXZ.c)
 *     ?ForceFullDirty@CLegacyRenderTarget@@WFA@EAAXXZ @ 0x180276450 (-ForceFullDirty@CLegacyRenderTarget@@WFA@EAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CLegacyRenderTarget::ForceFullDirty(CLegacyRenderTarget *this)
{
  CTargetDirtyBase<8>::SetFullDirty((__int64)this + 30672);
}

/*
 * XREFs of ?ForceFullDirty@CLegacyRenderTarget@@UEAAXXZ @ 0x18022DDF0
 * Callers:
 *     ?ForceFullDirty@CLegacyRenderTarget@@WEI@EAAXXZ @ 0x180280ED0 (-ForceFullDirty@CLegacyRenderTarget@@WEI@EAAXXZ.c)
 *     ?ForceFullDirty@CLegacyRenderTarget@@WFA@EAAXXZ @ 0x180280EE0 (-ForceFullDirty@CLegacyRenderTarget@@WFA@EAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CLegacyRenderTarget::ForceFullDirty(CLegacyRenderTarget *this)
{
  CTargetDirtyBase<8>::SetFullDirty((__int64)this + 31056);
}

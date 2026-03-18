/*
 * XREFs of ?ForceFullDirty@CRemoteRenderTarget@@UEAAXXZ @ 0x180280EF0
 * Callers:
 *     ?ForceFullDirty@CRemoteRenderTarget@@WEI@EAAXXZ @ 0x180280F10 (-ForceFullDirty@CRemoteRenderTarget@@WEI@EAAXXZ.c)
 *     ?ForceFullDirty@CRemoteRenderTarget@@WFA@EAAXXZ @ 0x180280F20 (-ForceFullDirty@CRemoteRenderTarget@@WFA@EAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CRemoteRenderTarget::ForceFullDirty(CRemoteRenderTarget *this)
{
  CTargetDirtyBase<8>::SetFullDirty((__int64)this + 240);
}

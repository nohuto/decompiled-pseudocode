/*
 * XREFs of ?ForceFullDirty@CRemoteRenderTarget@@UEAAXXZ @ 0x180276460
 * Callers:
 *     ?ForceFullDirty@CRemoteRenderTarget@@WEI@EAAXXZ @ 0x180276480 (-ForceFullDirty@CRemoteRenderTarget@@WEI@EAAXXZ.c)
 *     ?ForceFullDirty@CRemoteRenderTarget@@WFA@EAAXXZ @ 0x180276490 (-ForceFullDirty@CRemoteRenderTarget@@WFA@EAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CRemoteRenderTarget::ForceFullDirty(CRemoteRenderTarget *this)
{
  CTargetDirtyBase<8>::SetFullDirty((__int64)this + 240);
}

/*
 * XREFs of ?ForceFullDirty@CDDisplayRenderTarget@@UEAAXXZ @ 0x180232080
 * Callers:
 *     ?ForceFullDirty@CDDisplayRenderTarget@@WEI@EAAXXZ @ 0x180280E90 (-ForceFullDirty@CDDisplayRenderTarget@@WEI@EAAXXZ.c)
 *     ?ForceFullDirty@CDDisplayRenderTarget@@WFA@EAAXXZ @ 0x180280EA0 (-ForceFullDirty@CDDisplayRenderTarget@@WFA@EAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDDisplayRenderTarget::ForceFullDirty(CDDisplayRenderTarget *this)
{
  CTargetDirtyBase<8>::SetFullDirty((__int64)this + 31064);
}

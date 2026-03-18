/*
 * XREFs of ?ForceFullDirty@CDDisplayRenderTarget@@UEAAXXZ @ 0x180226410
 * Callers:
 *     ?ForceFullDirty@CDDisplayRenderTarget@@WEI@EAAXXZ @ 0x180276400 (-ForceFullDirty@CDDisplayRenderTarget@@WEI@EAAXXZ.c)
 *     ?ForceFullDirty@CDDisplayRenderTarget@@WFA@EAAXXZ @ 0x180276410 (-ForceFullDirty@CDDisplayRenderTarget@@WFA@EAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDDisplayRenderTarget::ForceFullDirty(CDDisplayRenderTarget *this)
{
  CTargetDirtyBase<8>::SetFullDirty((__int64)this + 30680);
}

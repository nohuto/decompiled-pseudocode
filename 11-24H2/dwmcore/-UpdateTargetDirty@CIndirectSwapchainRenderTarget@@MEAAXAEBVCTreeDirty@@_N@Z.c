/*
 * XREFs of ?UpdateTargetDirty@CIndirectSwapchainRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z @ 0x1802838D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CIndirectSwapchainRenderTarget::UpdateTargetDirty(
        CIndirectSwapchainRenderTarget *this,
        const struct CTreeDirty *a2)
{
  CTargetDirtyBase<8>::SetFullDirty((__int64)this + 320);
}

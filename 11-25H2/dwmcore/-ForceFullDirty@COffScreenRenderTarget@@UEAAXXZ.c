/*
 * XREFs of ?ForceFullDirty@COffScreenRenderTarget@@UEAAXXZ @ 0x180232E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall COffScreenRenderTarget::ForceFullDirty(COffScreenRenderTarget *this)
{
  CTargetDirtyBase<8>::SetFullDirty((__int64)this + 224);
}

/*
 * XREFs of ?ForceFullDirty@COffScreenRenderTarget@@UEAAXXZ @ 0x1802275B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall COffScreenRenderTarget::ForceFullDirty(COffScreenRenderTarget *this)
{
  CTargetDirtyBase<8>::SetFullDirty((__int64)this + 224);
}

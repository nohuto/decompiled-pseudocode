/*
 * XREFs of ?ForceFullDirty@CDDARenderTarget@@UEAAXXZ @ 0x1802895E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDDARenderTarget::ForceFullDirty(CDDARenderTarget *this)
{
  CTargetDirtyBase<8>::SetFullDirty((__int64)this + 384);
}

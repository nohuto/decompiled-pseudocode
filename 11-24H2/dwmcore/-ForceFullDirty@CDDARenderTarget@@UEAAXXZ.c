/*
 * XREFs of ?ForceFullDirty@CDDARenderTarget@@UEAAXXZ @ 0x18027E5C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDDARenderTarget::ForceFullDirty(CDDARenderTarget *this)
{
  CTargetDirtyBase<8>::SetFullDirty((__int64)this + 384);
}

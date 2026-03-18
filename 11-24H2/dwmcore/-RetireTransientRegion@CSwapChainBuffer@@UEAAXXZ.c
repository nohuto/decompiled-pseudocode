/*
 * XREFs of ?RetireTransientRegion@CSwapChainBuffer@@UEAAXXZ @ 0x180201240
 * Callers:
 *     <none>
 * Callees:
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x18003DB90 (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 */

void __fastcall CSwapChainBuffer::RetireTransientRegion(const struct FastRegion::Internal::CRgnData **this)
{
  _DWORD **v1; // rbx

  v1 = (_DWORD **)(this + 15);
  CRegion::Union(this + 4, this + 15);
  **v1 = 0;
}

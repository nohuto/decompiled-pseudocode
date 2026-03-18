/*
 * XREFs of ?AddTransientRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z @ 0x1801DC170
 * Callers:
 *     <none>
 * Callees:
 *     ?Intersect@CRegion@@QEAAXAEBV1@@Z @ 0x18003023C (-Intersect@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x18003DB90 (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x1801DC1EC (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

void __fastcall CSwapChainBuffer::AddTransientRegion(
        const struct FastRegion::Internal::CRgnData **this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  FastRegion::CRegion *v4[10]; // [rsp+20h] [rbp-68h] BYREF

  CRegion::CRegion((CRegion *)v4, (const struct MilRectU *)(this + 2));
  CRegion::Intersect(v4, a2);
  CRegion::Union(this + 15, v4);
  FastRegion::CRegion::FreeMemory(v4);
}

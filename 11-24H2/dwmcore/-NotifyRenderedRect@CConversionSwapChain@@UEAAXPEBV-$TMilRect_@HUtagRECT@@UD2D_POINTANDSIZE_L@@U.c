/*
 * XREFs of ?NotifyRenderedRect@CConversionSwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180096BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x18003DB90 (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z @ 0x18003DE60 (-SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800984C0 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CConversionSwapChain::NotifyRenderedRect(__int64 a1, const struct tagRECT *a2)
{
  int v4[4]; // [rsp+30h] [rbp-78h] BYREF
  FastRegion::CRegion *v5[10]; // [rsp+40h] [rbp-68h] BYREF

  (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 272) + 88LL))(*(_QWORD *)(a1 + 272), v4);
  if ( a2 )
  {
    FastRegion::CRegion::CRegion((FastRegion::CRegion *)v5, a2);
    CRegion::Union((const struct FastRegion::Internal::CRgnData **)(a1 + 776), v5);
    FastRegion::CRegion::FreeMemory(v5);
  }
  else
  {
    FastRegion::CRegion::SetRectangle((FastRegion::CRegion *)(a1 + 776), 0, 0, v4[0], v4[1]);
  }
}

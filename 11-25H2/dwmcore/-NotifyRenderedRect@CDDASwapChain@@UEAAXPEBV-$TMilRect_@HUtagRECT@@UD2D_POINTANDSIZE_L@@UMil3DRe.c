/*
 * XREFs of ?NotifyRenderedRect@CDDASwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800C60A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x1800996C0 (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z @ 0x180099990 (-SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800C6230 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?GetSize@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D6D30 (-GetSize@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDDASwapChain::NotifyRenderedRect(__int64 a1, const struct tagRECT *a2)
{
  __int64 v4; // rcx
  void (__fastcall *v5)(__int64, int *); // rax
  int v6[4]; // [rsp+30h] [rbp-78h] BYREF
  FastRegion::CRegion *v7[10]; // [rsp+40h] [rbp-68h] BYREF

  v4 = *(_QWORD *)(a1 + 64);
  v5 = *(void (__fastcall **)(__int64, int *))(*(_QWORD *)v4 + 88LL);
  if ( (char *)v5 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize )
    IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(v4, v6);
  else
    v5(v4, v6);
  if ( a2 )
  {
    FastRegion::CRegion::CRegion((FastRegion::CRegion *)v7, a2);
    CRegion::Union((const struct FastRegion::Internal::CRgnData **)(a1 + 112), v7);
    FastRegion::CRegion::FreeMemory(v7);
  }
  else
  {
    FastRegion::CRegion::SetRectangle((FastRegion::CRegion *)(a1 + 112), 0, 0, v6[0], v6[1]);
  }
}

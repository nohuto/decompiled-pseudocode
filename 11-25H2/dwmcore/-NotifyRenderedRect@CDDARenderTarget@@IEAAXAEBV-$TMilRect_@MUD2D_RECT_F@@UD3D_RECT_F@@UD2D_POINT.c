/*
 * XREFs of ?NotifyRenderedRect@CDDARenderTarget@@IEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C615C
 * Callers:
 *     ?Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800C7228 (-Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x1800996C0 (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x180099B50 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800C6230 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?GetSize@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D6D30 (-GetSize@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDDARenderTarget::NotifyRenderedRect(__int64 a1, const struct D2D_RECT_F *a2, double a3)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  void (__fastcall *v6)(__int64, __int128 *); // rax
  struct tagRECT v7; // [rsp+20h] [rbp-88h] BYREF
  __int128 v8; // [rsp+30h] [rbp-78h] BYREF
  FastRegion::CRegion *v9[10]; // [rsp+40h] [rbp-68h] BYREF

  v8 = 0LL;
  CMILMatrix::Transform2DBoundsHelper<0>(a1 + 268, a2, (float *)&v8);
  PixelAlign(&v7.left, (unsigned int *)&v8, a3);
  v4 = *(_QWORD *)(a1 + 176);
  v5 = *(_QWORD *)(v4 + 64);
  v6 = *(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v5 + 88LL);
  if ( (char *)v6 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize )
    IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(v5, &v8);
  else
    v6(v5, &v8);
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v9, &v7);
  CRegion::Union((const struct FastRegion::Internal::CRgnData **)(v4 + 112), v9);
  FastRegion::CRegion::FreeMemory(v9);
  *(_BYTE *)(a1 + 2800) = 1;
}

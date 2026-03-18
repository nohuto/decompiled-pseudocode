/*
 * XREFs of ?AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z @ 0x1802D70A0
 * Callers:
 *     ?AddDirtyRegion@CGDISubSectionBitmapRealization@@GBDI@EAAXAEBVCRegion@@@Z @ 0x1802D7170 (-AddDirtyRegion@CGDISubSectionBitmapRealization@@GBDI@EAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ?Intersect@CRegion@@QEAAXAEBV1@@Z @ 0x18003023C (-Intersect@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Copy@CRegion@@QEAAXAEBV1@@Z @ 0x180146AC0 (-Copy@CRegion@@QEAAXAEBV1@@Z.c)
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x1801DC1EC (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     ?AddDirtyRegion@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@UEAAXAEBVCRegion@@@Z @ 0x1801F7080 (-AddDirtyRegion@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?Offset@CRgnData@Internal@FastRegion@@QEAA_NHH@Z @ 0x180259048 (-Offset@CRgnData@Internal@FastRegion@@QEAA_NHH@Z.c)
 */

void __fastcall CGDISubSectionBitmapRealization::AddDirtyRegion(
        CGDISubSectionBitmapRealization *this,
        FastRegion::CRegion **a2)
{
  FastRegion::Internal::CRgnData *v3; // [rsp+20h] [rbp-59h] BYREF
  int v4; // [rsp+28h] [rbp-51h] BYREF
  FastRegion::CRegion *v5[10]; // [rsp+70h] [rbp-9h] BYREF

  v4 = 0;
  v3 = (FastRegion::Internal::CRgnData *)&v4;
  CRegion::Copy(&v3, a2);
  CRegion::CRegion((CRegion *)v5, (CGDISubSectionBitmapRealization *)((char *)this + 336));
  CRegion::Intersect(&v3, v5);
  if ( *(_DWORD *)v3 )
  {
    FastRegion::Internal::CRgnData::Offset(v3, -*((_DWORD *)this + 84), -*((_DWORD *)this + 85));
    if ( *(_DWORD *)v3 )
      IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::AddDirtyRegion((__int64)this, &v3);
  }
  FastRegion::CRegion::FreeMemory(v5);
  FastRegion::CRegion::FreeMemory(&v3);
}

/*
 * XREFs of ?AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z @ 0x1802E0340
 * Callers:
 *     ?AddDirtyRegion@CGDISubSectionBitmapRealization@@GBDI@EAAXAEBVCRegion@@@Z @ 0x1802E0410 (-AddDirtyRegion@CGDISubSectionBitmapRealization@@GBDI@EAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Intersect@CRegion@@QEAAXAEBV1@@Z @ 0x180105B10 (-Intersect@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?Copy@CRegion@@QEAAXAEBV1@@Z @ 0x180173370 (-Copy@CRegion@@QEAAXAEBV1@@Z.c)
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x1801E777C (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     ?AddDirtyRegion@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@UEAAXAEBVCRegion@@@Z @ 0x180202FF0 (-AddDirtyRegion@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?Offset@CRgnData@Internal@FastRegion@@QEAA_NHH@Z @ 0x180263F88 (-Offset@CRgnData@Internal@FastRegion@@QEAA_NHH@Z.c)
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

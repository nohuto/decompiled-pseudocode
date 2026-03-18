/*
 * XREFs of ?RecordBitmapRealizationInfo@CDrawingContext@@QEAAJPEAVIBitmapRealization@@@Z @ 0x1801A3C50
 * Callers:
 *     ?DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x1801A3520 (-DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::RecordBitmapRealizationInfo(
        CDrawingContext *this,
        struct IBitmapRealization *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 (__fastcall *v4)(CCachedImageProducer *, struct CDrawingContext *); // r8

  v4 = *(__int64 (__fastcall **)(CCachedImageProducer *, struct CDrawingContext *))(*(_QWORD *)a2 + 88LL);
  if ( (char *)v4 == (char *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::RecordUse )
    return IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::RecordUse(a2, this, v4, a4);
  if ( v4 == CCachedImageProducer::RecordUse )
    return CCachedImageProducer::RecordUse(a2, this);
  if ( (char *)v4 == (char *)IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::RecordUse )
    return IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::RecordUse(a2, this, v4, a4);
  return v4(a2, this);
}

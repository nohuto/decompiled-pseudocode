/*
 * XREFs of ?RecordUse@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EAAJPEAVCDrawingContext@@@Z @ 0x1802D98C0
 * Callers:
 *     ?UpdateBitmaps@CCommonRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z @ 0x18001C3B0 (-UpdateBitmaps@CCommonRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?UpdateBitmaps@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z @ 0x180146CD0 (-UpdateBitmaps@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RecordBitmapRealizationInfo@CDrawingContext@@QEAAJPEAVIBitmapRealization@@@Z @ 0x1801A3C50 (-RecordBitmapRealizationInfo@CDrawingContext@@QEAAJPEAVIBitmapRealization@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::RecordUse(
        __int64 a1,
        __int64 a2)
{
  return IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::RecordUse(
           (CDxHandleYUVBitmapRealization *)(a1 - 320),
           a2);
}

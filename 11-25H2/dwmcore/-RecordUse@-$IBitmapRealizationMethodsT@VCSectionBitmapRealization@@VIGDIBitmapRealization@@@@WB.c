/*
 * XREFs of ?RecordUse@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WBDI@EAAJPEAVCDrawingContext@@@Z @ 0x1802E0130
 * Callers:
 *     ?UpdateBitmaps@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z @ 0x180084920 (-UpdateBitmaps@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?UpdateBitmaps@CCommonRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800B13B0 (-UpdateBitmaps@CCommonRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RecordBitmapRealizationInfo@CDrawingContext@@QEAAJPEAVIBitmapRealization@@@Z @ 0x180116460 (-RecordBitmapRealizationInfo@CDrawingContext@@QEAAJPEAVIBitmapRealization@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::RecordUse(
        __int64 a1,
        __int64 a2)
{
  return IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::RecordUse(
           (CDxHandleYUVBitmapRealization *)(a1 - 312),
           a2);
}

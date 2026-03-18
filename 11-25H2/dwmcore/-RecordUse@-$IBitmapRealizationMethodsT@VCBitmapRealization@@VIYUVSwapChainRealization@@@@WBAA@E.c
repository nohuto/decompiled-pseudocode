/*
 * XREFs of ?RecordUse@?$IBitmapRealizationMethodsT@VCBitmapRealization@@VIYUVSwapChainRealization@@@@WBAA@EAAJPEAVCDrawingContext@@@Z @ 0x1802E13E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IBitmapRealizationMethodsT<CBitmapRealization,IYUVSwapChainRealization>::RecordUse(
        __int64 a1,
        __int64 a2)
{
  return IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::RecordUse(
           (CDxHandleYUVBitmapRealization *)(a1 - 256),
           a2);
}

/*
 * XREFs of ?AddDirtyRegion@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EAAXAEBVCRegion@@@Z @ 0x1802D9690
 * Callers:
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x18002F954 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::AddDirtyRegion(
        __int64 a1,
        const struct FastRegion::Internal::CRgnData **a2)
{
  IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::AddDirtyRegion(a1 - 320, a2);
}

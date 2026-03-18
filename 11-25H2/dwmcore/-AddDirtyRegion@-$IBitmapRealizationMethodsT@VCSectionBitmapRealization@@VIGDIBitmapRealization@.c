/*
 * XREFs of ?AddDirtyRegion@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WBDI@EAAXAEBVCRegion@@@Z @ 0x1802DFDF0
 * Callers:
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x180105228 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::AddDirtyRegion(
        __int64 a1,
        const struct FastRegion::Internal::CRgnData **a2)
{
  IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::AddDirtyRegion(a1 - 312, a2);
}

/*
 * XREFs of ?GetD2DBitmap@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802E2970
 * Callers:
 *     ?GetD2DBitmap@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802E2980 (-GetD2DBitmap@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmap_ea_1802E2980.c)
 *     ?GetD2DBitmap@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802E29A0 (-GetD2DBitmap@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmap_ea_1802E29A0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetD2DBitmap(
        CDxHandleBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        char a4)
{
  return CDxHandleBitmapRealization::GetD2DBitmap(this, a2, a3, a4);
}

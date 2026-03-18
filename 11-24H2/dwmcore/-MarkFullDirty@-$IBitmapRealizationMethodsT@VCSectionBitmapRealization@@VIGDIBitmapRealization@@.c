/*
 * XREFs of ?MarkFullDirty@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@UEAAXXZ @ 0x1801F70B0
 * Callers:
 *     ?MarkFullDirty@CDxHandleYUVBitmapRealization@@UEAAXXZ @ 0x180027F00 (-MarkFullDirty@CDxHandleYUVBitmapRealization@@UEAAXXZ.c)
 *     ?MarkFullDirty@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXXZ @ 0x1801A3FA0 (-MarkFullDirty@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXXZ.c)
 *     ?MarkFullDirty@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@UEAAXXZ @ 0x1802107A0 (-MarkFullDirty@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@.c)
 *     ?MarkFullDirty@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WBDI@EAAXXZ @ 0x1802D6DE0 (-MarkFullDirty@-$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmap_ea_1802D6DE0.c)
 *     ?MarkFullDirty@?$IBitmapRealizationMethodsT@VCBitmapRealization@@VISwapChainRealization@@@@WBAA@EAAXXZ @ 0x1802D8010 (-MarkFullDirty@-$IBitmapRealizationMethodsT@VCBitmapRealization@@VISwapChainRealization@@@@WBAA@.c)
 *     ?MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ @ 0x1802D8E60 (-MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::MarkFullDirty(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 208);
  if ( v1 )
    *(_BYTE *)(v1 + 136) = 0;
  CD2DBitmapCache::MarkFullInvalid((CD2DBitmapCache *)(a1 - 80));
}

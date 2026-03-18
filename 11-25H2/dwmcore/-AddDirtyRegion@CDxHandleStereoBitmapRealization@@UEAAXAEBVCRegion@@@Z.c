/*
 * XREFs of ?AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x1802E1D00
 * Callers:
 *     ?AddDirtyRegion@CDxHandleStereoBitmapRealization@@WBAA@EAAXAEBVCRegion@@@Z @ 0x1802E1D40 (-AddDirtyRegion@CDxHandleStereoBitmapRealization@@WBAA@EAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ?AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z @ 0x180061260 (-AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@UEAAXAEBVCRegion@@@Z @ 0x180202FF0 (-AddDirtyRegion@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization.c)
 */

void __fastcall CDxHandleStereoBitmapRealization::AddDirtyRegion(
        CD2DBitmapCache **this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::AddDirtyRegion((__int64)this, a2);
  if ( this[40] )
    CD2DBitmapCache::AddInvalidRegion(this[41], a2);
}

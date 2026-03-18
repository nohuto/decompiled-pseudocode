/*
 * XREFs of ?MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ @ 0x1802E2100
 * Callers:
 *     ?MarkFullDirty@CDxHandleStereoBitmapRealization@@WBAA@EAAXXZ @ 0x1802E2140 (-MarkFullDirty@CDxHandleStereoBitmapRealization@@WBAA@EAAXXZ.c)
 * Callees:
 *     ?MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ @ 0x180041C44 (-MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ.c)
 *     ?MarkFullDirty@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@UEAAXXZ @ 0x180203020 (-MarkFullDirty@-$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@.c)
 */

void __fastcall CDxHandleStereoBitmapRealization::MarkFullDirty(CD2DBitmapCache **this)
{
  IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::MarkFullDirty((__int64)this);
  if ( this[40] )
    CD2DBitmapCache::MarkFullInvalid(this[41]);
}

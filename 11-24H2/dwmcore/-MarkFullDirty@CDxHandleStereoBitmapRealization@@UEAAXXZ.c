/*
 * XREFs of ?MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ @ 0x1802D8E60
 * Callers:
 *     ?MarkFullDirty@CDxHandleStereoBitmapRealization@@WBAA@EAAXXZ @ 0x1802D8EA0 (-MarkFullDirty@CDxHandleStereoBitmapRealization@@WBAA@EAAXXZ.c)
 * Callees:
 *     ?MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ @ 0x18005A2D4 (-MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ.c)
 *     ?MarkFullDirty@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@UEAAXXZ @ 0x1801F70B0 (-MarkFullDirty@-$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@.c)
 */

void __fastcall CDxHandleStereoBitmapRealization::MarkFullDirty(CD2DBitmapCache **this)
{
  IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::MarkFullDirty((__int64)this);
  if ( this[40] )
    CD2DBitmapCache::MarkFullInvalid(this[41]);
}

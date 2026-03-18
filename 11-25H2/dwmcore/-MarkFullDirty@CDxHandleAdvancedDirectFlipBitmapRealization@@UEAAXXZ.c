/*
 * XREFs of ?MarkFullDirty@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXXZ @ 0x18021E570
 * Callers:
 *     ?MarkFullDirty@CDxHandleAdvancedDirectFlipBitmapRealization@@WBAA@EAAXXZ @ 0x1802E12D0 (-MarkFullDirty@CDxHandleAdvancedDirectFlipBitmapRealization@@WBAA@EAAXXZ.c)
 * Callees:
 *     ?ResetOverdrawRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAXXZ @ 0x18021E598 (-ResetOverdrawRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAXXZ.c)
 */

void __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::MarkFullDirty(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  CDxHandleAdvancedDirectFlipBitmapRealization::ResetOverdrawRegion((CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this - 80));
  IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::MarkFullDirty((__int64)this);
}

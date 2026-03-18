/*
 * XREFs of ?AddDirtyRegion@CDxHandleStereoBitmapRealization@@WBAA@EAAXAEBVCRegion@@@Z @ 0x1802E1D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDxHandleStereoBitmapRealization::AddDirtyRegion(
        __int64 a1,
        const struct FastRegion::Internal::CRgnData **a2)
{
  CDxHandleStereoBitmapRealization::AddDirtyRegion((CD2DBitmapCache **)(a1 - 256), a2);
}

/*
 * XREFs of ?AddDirtyRegion@CDxHandleYUVBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x18024CE60
 * Callers:
 *     ?AddDirtyRegion@CDxHandleYUVBitmapRealization@@WBAA@EAAXAEBVCRegion@@@Z @ 0x1802D9080 (-AddDirtyRegion@CDxHandleYUVBitmapRealization@@WBAA@EAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CDxHandleYUVBitmapRealization::AddDirtyRegion(
        CDxHandleYUVBitmapRealization *this,
        const struct CRegion *a2)
{
  CDxHandleYUVBitmapRealization::MarkFullDirty(this);
}

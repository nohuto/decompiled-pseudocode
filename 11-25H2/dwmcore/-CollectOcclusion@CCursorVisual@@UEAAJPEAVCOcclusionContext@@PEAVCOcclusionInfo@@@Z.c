/*
 * XREFs of ?CollectOcclusion@CCursorVisual@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180299E10
 * Callers:
 *     <none>
 * Callees:
 *     ?CollectCursor@COcclusionContext@@QEAAXPEAVCCursorVisual@@@Z @ 0x180285950 (-CollectCursor@COcclusionContext@@QEAAXPEAVCCursorVisual@@@Z.c)
 *     ?HasVisibleCursor@CCursorVisual@@UEBA_NXZ @ 0x18029A7E0 (-HasVisibleCursor@CCursorVisual@@UEBA_NXZ.c)
 */

__int64 __fastcall CCursorVisual::CollectOcclusion(
        CCursorVisual *this,
        struct COcclusionContext *a2,
        struct COcclusionInfo *a3)
{
  if ( *((_BYTE *)a2 + 1566)
    && *((_BYTE *)this + 688)
    && !*((_BYTE *)this + 689)
    && CCursorVisual::HasVisibleCursor(this) )
  {
    COcclusionContext::CollectCursor(a2, this);
  }
  return 0LL;
}

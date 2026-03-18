/*
 * XREFs of ?CollectOcclusion@CCursorVisual@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18028FC30
 * Callers:
 *     <none>
 * Callees:
 *     ?CollectCursor@COcclusionContext@@QEAAXPEAVCCursorVisual@@@Z @ 0x18027ACF0 (-CollectCursor@COcclusionContext@@QEAAXPEAVCCursorVisual@@@Z.c)
 */

__int64 __fastcall CCursorVisual::CollectOcclusion(
        CCursorVisual *this,
        struct COcclusionContext *a2,
        struct COcclusionInfo *a3)
{
  if ( *((_BYTE *)this + 696) && *((_QWORD *)this + 88) )
    COcclusionContext::CollectCursor(a2, this);
  return 0LL;
}

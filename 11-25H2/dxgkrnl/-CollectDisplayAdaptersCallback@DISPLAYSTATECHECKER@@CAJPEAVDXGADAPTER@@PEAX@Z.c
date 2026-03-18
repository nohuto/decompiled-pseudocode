/*
 * XREFs of ?CollectDisplayAdaptersCallback@DISPLAYSTATECHECKER@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1401BCE90
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDisplayAdapter@DISPLAYSTATECHECKER@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1401BBE5C (-AddDisplayAdapter@DISPLAYSTATECHECKER@@AEAAJPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DISPLAYSTATECHECKER::CollectDisplayAdaptersCallback(
        struct DXGADAPTER *a1,
        DISPLAYSTATECHECKER *this)
{
  return DISPLAYSTATECHECKER::AddDisplayAdapter(this, a1);
}

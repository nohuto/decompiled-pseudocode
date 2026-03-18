/*
 * XREFs of ?GetDirtyRects@CConversionSwapChain@@UEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18022E290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConversionSwapChain::GetDirtyRects(__int64 a1, const void **a2)
{
  return CRegion::GetRectangles((int **)(a1 + 776), a2);
}

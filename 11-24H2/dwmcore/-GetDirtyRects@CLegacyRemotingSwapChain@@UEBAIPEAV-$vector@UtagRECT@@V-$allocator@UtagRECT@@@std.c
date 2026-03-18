/*
 * XREFs of ?GetDirtyRects@CLegacyRemotingSwapChain@@UEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1802C84B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRemotingSwapChain::GetDirtyRects(__int64 a1, const void **a2)
{
  return CRegion::GetRectangles((int **)(a1 + 112), a2);
}

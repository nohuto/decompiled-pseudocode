/*
 * XREFs of ?GetLastIndependentFlipState@CGlobalCompositionSurfaceInfo@@UEBA?AW4IndependentFlipState@@XZ @ 0x1800988E0
 * Callers:
 *     ?DbgSaveOverlayStateInfoBefore@COverlayContext@@AEAAXXZ @ 0x180098540 (-DbgSaveOverlayStateInfoBefore@COverlayContext@@AEAAXXZ.c)
 *     ?DbgSaveOverlayStateInfoAfter@COverlayContext@@AEAAXXZ @ 0x18009877C (-DbgSaveOverlayStateInfoAfter@COverlayContext@@AEAAXXZ.c)
 *     ?PresentNeeded@CDirectFlipInfo@@QEBA_NXZ @ 0x180098DF4 (-PresentNeeded@CDirectFlipInfo@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::GetLastIndependentFlipState(__int64 a1)
{
  return *(unsigned int *)(a1 + 288);
}

/*
 * XREFs of ?GetLastIndependentFlipState@CGlobalCompositionSurfaceInfo@@UEBA?AW4IndependentFlipState@@XZ @ 0x1800C6650
 * Callers:
 *     ?DbgSaveOverlayStateInfoBefore@COverlayContext@@AEAAXXZ @ 0x1800C62B0 (-DbgSaveOverlayStateInfoBefore@COverlayContext@@AEAAXXZ.c)
 *     ?DbgSaveOverlayStateInfoAfter@COverlayContext@@AEAAXXZ @ 0x1800C64EC (-DbgSaveOverlayStateInfoAfter@COverlayContext@@AEAAXXZ.c)
 *     ?PresentNeeded@CDirectFlipInfo@@QEBA_NXZ @ 0x1800C6B64 (-PresentNeeded@CDirectFlipInfo@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::GetLastIndependentFlipState(__int64 a1)
{
  return *(unsigned int *)(a1 + 288);
}

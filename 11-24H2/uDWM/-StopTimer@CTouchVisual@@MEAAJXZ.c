/*
 * XREFs of ?StopTimer@CTouchVisual@@MEAAJXZ @ 0x180012170
 * Callers:
 *     ?StopTimer@CContactStationaryVisual@@MEAAJXZ @ 0x180011FE0 (-StopTimer@CContactStationaryVisual@@MEAAJXZ.c)
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x1800120E0 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?StopTimer@CTouchDragVisual@@MEAAJXZ @ 0x18009B330 (-StopTimer@CTouchDragVisual@@MEAAJXZ.c)
 *     ?StopTimer@CFlickVisual@@MEAAJXZ @ 0x1800C3140 (-StopTimer@CFlickVisual@@MEAAJXZ.c)
 *     ?StopTimer@CIndirectTouchVisual@@MEAAJXZ @ 0x1800C76C0 (-StopTimer@CIndirectTouchVisual@@MEAAJXZ.c)
 *     ?StopTimer@CPenPressHoldVisual@@MEAAJXZ @ 0x1800CA270 (-StopTimer@CPenPressHoldVisual@@MEAAJXZ.c)
 *     ?StopTimer@CPressTapVisual@@MEAAJXZ @ 0x1800CA9E0 (-StopTimer@CPressTapVisual@@MEAAJXZ.c)
 *     ?StopTimer@CTetherVisual@@MEAAJXZ @ 0x1800D9BA0 (-StopTimer@CTetherVisual@@MEAAJXZ.c)
 *     ?StopTimer@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800DC270 (-StopTimer@CTouchPressHoldVisual@@MEAAJXZ.c)
 * Callees:
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x180012188 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CTouchVisual::StopTimer(CTouchVisual *this)
{
  CTouchVisual::UnRegisterGlobalTimer(this);
  return 0LL;
}

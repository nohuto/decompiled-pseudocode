/*
 * XREFs of ?Initialize@CTouchVisual@@MEAAJXZ @ 0x18000C560
 * Callers:
 *     ?Initialize@CTouchDragVisual@@MEAAJXZ @ 0x18000C2F0 (-Initialize@CTouchDragVisual@@MEAAJXZ.c)
 *     ?Initialize@CDirectTouchVisual@@MEAAJXZ @ 0x18000C390 (-Initialize@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJXZ @ 0x180086150 (-Initialize@CPenBarrelKeyVisual@@MEAAJXZ.c)
 *     ?Initialize@CContactStationaryVisual@@MEAAJXZ @ 0x18008A780 (-Initialize@CContactStationaryVisual@@MEAAJXZ.c)
 *     ?Initialize@CFlickVisual@@MEAAJXZ @ 0x1800C3070 (-Initialize@CFlickVisual@@MEAAJXZ.c)
 *     ?Initialize@CIndirectTouchVisual@@MEAAJXZ @ 0x1800C6F40 (-Initialize@CIndirectTouchVisual@@MEAAJXZ.c)
 *     ?Initialize@CPenPressHoldVisual@@MEAAJXZ @ 0x1800C9FC0 (-Initialize@CPenPressHoldVisual@@MEAAJXZ.c)
 *     ?Initialize@CPressTapVisual@@MEAAJXZ @ 0x1800CA440 (-Initialize@CPressTapVisual@@MEAAJXZ.c)
 *     ?Initialize@CTetherVisual@@MEAAJXZ @ 0x1800D9890 (-Initialize@CTetherVisual@@MEAAJXZ.c)
 *     ?Initialize@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800DBCB0 (-Initialize@CTouchPressHoldVisual@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CTouchVisual::Initialize(CTouchVisual *this)
{
  return CContainerVisual::Initialize(this);
}

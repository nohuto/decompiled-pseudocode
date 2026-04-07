/*
 * XREFs of ?StopTimer@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800DC270
 * Callers:
 *     ?Stop@CTouchPressHoldVisual@@UEAAXXZ @ 0x1800DC1D0 (-Stop@CTouchPressHoldVisual@@UEAAXXZ.c)
 *     ?UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800DC290 (-UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ.c)
 * Callees:
 *     ?StopAllTimelines@CTouchPressHoldVisual@@IEAAXXZ @ 0x1800DC208 (-StopAllTimelines@CTouchPressHoldVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CTouchPressHoldVisual::StopTimer(CTimelineBase **this)
{
  CTouchVisual *v1; // r9

  CTouchPressHoldVisual::StopAllTimelines(this);
  return CTouchVisual::StopTimer(v1);
}

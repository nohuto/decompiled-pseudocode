/*
 * XREFs of ?StopTimer@CTouchDragVisual@@MEAAJXZ @ 0x18009B330
 * Callers:
 *     ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x18007E550 (-Stop@CTouchDragVisual@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CTouchDragVisual::StopTimer(CTouchDragVisual *this)
{
  return CTouchVisual::StopTimer(this);
}

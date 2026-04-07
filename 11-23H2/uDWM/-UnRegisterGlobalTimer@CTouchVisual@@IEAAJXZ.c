/*
 * XREFs of ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x180021E9C
 * Callers:
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x180053F40 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?StopTimer@CContactStationaryVisual@@MEAAJXZ @ 0x1800B2BE0 (-StopTimer@CContactStationaryVisual@@MEAAJXZ.c)
 *     ?StopTimer@CFlickVisual@@MEAAJXZ @ 0x1800C0080 (-StopTimer@CFlickVisual@@MEAAJXZ.c)
 *     ?Stop@CIndirectTouchVisual@@UEAAXXZ @ 0x1800C5860 (-Stop@CIndirectTouchVisual@@UEAAXXZ.c)
 *     ?StopTimer@CIndirectTouchVisual@@MEAAJXZ @ 0x1800C5960 (-StopTimer@CIndirectTouchVisual@@MEAAJXZ.c)
 *     ?UpdateTransition@CIndirectTouchVisual@@MEAAJXZ @ 0x1800C5A30 (-UpdateTransition@CIndirectTouchVisual@@MEAAJXZ.c)
 *     ?StopTimer@CPenPressHoldVisual@@MEAAJXZ @ 0x1800CD220 (-StopTimer@CPenPressHoldVisual@@MEAAJXZ.c)
 *     ?StopTimer@CPressTapVisual@@MEAAJXZ @ 0x1800CD9B0 (-StopTimer@CPressTapVisual@@MEAAJXZ.c)
 *     ?StopDelayTimer@CTetherVisual@@IEAAXXZ @ 0x1800E3BFC (-StopDelayTimer@CTetherVisual@@IEAAXXZ.c)
 *     ?StopTimer@CTetherVisual@@MEAAJXZ @ 0x1800E3C50 (-StopTimer@CTetherVisual@@MEAAJXZ.c)
 *     ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x1800E7970 (-Stop@CTouchDragVisual@@UEAAXXZ.c)
 *     ?StopTimer@CTouchDragVisual@@MEAAJXZ @ 0x1800E79F0 (-StopTimer@CTouchDragVisual@@MEAAJXZ.c)
 *     ?Stop@CTouchPressHoldVisual@@UEAAXXZ @ 0x1800E8C70 (-Stop@CTouchPressHoldVisual@@UEAAXXZ.c)
 *     ?StopTimer@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800E8D40 (-StopTimer@CTouchPressHoldVisual@@MEAAJXZ.c)
 *     ?UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800E93B0 (-UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18005007C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CTouchVisual::UnRegisterGlobalTimer(CTouchVisual *this)
{
  if ( *((_BYTE *)this + 288) )
  {
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    *((_BYTE *)this + 288) = 0;
  }
  return 0LL;
}

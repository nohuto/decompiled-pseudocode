/*
 * XREFs of ?SetCompSyncHandle@CTabSwitch@@UEAAXPEAX@Z @ 0x1800D3AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopWindowTrackingForStoryboard@CAnimationScheduler@@QEAAXPEBVCStoryboard@@@Z @ 0x180043FC0 (-StopWindowTrackingForStoryboard@CAnimationScheduler@@QEAAXPEBVCStoryboard@@@Z.c)
 *     ?SetCommitHandle@CWindowList@@QEAAJPEAX@Z @ 0x1800F2D60 (-SetCommitHandle@CWindowList@@QEAAJPEAX@Z.c)
 */

void __fastcall CTabSwitch::SetCompSyncHandle(CTabSwitch *this, void *a2)
{
  CAnimationScheduler::StopWindowTrackingForStoryboard(
    *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23),
    this);
  CWindowList::SetCommitHandle(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), a2);
  CWindowList::ForceUpdateScene(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53));
}

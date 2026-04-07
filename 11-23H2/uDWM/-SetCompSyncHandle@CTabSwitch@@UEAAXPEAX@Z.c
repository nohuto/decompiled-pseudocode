/*
 * XREFs of ?SetCompSyncHandle@CTabSwitch@@UEAAXPEAX@Z @ 0x1800DC030
 * Callers:
 *     <none>
 * Callees:
 *     ?StopTrackingStoryboard@CWindowPropertyTracker@@QEAAXPEBVCStoryboard@@@Z @ 0x18000ACC0 (-StopTrackingStoryboard@CWindowPropertyTracker@@QEAAXPEBVCStoryboard@@@Z.c)
 *     ?SetCommitHandle@CWindowList@@QEAAJPEAX@Z @ 0x18010C35C (-SetCommitHandle@CWindowList@@QEAAJPEAX@Z.c)
 */

void __fastcall CTabSwitch::SetCompSyncHandle(CTabSwitch *this, void *a2)
{
  CWindowPropertyTracker::StopTrackingStoryboard(
    (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
    this);
  CWindowList::SetCommitHandle(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54), a2);
  CWindowList::ForceUpdateScene(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54));
}

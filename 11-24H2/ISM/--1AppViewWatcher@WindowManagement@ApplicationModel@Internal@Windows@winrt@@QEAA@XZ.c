/*
 * XREFs of ??1AppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x180082A00
 * Callers:
 *     _DWMInputRouter::UpdateFocusedInputTarget_::_1_::dtor$14 @ 0x1801CFC64 (_DWMInputRouter--UpdateFocusedInputTarget_--_1_--dtor$14.c)
 *     _ViewHierarchyWithWindowManager::GetAllAncestors_::_1_::dtor$1 @ 0x1801D0BB4 (_ViewHierarchyWithWindowManager--GetAllAncestors_--_1_--dtor$1.c)
 *     _ViewHierarchyWithWindowManager::GetAllAncestors_::_1_::dtor$3 @ 0x1801D0BC6 (_ViewHierarchyWithWindowManager--GetAllAncestors_--_1_--dtor$3.c)
 *     _ViewHierarchyWithWindowManager::GetActiveViewInstanceId_::_1_::dtor$0 @ 0x1801D0BFC (_ViewHierarchyWithWindowManager--GetActiveViewInstanceId_--_1_--dtor$0.c)
 *     _ViewHelper::GetWindowIdFromViewId_::_1_::dtor$1 @ 0x1801D0C0E (_ViewHelper--GetWindowIdFromViewId_--_1_--dtor$1.c)
 *     _ViewHelper::GetWindowIdFromViewId_::_1_::dtor$2 @ 0x1801D0C3B (_ViewHelper--GetWindowIdFromViewId_--_1_--dtor$2.c)
 *     _ViewHierarchyWithWindowManager::OnWindowRemoved_::_1_::dtor$0 @ 0x1801D0C8C (_ViewHierarchyWithWindowManager--OnWindowRemoved_--_1_--dtor$0.c)
 *     _ViewHierarchyWithWindowManager::OnWindowRemoved_::_1_::dtor$1 @ 0x1801D0C9E (_ViewHierarchyWithWindowManager--OnWindowRemoved_--_1_--dtor$1.c)
 *     _ViewHierarchyWithWindowManager::OnWindowAdded_::_1_::dtor$2 @ 0x1801D0CB0 (_ViewHierarchyWithWindowManager--OnWindowAdded_--_1_--dtor$2.c)
 *     _ViewHierarchyWithWindowManager::GetAllAncestors_::_1_::dtor$4 @ 0x1801D0D40 (_ViewHierarchyWithWindowManager--GetAllAncestors_--_1_--dtor$4.c)
 *     _CUIHierarchy::OnWindowRemoved_::_1_::dtor$0 @ 0x1801D0DC6 (_CUIHierarchy--OnWindowRemoved_--_1_--dtor$0.c)
 *     _CUIHierarchy::OnWindowWatcherStopped_::_1_::dtor$1 @ 0x1801D0DD8 (_CUIHierarchy--OnWindowWatcherStopped_--_1_--dtor$1.c)
 *     _CUIHierarchy::OnUniversalPropertyChanged_::_1_::dtor$0 @ 0x1801D4529 (_CUIHierarchy--OnUniversalPropertyChanged_--_1_--dtor$0.c)
 *     _CUIHierarchy::OnWindowAdded_::_1_::dtor$5 @ 0x1801D454D (_CUIHierarchy--OnWindowAdded_--_1_--dtor$5.c)
 *     _CUIHierarchy::OnUniversalPropertyChanged_::_1_::dtor$7 @ 0x1801D455F (_CUIHierarchy--OnUniversalPropertyChanged_--_1_--dtor$7.c)
 *     _CUIHierarchy::OnWindowAdded_::_1_::dtor$0 @ 0x1801D4583 (_CUIHierarchy--OnWindowAdded_--_1_--dtor$0.c)
 *     _CUIHierarchy::OnWindowAdded_::_1_::dtor$1 @ 0x1801D4595 (_CUIHierarchy--OnWindowAdded_--_1_--dtor$1.c)
 *     _ViewHelper::GetPresentationModeFromViewId_::_1_::dtor$0 @ 0x1801D47D2 (_ViewHelper--GetPresentationModeFromViewId_--_1_--dtor$0.c)
 *     _ViewHelper::GetThreadIdFromViewId_::_1_::dtor$1 @ 0x1801D47E4 (_ViewHelper--GetThreadIdFromViewId_--_1_--dtor$1.c)
 *     _ViewHelper::GetThreadIdFromViewId_::_1_::dtor$2 @ 0x1801D4811 (_ViewHelper--GetThreadIdFromViewId_--_1_--dtor$2.c)
 *     _ViewHierarchyWithWindowManager::GetTopLevelHostView_::_1_::dtor$0 @ 0x1801D483E (_ViewHierarchyWithWindowManager--GetTopLevelHostView_--_1_--dtor$0.c)
 *     _ViewHierarchyWithWindowManager::GetTopLevelHostView_::_1_::dtor$2 @ 0x1801D4850 (_ViewHierarchyWithWindowManager--GetTopLevelHostView_--_1_--dtor$2.c)
 *     _ViewHierarchyWithWindowManager::GetActiveView_::_1_::dtor$0 @ 0x1801D6A3E (_ViewHierarchyWithWindowManager--GetActiveView_--_1_--dtor$0.c)
 *     _MPCTarget::OnUniversalPropertyChanged_::_1_::dtor$0 @ 0x1801D6C2C (_MPCTarget--OnUniversalPropertyChanged_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher::~AppViewWatcher(
        winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher *this)
{
  winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow(this);
}

/*
 * XREFs of ??1AppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x1800829E0
 * Callers:
 *     _DWMInputRouter::UpdateFocusedInputTarget_::_1_::dtor$17 @ 0x1801C87E2 (_DWMInputRouter--UpdateFocusedInputTarget_--_1_--dtor$17.c)
 *     _ViewHierarchyWithWindowManager::GetAllAncestors_::_1_::dtor$1 @ 0x1801C9714 (_ViewHierarchyWithWindowManager--GetAllAncestors_--_1_--dtor$1.c)
 *     _ViewHierarchyWithWindowManager::GetAllAncestors_::_1_::dtor$3 @ 0x1801C9726 (_ViewHierarchyWithWindowManager--GetAllAncestors_--_1_--dtor$3.c)
 *     _ViewHierarchyWithWindowManager::GetActiveViewInstanceId_::_1_::dtor$0 @ 0x1801C975C (_ViewHierarchyWithWindowManager--GetActiveViewInstanceId_--_1_--dtor$0.c)
 *     _ViewHelper::GetWindowIdFromViewId_::_1_::dtor$1 @ 0x1801C976E (_ViewHelper--GetWindowIdFromViewId_--_1_--dtor$1.c)
 *     _ViewHelper::GetWindowIdFromViewId_::_1_::dtor$2 @ 0x1801C979B (_ViewHelper--GetWindowIdFromViewId_--_1_--dtor$2.c)
 *     _ViewHierarchyWithWindowManager::OnWindowRemoved_::_1_::dtor$0 @ 0x1801C97EC (_ViewHierarchyWithWindowManager--OnWindowRemoved_--_1_--dtor$0.c)
 *     _ViewHierarchyWithWindowManager::OnWindowRemoved_::_1_::dtor$1 @ 0x1801C97FE (_ViewHierarchyWithWindowManager--OnWindowRemoved_--_1_--dtor$1.c)
 *     _ViewHierarchyWithWindowManager::OnWindowAdded_::_1_::dtor$2 @ 0x1801C9810 (_ViewHierarchyWithWindowManager--OnWindowAdded_--_1_--dtor$2.c)
 *     _ViewHierarchyWithWindowManager::GetAllAncestors_::_1_::dtor$4 @ 0x1801C98A0 (_ViewHierarchyWithWindowManager--GetAllAncestors_--_1_--dtor$4.c)
 *     _CUIHierarchy::OnWindowRemoved_::_1_::dtor$0 @ 0x1801C9926 (_CUIHierarchy--OnWindowRemoved_--_1_--dtor$0.c)
 *     _CUIHierarchy::OnWindowWatcherStopped_::_1_::dtor$1 @ 0x1801C9938 (_CUIHierarchy--OnWindowWatcherStopped_--_1_--dtor$1.c)
 *     _CUIHierarchy::OnUniversalPropertyChanged_::_1_::dtor$0 @ 0x1801CD274 (_CUIHierarchy--OnUniversalPropertyChanged_--_1_--dtor$0.c)
 *     _CUIHierarchy::OnWindowAdded_::_1_::dtor$5 @ 0x1801CD298 (_CUIHierarchy--OnWindowAdded_--_1_--dtor$5.c)
 *     _CUIHierarchy::OnUniversalPropertyChanged_::_1_::dtor$7 @ 0x1801CD2AA (_CUIHierarchy--OnUniversalPropertyChanged_--_1_--dtor$7.c)
 *     _CUIHierarchy::OnWindowAdded_::_1_::dtor$0 @ 0x1801CD2CE (_CUIHierarchy--OnWindowAdded_--_1_--dtor$0.c)
 *     _CUIHierarchy::OnWindowAdded_::_1_::dtor$1 @ 0x1801CD2E0 (_CUIHierarchy--OnWindowAdded_--_1_--dtor$1.c)
 *     _CUIHierarchy::OnWindowAdded_::_1_::dtor$6 @ 0x1801CD2F2 (_CUIHierarchy--OnWindowAdded_--_1_--dtor$6.c)
 *     _ViewHelper::GetPresentationModeFromViewId_::_1_::dtor$0 @ 0x1801CD52F (_ViewHelper--GetPresentationModeFromViewId_--_1_--dtor$0.c)
 *     _ViewHelper::GetThreadIdFromViewId_::_1_::dtor$1 @ 0x1801CD541 (_ViewHelper--GetThreadIdFromViewId_--_1_--dtor$1.c)
 *     _ViewHelper::GetThreadIdFromViewId_::_1_::dtor$2 @ 0x1801CD56E (_ViewHelper--GetThreadIdFromViewId_--_1_--dtor$2.c)
 *     _ViewHierarchyWithWindowManager::GetTopLevelHostView_::_1_::dtor$0 @ 0x1801CD59B (_ViewHierarchyWithWindowManager--GetTopLevelHostView_--_1_--dtor$0.c)
 *     _ViewHierarchyWithWindowManager::GetTopLevelHostView_::_1_::dtor$2 @ 0x1801CD5AD (_ViewHierarchyWithWindowManager--GetTopLevelHostView_--_1_--dtor$2.c)
 *     _ViewHierarchyWithWindowManager::GetActiveView_::_1_::dtor$0 @ 0x1801CF1A6 (_ViewHierarchyWithWindowManager--GetActiveView_--_1_--dtor$0.c)
 *     _MPCTarget::OnUniversalPropertyChanged_::_1_::dtor$0 @ 0x1801CF394 (_MPCTarget--OnUniversalPropertyChanged_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher::~AppViewWatcher(
        winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher *this)
{
  winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow(this);
}

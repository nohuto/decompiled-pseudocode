/*
 * XREFs of ?await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ @ 0x18023F9E8
 * Callers:
 *     CToastCenterExperienceManager::OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x1802417C0 (CToastCenterExperienceManager--OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 *     CStartExperienceManager::OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x180242070 (CStartExperienceManager--OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 *     XamlLauncher::LauncherShowRequested$_ResumeCoro$1 @ 0x18024B870 (XamlLauncher--LauncherShowRequested$_ResumeCoro$1.c)
 *     XamlLauncher::SearchDismissRequested$_ResumeCoro$1 @ 0x18024C940 (XamlLauncher--SearchDismissRequested$_ResumeCoro$1.c)
 *     XamlLauncher::SearchShowRequested$_ResumeCoro$1 @ 0x18024CCD0 (XamlLauncher--SearchShowRequested$_ResumeCoro$1.c)
 *     CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x18025AA00 (CMultitaskingViewManager--ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::ShowFlyoutAsync$_ResumeCoro$1 @ 0x180274700 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance-_ea_180274700.c)
 *     CActionCenterExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x18036D090 (CActionCenterExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     CActionCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1803702A0 (CActionCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 *     CJumpViewExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x180393BB0 (CJumpViewExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     CVirtualTouchpadExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x18039E450 (CVirtualTouchpadExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     CVirtualTouchpadExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1803A0230 (CVirtualTouchpadExperienceManager--ShowRequested$_ResumeCoro$1.c)
 *     XamlLauncher::LauncherDismissRequested$_ResumeCoro$1 @ 0x18045F620 (XamlLauncher--LauncherDismissRequested$_ResumeCoro$1.c)
 *     MultitaskingViewGestureHandler::TeardownThumbnailsAsync$_ResumeCoro$1 @ 0x18049FE10 (MultitaskingViewGestureHandler--TeardownThumbnailsAsync$_ResumeCoro$1.c)
 *     CMultitaskingViewManager::DismissRequested$_ResumeCoro$1 @ 0x1804A2A20 (CMultitaskingViewManager--DismissRequested$_ResumeCoro$1.c)
 *     CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x1804A2D20 (CMultitaskingViewManager--DismissRequestedVirtualDesktopSwitcher$_ResumeCoro$1.c)
 *     CMultitaskingViewManager::ShowRequested$_ResumeCoro$1 @ 0x1804A36D0 (CMultitaskingViewManager--ShowRequested$_ResumeCoro$1.c)
 *     CVirtualDesktopManager::SwitchContextForVDAnimation$_ResumeCoro$1 @ 0x1805570B0 (CVirtualDesktopManager--SwitchContextForVDAnimation$_ResumeCoro$1.c)
 *     TouchEdgeGripperHost::NotifyGripperDismissedIfNecessaryAsync$_ResumeCoro$1 @ 0x180595C00 (TouchEdgeGripperHost--NotifyGripperDismissedIfNecessaryAsync$_ResumeCoro$1.c)
 *     TouchEdgeGripperHost::NotifyGripperPressedAsync$_ResumeCoro$1 @ 0x180595E20 (TouchEdgeGripperHost--NotifyGripperPressedAsync$_ResumeCoro$1.c)
 *     _lambda_3415c00afb736d6d54203eb8c7c58983_$_ResumeCoro$1::operator() @ 0x18059D5D0 (_lambda_3415c00afb736d6d54203eb8c7c58983_$_ResumeCoro$1--operator().c)
 *     _lambda_190ccd1a8be9aac816201cee4203407b_$_ResumeCoro$1::operator() @ 0x1805FFA40 (_lambda_190ccd1a8be9aac816201cee4203407b_$_ResumeCoro$1--operator().c)
 *     _lambda_d6b4118795ae303e935bbd5b6ca0014f_$_ResumeCoro$1::operator() @ 0x1805FFF80 (_lambda_d6b4118795ae303e935bbd5b6ca0014f_$_ResumeCoro$1--operator().c)
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x180600D50 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 *     XamlGamingTaskViewHost::CreateGamingTaskBarViewModelAsync$_ResumeCoro$1 @ 0x18069F140 (XamlGamingTaskViewHost--CreateGamingTaskBarViewModelAsync$_ResumeCoro$1.c)
 *     VirtualDesktopSwitcherHost::DismissAsync$_ResumeCoro$1 @ 0x1806AB9A0 (VirtualDesktopSwitcherHost--DismissAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 */

void __fastcall winrt::impl::apartment_awaiter::await_resume(winrt::impl::apartment_awaiter *this)
{
  __int64 v1; // rdx
  int v2; // [rsp+20h] [rbp-28h] BYREF
  __int128 v3; // [rsp+28h] [rbp-20h]
  __int64 v4; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((unsigned int *)this + 2);
  v2 = 0;
  v3 = 0LL;
  winrt::check_hresult(&v4, v1, &v2);
}

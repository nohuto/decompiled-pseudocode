/*
 * XREFs of ??1CopyableHString@ExperienceManagerUtils@@QEAA@XZ @ 0x1801D6C20
 * Callers:
 *     _UwpWindowEventDispatcher::UwpWindowActivating_::_1_::dtor$5 @ 0x1806CAE7B (_UwpWindowEventDispatcher--UwpWindowActivating_--_1_--dtor$5.c)
 *     _UwpWindowEventDispatcher::UwpWindowActivating_::_1_::dtor$95 @ 0x1806CB067 (_UwpWindowEventDispatcher--UwpWindowActivating_--_1_--dtor$95.c)
 *     _CSingleViewShellExperience::OnEventQueued_::_1_::dtor$1 @ 0x1806CB170 (_CSingleViewShellExperience--OnEventQueued_--_1_--dtor$1.c)
 *     _CortanaDesktopExperienceView::BuildAdditionalArgsString_::_1_::dtor$13 @ 0x1806CB1A6 (_CortanaDesktopExperienceView--BuildAdditionalArgsString_--_1_--dtor$13.c)
 *     _AppViewDataSourceAdapterBase::UpdateDisplayName_::_1_::dtor$1 @ 0x1806CB2C6 (_AppViewDataSourceAdapterBase--UpdateDisplayName_--_1_--dtor$1.c)
 *     _ExperienceManagerUtils::RaiseReactivatedEvent_::_1_::dtor$1 @ 0x1806CB963 (_ExperienceManagerUtils--RaiseReactivatedEvent_--_1_--dtor$1.c)
 *     _VirtualDesktop::UpdateDesktopIndex_::_1_::dtor$0 @ 0x1806CC227 (_VirtualDesktop--UpdateDesktopIndex_--_1_--dtor$0.c)
 *     _Windows::Internal::ShellHelpers::PropertySetHelper::GetStringWithDefault_::_1_::dtor$0 @ 0x1806CD3E2 (_Windows--Internal--ShellHelpers--PropertySetHelper--GetStringWithDefault_--_1_--dtor$0.c)
 *     _KeyboardHosting::TabTipAdapter::OnInputAppPropertiesChanged_::_1_::dtor$1 @ 0x1806D0F4C (_KeyboardHosting--TabTipAdapter--OnInputAppPropertiesChanged_--_1_--dtor$1.c)
 *     _KeyboardHosting::TabTipAdapter::OnInputAppPropertiesChanged_::_1_::dtor$2 @ 0x1806D0F5E (_KeyboardHosting--TabTipAdapter--OnInputAppPropertiesChanged_--_1_--dtor$2.c)
 *     _CortanaDesktopExperienceView::OnViewEvent_::_1_::dtor$0 @ 0x1806D16E4 (_CortanaDesktopExperienceView--OnViewEvent_--_1_--dtor$0.c)
 *     _CControlCenterExperienceManager::CControlCenterExperienceManager_::_1_::dtor$9 @ 0x1806D3863 (_CControlCenterExperienceManager--CControlCenterExperienceManager_--_1_--dtor$9.c)
 *     _AppViewDataSourceAdapterBase::UpdateAppId_::_1_::dtor$1 @ 0x1806D7134 (_AppViewDataSourceAdapterBase--UpdateAppId_--_1_--dtor$1.c)
 *     _CortanaDesktopExperienceView::GetActivateArgs_::_1_::dtor$0 @ 0x1806D73F0 (_CortanaDesktopExperienceView--GetActivateArgs_--_1_--dtor$0.c)
 *     _CortanaDesktopExperienceView::BuildAdditionalArgsString_::_1_::dtor$0 @ 0x1806DE05A (_CortanaDesktopExperienceView--BuildAdditionalArgsString_--_1_--dtor$0.c)
 *     _UwpWindowEventDispatcher::UwpWindowClearPersistedStateRequested_::_1_::dtor$5 @ 0x1806DE06C (_UwpWindowEventDispatcher--UwpWindowClearPersistedStateRequested_--_1_--dtor$5.c)
 *     _UwpWindowEventDispatcher::TerminateActivityHost_::_1_::dtor$1 @ 0x1806DF508 (_UwpWindowEventDispatcher--TerminateActivityHost_--_1_--dtor$1.c)
 *     _GamingOverlayExperienceManager::LaunchUriWithForeground_::_1_::dtor$0 @ 0x1806E3432 (_GamingOverlayExperienceManager--LaunchUriWithForeground_--_1_--dtor$0.c)
 *     _GamingOverlayExperienceManager::LaunchUriWithForeground_::_1_::dtor$3 @ 0x1806E3456 (_GamingOverlayExperienceManager--LaunchUriWithForeground_--_1_--dtor$3.c)
 *     _CActionCenterExperienceManager::CActionCenterExperienceManager_::_1_::dtor$6 @ 0x1806E4687 (_CActionCenterExperienceManager--CActionCenterExperienceManager_--_1_--dtor$6.c)
 *     _XamlLauncherState::OnCortanaTransitionRequested_::_1_::dtor$1 @ 0x1806E5278 (_XamlLauncherState--OnCortanaTransitionRequested_--_1_--dtor$1.c)
 *     _PeoplePaneViewManager::IsWindowVisibleInContactPanel_::_1_::dtor$8 @ 0x1806E6EB2 (_PeoplePaneViewManager--IsWindowVisibleInContactPanel_--_1_--dtor$8.c)
 *     __lambda_6f5c8d202924fda7a69e2b5dcc1ebd4e_::operator()_::_1_::dtor$1 @ 0x1806E6EC4 (__lambda_6f5c8d202924fda7a69e2b5dcc1ebd4e_--operator()_--_1_--dtor$1.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::ReportTitleChange_::_1_::dtor$3 @ 0x1806E7E83 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewTitleChangeListener--Report_ea_1806E7E83.c)
 *     _UwpWindowEventDispatcher::EnsureDuplicateViewDestroyed_::_1_::dtor$1 @ 0x1806E8A80 (_UwpWindowEventDispatcher--EnsureDuplicateViewDestroyed_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ExperienceManagerUtils::CopyableHString::~CopyableHString(HSTRING *this)
{
  WindowsDeleteString(*this);
  *this = 0LL;
}

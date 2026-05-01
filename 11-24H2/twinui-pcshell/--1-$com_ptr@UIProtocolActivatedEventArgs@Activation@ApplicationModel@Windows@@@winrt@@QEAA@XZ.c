/*
 * XREFs of ??1?$com_ptr@UIProtocolActivatedEventArgs@Activation@ApplicationModel@Windows@@@winrt@@QEAA@XZ @ 0x18028F67C
 * Callers:
 *     _GetPinnablePidl_::_1_::dtor$0 @ 0x1806D79BB (_GetPinnablePidl_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::IsItemPinned_::_1_::dtor$6 @ 0x1806D7A0C (_winrt--Windows--Internal--Shell--implementation--PinManager--IsItemPinned_--_1_--dtor$6.c)
 *     _GetUnpackagedAppPinnableItem_::_1_::dtor$0 @ 0x1806D7A42 (_GetUnpackagedAppPinnableItem_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::GamingPostureController_::_1_::dtor$3 @ 0x1806DFF66 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806DFF66.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync$_ResumeCoro$1_::_1_::dtor$5 @ 0x1806E0CD4 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E0CD4.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync$_ResumeCoro$1_::_1_::dtor$6 @ 0x1806E0D09 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E0D09.c)
 *     _InstallWebSearchPackage_::_1_::dtor$13 @ 0x1806E66FC (_InstallWebSearchPackage_--_1_--dtor$13.c)
 *     _InstallWebSearchPackage_::_1_::dtor$16 @ 0x1806E670E (_InstallWebSearchPackage_--_1_--dtor$16.c)
 *     _InstallWebSearchPackage_::_1_::dtor$17 @ 0x1806E6720 (_InstallWebSearchPackage_--_1_--dtor$17.c)
 *     _CopilotHotkeyManager::InvokeCopilotOrCustomOption_::_1_::dtor$12 @ 0x1806E6732 (_CopilotHotkeyManager--InvokeCopilotOrCustomOption_--_1_--dtor$12.c)
 *     _VirtualDesktopController::IsRemoteDesktopDisconnecting_::_1_::dtor$4 @ 0x1806EDFD9 (_VirtualDesktopController--IsRemoteDesktopDisconnecting_--_1_--dtor$4.c)
 *     _winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler::Execute_::_1_::dtor$4 @ 0x1806F2DE7 (_winrt--Windows--Internal--Shell--implementation--LaunchRemoteDesktopUriHandler--Ex_ea_1806F2DE7.c)
 *     _TouchGestureComponent::TouchGestureComponent_::_1_::dtor$7 @ 0x1806F58F7 (_TouchGestureComponent--TouchGestureComponent_--_1_--dtor$7.c)
 *     _SnapLauncher::TryLaunchWithRegisteredAumidAndSnapId_::_1_::dtor$0 @ 0x1806F98A4 (_SnapLauncher--TryLaunchWithRegisteredAumidAndSnapId_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem__::_1_::dtor$8 @ 0x1806FC784 (_winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemA_ea_1806FC784.c)
 *     _GetPidlsFromTaskbarLayout_::_1_::dtor$6 @ 0x1806FCBB0 (_GetPidlsFromTaskbarLayout_--_1_--dtor$6.c)
 *     _GetPidlsFromTaskbarLayout_::_1_::dtor$5 @ 0x1806FCD52 (_GetPidlsFromTaskbarLayout_--_1_--dtor$5.c)
 *     _winrt::Windows::Internal::Shell::implementation::Utils::GetWallpaperImagePath_::_1_::dtor$1 @ 0x1806FD003 (_winrt--Windows--Internal--Shell--implementation--Utils--GetWallpaperImagePath_--_1_--dtor$1.c)
 *     __anonymous_namespace_::TryGetPackagedAppTileLogo_::_1_::dtor$0 @ 0x1806FD65D (__anonymous_namespace_--TryGetPackagedAppTileLogo_--_1_--dtor$0.c)
 *     __anonymous_namespace_::TryGetRequestorDisplayInformation_::_1_::dtor$5 @ 0x1806FD6ED (__anonymous_namespace_--TryGetRequestorDisplayInformation_--_1_--dtor$5.c)
 *     _CopilotHotkeyManager::LaunchCustomUriForResultsAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x180700EF3 (_CopilotHotkeyManager--LaunchCustomUriForResultsAsync$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1_::_1_::dtor$5 @ 0x1807013A5 (_CopilotHotkeyManager--TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1_--_1_--dtor$5.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028FD2C (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 */

__int64 __fastcall winrt::com_ptr<Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs>::~com_ptr<Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref(a1, a2);
  return result;
}

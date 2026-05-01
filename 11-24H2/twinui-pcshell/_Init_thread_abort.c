/*
 * XREFs of _Init_thread_abort @ 0x1802D4ED0
 * Callers:
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$0 @ 0x1806CF8B6 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$0.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$31 @ 0x1806CF9C4 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$31.c)
 *     _IsGamingOverlayExperienceManagerEnabled_::_1_::dtor$0 @ 0x1806D0F0C (_IsGamingOverlayExperienceManagerEnabled_--_1_--dtor$0.c)
 *     _AreVirtualDesktopsEnabled_::_1_::dtor$0 @ 0x1806D340F (_AreVirtualDesktopsEnabled_--_1_--dtor$0.c)
 *     _Platform::Box_Windows::Foundation::Size_::Box_Windows::Foundation::Size__::_1_::dtor$0 @ 0x1806D3FFB (_Platform--Box_Windows--Foundation--Size_--Box_Windows--Foundation--Size__--_1_--dtor$0.c)
 *     __anonymous_namespace_::IsTrustedWindowsPinProcess_::_1_::dtor$2 @ 0x1806D60B5 (__anonymous_namespace_--IsTrustedWindowsPinProcess_--_1_--dtor$2.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageUninstallEvent_::_1_::dtor$3 @ 0x1806D68D2 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--HandlePackageUninstallEvent.c)
 *     _winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::IsMiracastSupported_::_1_::dtor$0 @ 0x180700ADC (_winrt--Windows--Internal--Shell--implementation--DiscoverabilityManager--IsMiracastSupported_--.c)
 *     _CopilotHotkeyManager::CreateHiddenOwnerHwnd_::_1_::dtor$0 @ 0x180700CD3 (_CopilotHotkeyManager--CreateHiddenOwnerHwnd_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_abort(_DWORD *a1)
{
  EnterCriticalSection(&stru_1808C85A8);
  *a1 = 0;
  LeaveCriticalSection(&stru_1808C85A8);
  return Init_thread_notify();
}

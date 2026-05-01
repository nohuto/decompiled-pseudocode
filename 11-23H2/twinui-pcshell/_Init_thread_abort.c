/*
 * XREFs of _Init_thread_abort @ 0x1801C90D0
 * Callers:
 *     __lambda_120b110b9b84ba13734d7b16b46ad979_::operator()_::_1_::dtor$0 @ 0x1801F1D3A (__lambda_120b110b9b84ba13734d7b16b46ad979_--operator()_--_1_--dtor$0.c)
 *     _AreVirtualDesktopsEnabled_::_1_::dtor$0 @ 0x1802BB989 (_AreVirtualDesktopsEnabled_--_1_--dtor$0.c)
 *     _Platform::Box_Windows::Foundation::Size_::Box_Windows::Foundation::Size__::_1_::dtor$0 @ 0x1802C39FE (_Platform--Box_Windows--Foundation--Size_--Box_Windows--Foundation--Size__--_1_--dtor$0.c)
 *     _IsHoloImmersiveShellExtensionPointComponentEnabled_::_1_::dtor$0 @ 0x1802C42D8 (_IsHoloImmersiveShellExtensionPointComponentEnabled_--_1_--dtor$0.c)
 *     _IsGamingOverlayExperienceManagerEnabled_::_1_::dtor$0 @ 0x1802C442F (_IsGamingOverlayExperienceManagerEnabled_--_1_--dtor$0.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$0 @ 0x180510F4D (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$0.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$31 @ 0x180511001 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$31.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageUninstallEvent_::_1_::dtor$3 @ 0x1806F3B7F (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--HandlePackageU_ea_1806F3B7F.c)
 *     _winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::IsMiracastSupported_::_1_::dtor$0 @ 0x1806FB4ED (_winrt--Windows--Internal--Shell--implementation--DiscoverabilityManager--IsMiracastSupported_--.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_abort(_DWORD *a1)
{
  EnterCriticalSection(&stru_18098CB78);
  *a1 = 0;
  LeaveCriticalSection(&stru_18098CB78);
  return Init_thread_notify();
}

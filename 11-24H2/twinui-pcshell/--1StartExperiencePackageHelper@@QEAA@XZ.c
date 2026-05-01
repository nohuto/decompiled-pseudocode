/*
 * XREFs of ??1StartExperiencePackageHelper@@QEAA@XZ @ 0x1805CB568
 * Callers:
 *     _WidgetPlatformPackageHelper::AllowPackageInstall_::_1_::dtor$0 @ 0x1806F9BC0 (_WidgetPlatformPackageHelper--AllowPackageInstall_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1_::_1_::dtor$3 @ 0x1806FAE51 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvas_ea_1806FAE51.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1_::_1_::dtor$8 @ 0x1806FAEA9 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvas_ea_1806FAEA9.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1_::_1_::dtor$16 @ 0x1806FAF33 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvas_ea_1806FAF33.c)
 * Callees:
 *     <none>
 */

void __fastcall StartExperiencePackageHelper::~StartExperiencePackageHelper(void **this)
{
  std::wstring::_Tidy_deallocate(this + 6);
}

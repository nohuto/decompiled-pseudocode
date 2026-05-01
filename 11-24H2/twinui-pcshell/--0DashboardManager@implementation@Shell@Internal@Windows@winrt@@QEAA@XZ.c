/*
 * XREFs of ??0DashboardManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18021A1B4
 * Callers:
 *     ??0?$module_count_wrapper@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@QEAA@XZ @ 0x18021A134 (--0-$module_count_wrapper@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@detail.c)
 * Callees:
 *     ??0immersive_shell_component@winrt@@QEAA@XZ @ 0x18014A32C (--0immersive_shell_component@winrt@@QEAA@XZ.c)
 *     ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x18014A910 (--$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=12
winrt::Windows::Internal::Shell::implementation::DashboardManager *__fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::DashboardManager(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this,
        __int64 a2)
{
  RTL_SRWLOCK *v3; // rbx

  *((_QWORD *)this + 2) = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::DashboardManager,winrt::Windows::Internal::Shell::IDashboardManager>::`vftable';
  *(_QWORD *)this = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *((_QWORD *)this + 1) = &TwinUI::Cortana::ISearchAppDesktopNotifications::`vftable';
  v3 = (RTL_SRWLOCK *)((char *)this + 24);
  winrt::immersive_shell_component::immersive_shell_component(
    (winrt::Windows::Internal::Shell::implementation::DashboardManager *)((char *)this + 24),
    a2);
  *(_QWORD *)this = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::DashboardManager,IImmersiveWindowMessageNotification,void>'};
  *((_QWORD *)this + 1) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::DashboardManager,IEdgeUiTouchInvocation,void>'};
  v3->Ptr = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 4) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 5) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 7) = &winrt::Windows::Internal::Shell::implementation::DashboardManager::`vftable';
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 54) = 0;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  _Mtx_init_in_situ((winrt::Windows::Internal::Shell::implementation::DashboardManager *)((char *)this + 232), 2);
  *((_WORD *)this + 132) = 1;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  winrt::immersive_shell_component::register_service_information<_GUID const>(v3, (__int128 *)&SID_DashboardManager);
  return this;
}

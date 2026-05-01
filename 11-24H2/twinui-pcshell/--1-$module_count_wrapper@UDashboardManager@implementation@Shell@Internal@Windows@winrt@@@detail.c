/*
 * XREFs of ??1?$module_count_wrapper@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x1802C23D8
 * Callers:
 *     ??_E?$module_count_wrapper@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAAPEAXI@Z @ 0x180220810 (--_E-$module_count_wrapper@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@detai.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this)
{
  *(_QWORD *)this = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::DashboardManager,IImmersiveWindowMessageNotification,void>'};
  *((_QWORD *)this + 1) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::DashboardManager,IEdgeUiTouchInvocation,void>'};
  *((_QWORD *)this + 3) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 4) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 5) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 7) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  winrt::Windows::Internal::Shell::implementation::DashboardManager::~DashboardManager(this);
}

/*
 * XREFs of ??0?$heap_implements@V?$module_count_wrapper@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x18014A1C4
 * Callers:
 *     ??$make@V?$module_count_wrapper@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@@details@wil@@$$V@winrt@@YA?A_PXZ @ 0x18014A170 (--$make@V-$module_count_wrapper@UFocusSessionComponent@implementation@Shell@Internal@Windows@win.c)
 * Callees:
 *     ??0FocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18014A258 (--0FocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Internal::Shell::implementation::FocusSessionComponent *__fastcall winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent>>::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent>>(
        winrt::Windows::Internal::Shell::implementation::FocusSessionComponent *a1)
{
  winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::FocusSessionComponent(a1);
  *(_QWORD *)a1 = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)a1 + 1) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardTaskbarButtonSettingsManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)a1 + 2) = &winrt::Windows::Internal::Shell::implementation::CloudPCComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)a1 + 4) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)a1 + 1) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardTaskbarButtonSettingsManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)a1 + 2) = &winrt::Windows::Internal::Shell::implementation::CloudPCComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)a1 + 4) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent>>::`vftable';
  return a1;
}

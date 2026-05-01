/*
 * XREFs of ??1?$module_count_wrapper@VRdpShellExtensionHost@@@details@wil@@UEAA@XZ @ 0x1806736C0
 * Callers:
 *     ??_G?$module_count_wrapper@VRdpShellExtensionHost@@@details@wil@@UEAAPEAXI@Z @ 0x180673A80 (--_G-$module_count_wrapper@VRdpShellExtensionHost@@@details@wil@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::module_count_wrapper<RdpShellExtensionHost>::~module_count_wrapper<RdpShellExtensionHost>(
        RdpShellExtensionHost *this)
{
  *(_QWORD *)this = &wil::details::module_count_wrapper<RdpShellExtensionHost>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 1) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardTaskbarButtonSettingsManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 2) = &winrt::Windows::Internal::Shell::implementation::CloudPCComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 4) = &wil::details::module_count_wrapper<RdpShellExtensionHost>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  RdpShellExtensionHost::~RdpShellExtensionHost(this);
}

/*
 * XREFs of ??$create_and_initialize@V?$module_count_wrapper@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@@details@wil@@$$V@impl@winrt@@YAPEAV?$module_count_wrapper@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@@details@wil@@XZ @ 0x18063B584
 * Callers:
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18063B8A0 (-CreateInstance@-$wrl_factory_for_winrt_com_class@VLaunchRemoteDesktopUriHandler@implementation@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??0?$producers_base@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@V?$tuple@UIInspectable@Foundation@Windows@winrt@@UIExecuteCommand@@@std@@@impl@winrt@@QEAA@XZ @ 0x18063B71C (--0-$producers_base@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_OWORD *winrt::impl::create_and_initialize<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler>,>()
{
  _OWORD *v0; // rbx

  v0 = operator new(0x20uLL);
  *v0 = 0LL;
  v0[1] = 0LL;
  winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler,std::tuple<winrt::Windows::Foundation::IInspectable,IExecuteCommand>>::producers_base<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler,std::tuple<winrt::Windows::Foundation::IInspectable,IExecuteCommand>>(v0);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *((_QWORD *)v0 + 3) = 1LL;
  *(_QWORD *)v0 = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler>>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler,std::tuple<winrt::Windows::Foundation::IInspectable,IExecuteCommand>>'};
  *((_QWORD *)v0 + 2) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler>>::`vftable'{for `winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler,winrt::Windows::Foundation::IInspectable,IExecuteCommand>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v0 = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler>>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler,std::tuple<winrt::Windows::Foundation::IInspectable,IExecuteCommand>>'};
  *((_QWORD *)v0 + 2) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler>>::`vftable'{for `winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler,winrt::Windows::Foundation::IInspectable,IExecuteCommand>'};
  return v0;
}

/*
 * XREFs of ?winrt_make_Windows_Internal_Shell_XamlExplorerHost_XamlExplorerHostChildWindow_WASDK@@YAPEAXXZ @ 0x1802A2F54
 * Callers:
 *     ?XamlExplorerHost_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18016E710 (-XamlExplorerHost_get_activation_factory@@YAPEAXAEBV-$basic_string_view@GU-$char_traits@G@std@@@.c)
 * Callees:
 *     ??0?$producers_base@UXamlExplorerHostChildWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@V?$tuple@UIActivationFactory@Foundation@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDKFactory@XamlExplorerHost@Shell@Internal@34@@std@@@impl@winrt@@QEAA@XZ @ 0x1802A2FA4 (--0-$producers_base@UXamlExplorerHostChildWindow_WASDK@factory_implementation@XamlExplorerHost@S.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *winrt_make_Windows_Internal_Shell_XamlExplorerHost_XamlExplorerHostChildWindow_WASDK(void)
{
  _OWORD *v0; // rax
  _QWORD *v1; // r10

  v0 = operator new(0x20uLL);
  *v0 = 0LL;
  v0[1] = 0LL;
  winrt::impl::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow_WASDK,std::tuple<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDKFactory>>::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow_WASDK,std::tuple<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDKFactory>>(v0 + 1);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  v1[1] = 1LL;
  *v1 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow_WASDK>::`vftable';
  return v1 + 2;
}

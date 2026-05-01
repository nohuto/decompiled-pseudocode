/*
 * XREFs of ??$create_and_initialize@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@$$V@impl@winrt@@YAPEAUXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@1@XZ @ 0x1802CE170
 * Callers:
 *     ??$make_factory@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x18016E7F4 (--$make_factory@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@.c)
 * Callees:
 *     ??0?$producers_base@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@V?$tuple@UIActivationFactory@Foundation@Windows@winrt@@UIXamlApplicationStatics@XamlExplorerHost@Shell@Internal@34@@std@@@impl@winrt@@QEAA@XZ @ 0x1802CE1CC (--0-$producers_base@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Wind.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *winrt::impl::create_and_initialize<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlApplication,>()
{
  _OWORD *v0; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  _QWORD *v3; // r9

  v0 = operator new(0x30uLL);
  *v0 = 0LL;
  v0[1] = 0LL;
  v0[2] = 0LL;
  winrt::impl::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlApplication,std::tuple<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics>>::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlApplication,std::tuple<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics>>(
    v0 + 1,
    v1,
    v2,
    v0);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  v3[1] = 1LL;
  v3[4] = 0LL;
  v3[5] = 0LL;
  *v3 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlApplication>::`vftable';
  return v3;
}

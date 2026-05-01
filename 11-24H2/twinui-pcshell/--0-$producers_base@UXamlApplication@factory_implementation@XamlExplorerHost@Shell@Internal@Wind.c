/*
 * XREFs of ??0?$producers_base@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@V?$tuple@UIActivationFactory@Foundation@Windows@winrt@@UIXamlApplicationStatics@XamlExplorerHost@Shell@Internal@34@@std@@@impl@winrt@@QEAA@XZ @ 0x1802CE1CC
 * Callers:
 *     ??$create_and_initialize@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@$$V@impl@winrt@@YAPEAUXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@1@XZ @ 0x1802CE170 (--$create_and_initialize@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal.c)
 * Callees:
 *     ??0?$producer_convert@UXamlExplorerHostChildWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@X@impl@winrt@@QEAA@XZ @ 0x18044EC0C (--0-$producer_convert@UXamlExplorerHostChildWindow@factory_implementation@XamlExplorerHost@Shell.c)
 *     ??0?$producer_convert@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlApplicationStatics@34567@X@impl@winrt@@QEAA@XZ @ 0x18044EC24 (--0-$producer_convert@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Wi.c)
 */

__int64 __fastcall winrt::impl::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlApplication,std::tuple<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics>>::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlApplication,std::tuple<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8

  winrt::impl::producer_convert<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IActivationFactory,void>::producer_convert<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IActivationFactory,void>(
    a1,
    a2,
    a1);
  winrt::impl::producer_convert<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics,void>::producer_convert<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics,void>(v2 + 8);
  return v3;
}

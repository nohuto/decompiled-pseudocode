/*
 * XREFs of ?get_local_iids@?$implements@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@UIXamlApplicationStatics@34567@Ustatic_lifetime@7@@winrt@@UEBA?AU?$pair@IPEBUguid@winrt@@@std@@XZ @ 0x180450140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlApplication,winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics,winrt::static_lifetime>::get_local_iids(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)a2 = 2;
  *(_QWORD *)(a2 + 8) = L"5";
  return a2;
}

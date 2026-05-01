/*
 * XREFs of ?find_interface@?$implements@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@UIRemoteSystemDataModelStatics@3456@Ustatic_lifetime@6@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1802B5A90
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIActivationFactory@Foundation@Windows@winrt@@UIRemoteSystemDataModelStatics@Shell@Internal@34@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1802B5AB4 (--$find@U-$find_iid_traits@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics,winrt::static_lifetime>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return winrt::impl::interface_list<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel>>(v3);
}

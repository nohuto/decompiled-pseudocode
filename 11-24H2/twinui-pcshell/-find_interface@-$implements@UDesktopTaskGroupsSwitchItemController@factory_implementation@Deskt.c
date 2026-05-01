/*
 * XREFs of ?find_interface@?$implements@UDesktopTaskGroupsSwitchItemController@factory_implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x18022D600
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@UDesktopTaskGroupsSwitchItemController@factory_implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIActivationFactory@Foundation@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UDesktopTaskGroupsSwitchItemController@factory_implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1802C65A4 (--$find@U-$find_iid_traits@UDesktopTaskGroupsSwitchItemController@factory_implementation@Desktop.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::DesktopTaskGroups::factory_implementation::DesktopTaskGroupsSwitchItemController,winrt::Windows::Foundation::IActivationFactory>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return winrt::impl::interface_list<winrt::Windows::Foundation::IActivationFactory>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::DesktopTaskGroups::factory_implementation::DesktopTaskGroupsSwitchItemController>>(v3);
}

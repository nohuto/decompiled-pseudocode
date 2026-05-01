/*
 * XREFs of ?find_interface@?$implements@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIInputSwitchExperienceManager@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180215A20
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIInputSwitchExperienceManager@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180638CBC (--$find@U-$find_iid_traits@UInputSwitchingManager@implementation@Shell@Internal@Win_ea_180638CBC.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::InputSwitchingManager,winrt::immersive_shell_component,IInputSwitchExperienceManager>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = a2;
  v3[0] = a1 - 40;
  return winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IInputSwitchExperienceManager>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::InputSwitchingManager>>(v3);
}

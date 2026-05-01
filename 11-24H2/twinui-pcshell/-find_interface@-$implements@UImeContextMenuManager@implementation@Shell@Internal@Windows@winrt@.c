/*
 * XREFs of ?find_interface@?$implements@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIImeContextMenuExperienceManager@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1801FED50
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIImeContextMenuExperienceManager@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x18063AD34 (--$find@U-$find_iid_traits@UImeContextMenuManager@implementation@Shell@Internal@Win_ea_18063AD34.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager,winrt::immersive_shell_component,IImeContextMenuExperienceManager>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = a2;
  v3[0] = a1 - 40;
  return winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IImeContextMenuExperienceManager>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager>>(v3);
}

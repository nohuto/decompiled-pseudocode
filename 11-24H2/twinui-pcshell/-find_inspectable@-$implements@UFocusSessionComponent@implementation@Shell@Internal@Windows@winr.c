/*
 * XREFs of ?find_inspectable@?$implements@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIFocusSessionComponent@3456@@winrt@@UEBAPEAUtype@?$abi@UIInspectable@Foundation@Windows@winrt@@X@impl@2@XZ @ 0x1802DF7C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_inspectable_traits@Uimmersive_shell_component@winrt@@@impl@winrt@@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_inspectable_traits@Uimmersive_shell_component@winrt@@@12@@Z @ 0x1802DEBAC (--$find@U-$find_inspectable_traits@Uimmersive_shell_component@winrt@@@impl@winrt@@@-$interface_l.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::IFocusSessionComponent>::find_inspectable(
        __int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 - 32;
  return winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::impl::find_inspectable_traits<winrt::immersive_shell_component>>(&v2);
}

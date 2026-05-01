/*
 * XREFs of ??$find@U?$find_iid_traits@UPinManager@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIPinManagerInterop3@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UPinManager@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1805E2108
 * Callers:
 *     ?find_interface@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop3@@Uimmersive_shell_component@6@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1805ECA10 (-find_interface@-$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IPinManagerInterop3,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::PinManager>>(
        __int64 *a1)
{
  __int64 v1; // rdx

  v1 = a1[1];
  if ( *(_OWORD *)v1 == __PAIR128__(0x6BD11CF5DB5FC485LL, winrt::impl::guid_v<IPinManagerInterop3>)
    || *(_QWORD *)v1 == winrt::impl::guid_v<IPinManagerInterop2> && *(_QWORD *)(v1 + 8) == 0x104775017B9959BELL
    || *(_QWORD *)v1 == winrt::impl::guid_v<IPinManagerInterop> && *(_QWORD *)(v1 + 8) == 0xDF046F8CB170D97LL )
  {
    return *a1;
  }
  else
  {
    return winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::PinManager>>(a1);
  }
}

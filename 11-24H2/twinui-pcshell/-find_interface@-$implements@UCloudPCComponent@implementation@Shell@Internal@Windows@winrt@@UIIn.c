/*
 * XREFs of ?find_interface@?$implements@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@URemoteSystemProviderExtension@RemoteSystems@3456@Uimmersive_shell_component@6@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1802BD250
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIInspectable@Foundation@Windows@winrt@@URemoteSystemProviderExtension@RemoteSystems@Shell@Internal@34@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@U1234@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1802BD278 (--$find@U-$find_iid_traits@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@@impl@.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::CloudPCComponent,winrt::Windows::Foundation::IInspectable,winrt::Windows::Internal::Shell::RemoteSystems::RemoteSystemProviderExtension,winrt::immersive_shell_component>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = a2;
  v3[0] = a1 - 32;
  return winrt::impl::interface_list<winrt::Windows::Foundation::IInspectable,winrt::Windows::Internal::Shell::RemoteSystems::RemoteSystemProviderExtension,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::CloudPCComponent>>(v3);
}

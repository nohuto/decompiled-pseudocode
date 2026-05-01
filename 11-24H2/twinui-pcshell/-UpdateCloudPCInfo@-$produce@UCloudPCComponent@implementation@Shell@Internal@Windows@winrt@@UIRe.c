/*
 * XREFs of ?UpdateCloudPCInfo@?$produce@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemProviderExtension@RemoteSystems@3456@@impl@winrt@@UEAAHUstruct_Windows_UI_WindowId@23@@Z @ 0x180642610
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateCloudPCInfo@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x18064263C (-UpdateCloudPCInfo@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindow.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::CloudPCComponent,winrt::Windows::Internal::Shell::RemoteSystems::IRemoteSystemProviderExtension>::UpdateCloudPCInfo(
        winrt::Windows::Internal::Shell::implementation::CloudPCComponent *a1,
        __int64 a2)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  winrt::Windows::Internal::Shell::implementation::CloudPCComponent::UpdateCloudPCInfo(
    a1,
    (const struct winrt::Windows::UI::WindowId *)&v3);
  return 0LL;
}

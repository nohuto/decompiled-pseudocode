/*
 * XREFs of ?get_local_iids@?$implements@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@URemoteSystemProviderExtension@RemoteSystems@3456@Uimmersive_shell_component@6@@winrt@@UEBA?AU?$pair@IPEBUguid@winrt@@@std@@XZ @ 0x1806432B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::CloudPCComponent,winrt::Windows::Foundation::IInspectable,winrt::Windows::Internal::Shell::RemoteSystems::RemoteSystemProviderExtension,winrt::immersive_shell_component>::get_local_iids(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)a2 = 1;
  *(_QWORD *)(a2 + 8) = &winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Internal::Shell::RemoteSystems::RemoteSystemProviderExtension>>::value;
  return a2;
}

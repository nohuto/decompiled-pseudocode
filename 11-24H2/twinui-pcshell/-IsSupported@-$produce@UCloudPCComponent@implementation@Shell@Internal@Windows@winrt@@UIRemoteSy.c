/*
 * XREFs of ?IsSupported@?$produce@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemProviderExtension@RemoteSystems@3456@@impl@winrt@@UEAAHPEA_N@Z @ 0x180641510
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSupported@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180641544 (-IsSupported@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::CloudPCComponent,winrt::Windows::Internal::Shell::RemoteSystems::IRemoteSystemProviderExtension>::IsSupported(
        __int64 a1,
        _BYTE *a2)
{
  *a2 = winrt::Windows::Internal::Shell::implementation::CloudPCComponent::IsSupported((winrt::Windows::Internal::Shell::implementation::CloudPCComponent *)((a1 - 96) & -(__int64)(a1 != 0)));
  return 0LL;
}

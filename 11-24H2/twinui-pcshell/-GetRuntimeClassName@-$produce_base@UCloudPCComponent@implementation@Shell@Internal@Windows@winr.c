/*
 * XREFs of ?GetRuntimeClassName@?$produce_base@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemProviderExtension@RemoteSystems@3456@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180640F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::implementation::CloudPCComponent,winrt::Windows::Internal::Shell::RemoteSystems::IRemoteSystemProviderExtension,void>::GetRuntimeClassName(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  v2 = a1 - 64;
  if ( !a1 )
    v2 = 32LL;
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::NonDelegatingGetRuntimeClassName(
           v2,
           a2);
}

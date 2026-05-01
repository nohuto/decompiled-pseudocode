/*
 * XREFs of ?get_State@?$produce@URemoteDesktopStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@UIRemoteDesktopStateChangedEventArgs@3456@@impl@winrt@@UEAAHPEAH@Z @ 0x18066FD10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteDesktopStateChangedEventArgs,winrt::Windows::Internal::Shell::IRemoteDesktopStateChangedEventArgs>::get_State(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // rax

  v2 = a1 + 24;
  if ( !a1 )
    v2 = 40LL;
  *a2 = *(_DWORD *)v2;
  return 0LL;
}

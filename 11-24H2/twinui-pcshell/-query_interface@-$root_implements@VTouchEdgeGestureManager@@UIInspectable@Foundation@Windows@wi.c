/*
 * XREFs of ?query_interface@?$root_implements@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@UITouchEdgeGesture@@UIGameFocusEvents@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18026FA28
 * Callers:
 *     ?QueryInterface@?$implements@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@UITouchEdgeGesture@@UIGameFocusEvents@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180229D40 (-QueryInterface@-$implements@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@U.c)
 * Callees:
 *     ?AddRef@?$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@QEAAIXZ @ 0x1801BC970 (-AddRef@-$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt.c)
 *     ?query_interface_common@?$root_implements@URemoteSystemStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1802DF89C (-query_interface_common@-$root_implements@URemoteSystemStateChangedEventArgs@implementation@Shel.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<TouchEdgeGestureManager,winrt::Windows::Foundation::IInspectable,ITouchEdgeGesture,IGameFocusEvents>::query_interface(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax

  v3 = a1;
  if ( !a1 )
    a1 = 24LL;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  *a3 = v6;
  if ( !v6 )
    return winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs,winrt::Windows::Internal::Shell::RemoteSystemStateChangedEventArgs>::query_interface_common(
             v3,
             a2,
             a3);
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef(v3);
  return 0LL;
}

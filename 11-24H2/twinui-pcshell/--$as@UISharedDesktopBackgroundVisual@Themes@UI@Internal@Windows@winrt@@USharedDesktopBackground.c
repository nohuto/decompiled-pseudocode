/*
 * XREFs of ??$as@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualHost@@$0A@@impl@winrt@@YA?AUISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@1@PEAUSharedDesktopBackgroundVisualHost@@@Z @ 0x1806041C4
 * Callers:
 *     ?GetSharedBackgroundVisualHostFromSinkId@?$produce@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UIThemeCoordinator@34567@@impl@winrt@@UEAAH_KPEAPEAX@Z @ 0x1806057A0 (-GetSharedBackgroundVisualHostFromSinkId@-$produce@UThemeCoordinator@implementation@Themes@UI@In.c)
 * Callees:
 *     ?AddRef@?$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@QEAAIXZ @ 0x1801BC970 (-AddRef@-$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?query_interface_common@?$root_implements@URemoteSystemStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1802DF89C (-query_interface_common@-$root_implements@URemoteSystemStateChangedEventArgs@implementation@Shel.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::as<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,SharedDesktopBackgroundVisualHost,0>(
        _QWORD *a1,
        volatile signed __int64 *a2)
{
  int v2; // ebx
  volatile signed __int64 v5; // rax
  int v7; // [rsp+28h] [rbp-20h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  if ( a2 )
  {
    v5 = *a2;
    v7 = 0;
    v8 = 0LL;
    v10 = (*(__int64 (__fastcall **)(volatile signed __int64 *, __int64 *))(v5 + 48))(
            a2,
            &winrt::impl::guid_v<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual>);
    if ( v10 )
      winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef((__int64)a2);
    else
      v2 = winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs,winrt::Windows::Internal::Shell::RemoteSystemStateChangedEventArgs>::query_interface_common(
             a2,
             &winrt::impl::guid_v<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual>,
             &v10);
    winrt::check_hresult(&v9, v2, (__int64)&v7);
    *a1 = v10;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}

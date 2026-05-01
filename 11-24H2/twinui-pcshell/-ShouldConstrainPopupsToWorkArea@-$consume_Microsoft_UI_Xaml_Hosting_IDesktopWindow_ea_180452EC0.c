/*
 * XREFs of ?ShouldConstrainPopupsToWorkArea@?$consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource2@UDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x180452EC0
 * Callers:
 *     ?put_ShouldConstrainPopupsToWorkArea@?$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDK3@34567@@impl@winrt@@UEAAH_N@Z @ 0x1804537E0 (-put_ShouldConstrainPopupsToWorkArea@-$produce@UXamlExplorerHostChildWindow_WASDK@implementation.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource2<winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource>::ShouldConstrainPopupsToWorkArea(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        char a2)
{
  __int64 (__fastcall ***v3)(_QWORD, void *, __int64 *); // rcx
  int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rdx
  int v7; // eax
  int v8; // [rsp+20h] [rbp-40h] BYREF
  __int64 v9; // [rsp+28h] [rbp-38h] BYREF
  int v10; // [rsp+30h] [rbp-30h] BYREF
  __int128 v11; // [rsp+38h] [rbp-28h]
  __int64 v12; // [rsp+48h] [rbp-18h] BYREF

  v3 = *a1;
  if ( v3 )
  {
    v12 = 0LL;
    v4 = (**v3)(v3, &winrt::impl::guid_v<winrt::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSource2>, &v12);
    v5 = v12;
    v9 = v12;
  }
  else
  {
    v4 = 0;
    v9 = 0LL;
    v5 = 0LL;
  }
  v10 = 0;
  v11 = 0LL;
  winrt::check_hresult(&v8, v4, (__int64)&v10);
  v10 = 0;
  v11 = 0LL;
  LOBYTE(v6) = a2;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 56LL))(v5, v6);
  winrt::check_hresult(&v8, v7, (__int64)&v10);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
}

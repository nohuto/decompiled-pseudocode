/*
 * XREFs of ?HighContrastAdjustment@?$consume_Microsoft_UI_Xaml_IApplication@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBW4ApplicationHighContrastAdjustment@Xaml@UI@Microsoft@3@@Z @ 0x180456C8C
 * Callers:
 *     ?OnLaunched@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXULaunchActivatedEventArgs@Xaml@UI@Microsoft@8@@Z @ 0x18024A4A0 (-OnLaunched@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@w.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall winrt::impl::consume_Microsoft_UI_Xaml_IApplication<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK>::HighContrastAdjustment(
        __int64 a1,
        unsigned int *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, void *, __int64 *); // rcx
  int v4; // eax
  __int64 v5; // rbx
  int v6; // eax
  int v7; // [rsp+20h] [rbp-40h] BYREF
  __int64 v8; // [rsp+28h] [rbp-38h] BYREF
  int v9; // [rsp+30h] [rbp-30h] BYREF
  __int128 v10; // [rsp+38h] [rbp-28h]
  __int64 v11; // [rsp+48h] [rbp-18h] BYREF

  v3 = *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 8);
  if ( v3 )
  {
    v11 = 0LL;
    v4 = (**v3)(v3, &winrt::impl::guid_v<winrt::Microsoft::UI::Xaml::IApplication>, &v11);
    v5 = v11;
    v8 = v11;
  }
  else
  {
    v4 = 0;
    v8 = 0LL;
    v5 = 0LL;
  }
  v9 = 0;
  v10 = 0LL;
  winrt::check_hresult(&v7, v4, (__int64)&v9);
  v9 = 0;
  v10 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 112LL))(v5, *a2);
  winrt::check_hresult(&v7, v6, (__int64)&v9);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
}

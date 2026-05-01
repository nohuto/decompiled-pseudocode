/*
 * XREFs of ?ResourceManagerRequested@?$consume_Microsoft_UI_Xaml_IApplication2@UApplication@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UResourceManagerRequestedEventArgs@Xaml@UI@Microsoft@4@@Foundation@Windows@3@@Z @ 0x180457158
 * Callers:
 *     winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::UseMrtShim_WASDK$_ResumeCoro$1 @ 0x18024A880 (winrt--Windows--Internal--Shell--XamlExplorerHost--WASDK--implementation--UseMrtShim_WASDK$_Resu.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Microsoft_UI_Xaml_IApplication2<winrt::Microsoft::UI::Xaml::Application>::ResourceManagerRequested(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 (__fastcall ***v5)(_QWORD, void *, __int64 *); // rcx
  int v6; // eax
  __int64 v7; // rbx
  int v8; // eax
  int v10; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+28h] [rbp-38h] BYREF
  int v12; // [rsp+30h] [rbp-30h] BYREF
  __int128 v13; // [rsp+38h] [rbp-28h]
  __int64 v14; // [rsp+48h] [rbp-18h] BYREF

  *a2 = 0LL;
  v5 = *a1;
  if ( v5 )
  {
    v14 = 0LL;
    v6 = (**v5)(v5, &winrt::impl::guid_v<winrt::Microsoft::UI::Xaml::IApplication2>, &v14);
    v7 = v14;
    v11 = v14;
  }
  else
  {
    v6 = 0;
    v11 = 0LL;
    v7 = 0LL;
  }
  v12 = 0;
  v13 = 0LL;
  winrt::check_hresult(&v10, v6, (__int64)&v12);
  v12 = 0;
  v13 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v7 + 48LL))(v7, *a3, a2);
  winrt::check_hresult(&v10, v8, (__int64)&v12);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
  return a2;
}

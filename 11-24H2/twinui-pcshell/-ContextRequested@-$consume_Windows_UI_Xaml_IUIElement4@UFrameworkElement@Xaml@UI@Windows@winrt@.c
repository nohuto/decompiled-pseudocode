/*
 * XREFs of ?ContextRequested@?$consume_Windows_UI_Xaml_IUIElement4@UFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UUIElement@Xaml@UI@Windows@winrt@@UContextRequestedEventArgs@Input@2345@@Foundation@Windows@3@@Z @ 0x180285D90
 * Callers:
 *     ?ContextRequested@?$consume_Windows_UI_Xaml_IUIElement4@UFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UUIElement@Xaml@UI@Windows@winrt@@UContextRequestedEventArgs@Input@2345@@Foundation@Windows@3@@Z @ 0x1806AAB84 (-ContextRequested@-$consume_Windows_UI_Xaml_IUIElement4@UFrameworkElement@Xaml@UI@W_ea_1806AAB84.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_UI_Xaml_IUIElement4<winrt::Windows::UI::Xaml::FrameworkElement>::ContextRequested(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 (__fastcall ***v5)(_QWORD, void *, __int64 *); // rcx
  unsigned int v6; // eax
  __int64 v7; // rbx
  unsigned int v8; // eax
  int v10; // [rsp+20h] [rbp-20h] BYREF
  __int128 v11; // [rsp+28h] [rbp-18h]
  char v12; // [rsp+60h] [rbp+20h] BYREF
  __int64 v13; // [rsp+68h] [rbp+28h] BYREF
  __int64 v14; // [rsp+70h] [rbp+30h] BYREF

  *a2 = 0LL;
  v5 = *a1;
  if ( v5 )
  {
    v13 = 0LL;
    v6 = (**v5)(v5, &winrt::impl::guid_v<winrt::Windows::UI::Xaml::IUIElement4>, &v13);
    v7 = v13;
    v14 = v13;
  }
  else
  {
    v6 = 0;
    v14 = 0LL;
    v7 = 0LL;
  }
  v10 = 0;
  v11 = 0LL;
  winrt::check_hresult(&v12, v6, &v10);
  v10 = 0;
  v11 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v7 + 128LL))(v7, *a3, a2);
  winrt::check_hresult(&v12, v8, &v10);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
  return a2;
}

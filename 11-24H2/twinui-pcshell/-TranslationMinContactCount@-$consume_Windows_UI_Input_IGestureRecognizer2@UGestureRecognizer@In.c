/*
 * XREFs of ?TranslationMinContactCount@?$consume_Windows_UI_Input_IGestureRecognizer2@UGestureRecognizer@Input@UI@Windows@winrt@@@impl@winrt@@QEBA@I@Z @ 0x180592804
 * Callers:
 *     ?Initialize@TouchGestureProcessor@@QEAAXXZ @ 0x18026FD5C (-Initialize@TouchGestureProcessor@@QEAAXXZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::consume_Windows_UI_Input_IGestureRecognizer2<winrt::Windows::UI::Input::GestureRecognizer>::TranslationMinContactCount(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        int a2)
{
  __int64 (__fastcall ***v2)(_QWORD, void *, __int64 *); // rcx
  int v3; // eax
  __int64 v4; // rbx
  int v5; // eax
  int v6; // [rsp+20h] [rbp-20h] BYREF
  __int128 v7; // [rsp+28h] [rbp-18h]
  __int64 v8; // [rsp+50h] [rbp+10h] BYREF
  int v9; // [rsp+58h] [rbp+18h] BYREF
  __int64 v10; // [rsp+60h] [rbp+20h] BYREF

  v9 = a2;
  v2 = *a1;
  if ( v2 )
  {
    v8 = 0LL;
    v3 = (**v2)(v2, &winrt::impl::guid_v<winrt::Windows::UI::Input::IGestureRecognizer2>, &v8);
    v4 = v8;
    v10 = v8;
  }
  else
  {
    v3 = 0;
    v10 = 0LL;
    v4 = 0LL;
  }
  v6 = 0;
  v7 = 0LL;
  winrt::check_hresult(&v9, v3, (__int64)&v6);
  v6 = 0;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 152LL))(v4, 3LL);
  winrt::check_hresult(&v9, v5, (__int64)&v6);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
}

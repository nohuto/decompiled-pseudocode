/*
 * XREFs of ?TransferForegroundRights@?$consume_WindowsUdk_UI_Shell_IShowShellViewOptions3@UShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x180462040
 * Callers:
 *     _lambda_c0ce33e06c92a42a96b12c6bd24e1411_::operator()_winrt::Windows::UI::Input::GestureRecognizer_ @ 0x18058DCE4 (_lambda_c0ce33e06c92a42a96b12c6bd24e1411_--operator()_winrt--Windows--UI--Input--GestureRecogniz.c)
 *     ?CreateShowShellViewOptions@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@SA?AUShowShellViewOptions@4UI@WindowsUdk@7@W4ShellView@49WindowsUdk@7@_KUPoint@Foundation@67@AEBUGestureAnimationData@Input@9WindowsUdk@7@@Z @ 0x18069A18C (-CreateShowShellViewOptions@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@W.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions3<winrt::WindowsUdk::UI::Shell::ShowShellViewOptions>::TransferForegroundRights(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        char a2)
{
  __int64 (__fastcall ***v2)(_QWORD, void *, __int64 *); // rcx
  int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rdx
  int v6; // eax
  int v7; // [rsp+20h] [rbp-20h] BYREF
  __int128 v8; // [rsp+28h] [rbp-18h]
  __int64 v9; // [rsp+50h] [rbp+10h] BYREF
  int v10; // [rsp+58h] [rbp+18h] BYREF
  __int64 v11; // [rsp+60h] [rbp+20h] BYREF

  LOBYTE(v10) = a2;
  v2 = *a1;
  if ( v2 )
  {
    v9 = 0LL;
    v3 = (**v2)(v2, &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::IShowShellViewOptions3>, &v9);
    v4 = v9;
    v11 = v9;
  }
  else
  {
    v3 = 0;
    v11 = 0LL;
    v4 = 0LL;
  }
  v7 = 0;
  v8 = 0LL;
  winrt::check_hresult(&v10, v3, (__int64)&v7);
  v7 = 0;
  v8 = 0LL;
  LOBYTE(v5) = 1;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 56LL))(v4, v5);
  winrt::check_hresult(&v10, v6, (__int64)&v7);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
}

/*
 * XREFs of ?DismissAnimationCompleted@?$consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartController2@UDockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UDockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@6@@Foundation@Windows@3@@Z @ 0x18038FB00
 * Callers:
 *     ?SetDockedStartController@CStartExperienceManager@@UEAAJPEAUIInspectable@@@Z @ 0x180392740 (-SetDockedStartController@CStartExperienceManager@@UEAAJPEAUIInspectable@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??$from_com_ref@AEBUINetworkConnectionUtils@Shell@Internal@Windows@winrt@@@?$weak_ref@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@@winrt@@AEAAXAEBUINetworkConnectionUtils@Shell@Internal@Windows@1@@Z @ 0x1803453F8 (--$from_com_ref@AEBUINetworkConnectionUtils@Shell@Internal@Windows@winrt@@@-$weak_ref@UINetworkC.c)
 *     ?DismissAnimationCompleted@?$consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartController2@UDockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UDockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@6@@Foundation@Windows@3@@Z @ 0x18038FA44 (-DismissAnimationCompleted@-$consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartContro.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartController2<winrt::WindowsUdk::UI::StartScreen::Implementation::DockedStartController>::DismissAnimationCompleted(
        void (__fastcall ****a1)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *), void *, __int64 *),
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v6; // rbx
  void (__fastcall ***v7)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *), void *, __int64 *); // rcx
  _QWORD v9[4]; // [rsp+28h] [rbp-20h] BYREF
  void (__fastcall ***v10)(_QWORD, const wchar_t *, __int64 *); // [rsp+50h] [rbp+8h] BYREF
  void (__fastcall ***v11)(_QWORD, const wchar_t *, __int64 *); // [rsp+58h] [rbp+10h] BYREF

  v11 = (void (__fastcall ***)(_QWORD, const wchar_t *, __int64 *))a2;
  v6 = *winrt::impl::consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartController2<winrt::WindowsUdk::UI::StartScreen::Implementation::DockedStartController>::DismissAnimationCompleted(
          (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a1,
          v9,
          a4);
  v7 = *a1;
  if ( *a1 )
  {
    v10 = 0LL;
    (**v7)(
      (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))v7,
      &winrt::impl::guid_v<winrt::WindowsUdk::UI::StartScreen::Implementation::IDockedStartController2>,
      (__int64 *)&v10);
    v11 = v10;
  }
  else
  {
    v11 = 0LL;
  }
  v9[1] = a2;
  *(_QWORD *)a2 = 0LL;
  winrt::weak_ref<winrt::Windows::Internal::Shell::INetworkConnectionUtils>::from_com_ref<winrt::Windows::Internal::Shell::INetworkConnectionUtils const &>(
    (__int64 *)a2,
    &v11);
  *(_QWORD *)(a2 + 8) = v6;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
  return a2;
}

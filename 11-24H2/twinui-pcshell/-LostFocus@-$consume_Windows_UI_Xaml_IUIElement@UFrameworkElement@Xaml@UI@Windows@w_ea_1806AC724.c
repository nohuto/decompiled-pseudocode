/*
 * XREFs of ?LostFocus@?$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBURoutedEventHandler@Xaml@UI@Windows@3@@Z @ 0x1806AC724
 * Callers:
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1806AAE64 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??$?0AEBUIToastNotification@Notifications@UI@Windows@winrt@@X@?$weak_ref@UIToastNotification@Notifications@UI@Windows@winrt@@@winrt@@QEAA@AEBUIToastNotification@Notifications@UI@Windows@1@@Z @ 0x1801D5F34 (--$-0AEBUIToastNotification@Notifications@UI@Windows@winrt@@X@-$weak_ref@UIToastNotification@Not.c)
 *     ?LostFocus@?$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBURoutedEventHandler@Xaml@UI@Windows@3@@Z @ 0x1806AC664 (-LostFocus@-$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Windows@winrt@@@impl@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Xaml_IUIElement<winrt::Windows::UI::Xaml::FrameworkElement>::LostFocus(
        void (__fastcall ****a1)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *), void *, __int64 *),
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v6; // rbx
  void (__fastcall ***v7)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *), void *, __int64 *); // rcx
  __int64 v9; // [rsp+28h] [rbp-10h] BYREF
  _QWORD *v10; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v6 = *winrt::impl::consume_Windows_UI_Xaml_IUIElement<winrt::Windows::UI::Xaml::FrameworkElement>::LostFocus(
          (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a1,
          &v9,
          a4);
  v7 = *a1;
  if ( *a1 )
  {
    v10 = 0LL;
    (**v7)(
      (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))v7,
      &winrt::impl::guid_v<winrt::Windows::UI::Xaml::IUIElement>,
      (__int64 *)&v10);
    v11 = v10;
  }
  else
  {
    v11 = 0LL;
  }
  winrt::weak_ref<winrt::Windows::UI::Notifications::IToastNotification>::weak_ref<winrt::Windows::UI::Notifications::IToastNotification>(
    a2,
    (__int64)&v11);
  a2[1] = v6;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
  return a2;
}

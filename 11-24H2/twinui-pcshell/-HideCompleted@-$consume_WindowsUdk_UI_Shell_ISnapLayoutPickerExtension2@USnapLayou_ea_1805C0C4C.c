/*
 * XREFs of ?HideCompleted@?$consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtension2@USnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@USnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@3@@Z @ 0x1805C0C4C
 * Callers:
 *     ?FinishShow@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXURect@Foundation@67@@Z @ 0x180274248 (-FinishShow@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXU.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??$from_com_ref@AEBUIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@?$weak_ref@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@winrt@@AEAAXAEBUIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@1@@Z @ 0x1801D5F5C (--$from_com_ref@AEBUIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@-$weak_ref@UIDeskto.c)
 *     ?HideCompleted@?$consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtension2@USnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@USnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@3@@Z @ 0x180274450 (-HideCompleted@-$consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtension2@USnapLayoutPickerExtens.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtension2<winrt::WindowsUdk::UI::Shell::SnapLayoutPickerExtension>::HideCompleted(
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
  v6 = *winrt::impl::consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtension2<winrt::WindowsUdk::UI::Shell::SnapLayoutPickerExtension>::HideCompleted(
          (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a1,
          v9,
          a4);
  v7 = *a1;
  if ( *a1 )
  {
    v10 = 0LL;
    (**v7)(
      (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))v7,
      &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::ISnapLayoutPickerExtension2>,
      (__int64 *)&v10);
    v11 = v10;
  }
  else
  {
    v11 = 0LL;
  }
  v9[1] = a2;
  *(_QWORD *)a2 = 0LL;
  winrt::weak_ref<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource>::from_com_ref<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource const &>(
    (__int64 *)a2,
    &v11);
  *(_QWORD *)(a2 + 8) = v6;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
  return a2;
}

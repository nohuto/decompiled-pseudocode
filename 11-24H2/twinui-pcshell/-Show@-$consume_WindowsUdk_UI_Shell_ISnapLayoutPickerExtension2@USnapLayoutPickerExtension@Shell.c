/*
 * XREFs of ?Show@?$consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtension2@USnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180274580
 * Callers:
 *     ?FinishShow@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXURect@Foundation@67@@Z @ 0x180274248 (-FinishShow@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXU.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall winrt::impl::consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtension2<winrt::WindowsUdk::UI::Shell::SnapLayoutPickerExtension>::Show(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *))
{
  __int64 (__fastcall ***v1)(_QWORD, void *, __int64 *); // rcx
  unsigned int v2; // eax
  __int64 v3; // rbx
  unsigned int v4; // eax
  int v5; // [rsp+20h] [rbp-20h] BYREF
  __int128 v6; // [rsp+28h] [rbp-18h]
  char v7; // [rsp+50h] [rbp+10h] BYREF
  __int64 v8; // [rsp+58h] [rbp+18h] BYREF
  __int64 v9; // [rsp+60h] [rbp+20h] BYREF

  v1 = *a1;
  if ( v1 )
  {
    v8 = 0LL;
    v2 = (**v1)(v1, &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::ISnapLayoutPickerExtension2>, &v8);
    v3 = v8;
    v9 = v8;
  }
  else
  {
    v2 = 0;
    v9 = 0LL;
    v3 = 0LL;
  }
  v5 = 0;
  v6 = 0LL;
  winrt::check_hresult(&v7, v2, &v5);
  v5 = 0;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 48LL))(v3);
  winrt::check_hresult(&v7, v4, &v5);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
}

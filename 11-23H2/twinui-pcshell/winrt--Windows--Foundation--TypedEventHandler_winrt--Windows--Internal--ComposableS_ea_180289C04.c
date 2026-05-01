/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSourceChangedEventArgs_::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSourceChangedEventArgs___lambda_d5004b2b08b0d25566cb95586abc0d62___ @ 0x180289C04
 * Callers:
 *     ?RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x180079BB0 (-RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSourceChangedEventArgs_::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSourceChangedEventArgs___lambda_d5004b2b08b0d25566cb95586abc0d62___(
        _QWORD *a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  __int64 v4; // r8
  _QWORD *v6; // [rsp+38h] [rbp+10h]

  v6 = operator new(0x18uLL);
  v4 = *(_QWORD *)a2;
  *(_QWORD *)a2 = 0LL;
  v6[1] = v4;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v6 + 4) = 1;
  *v6 = off_1809859D0;
  *a1 = v6;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(a2);
  return a1;
}

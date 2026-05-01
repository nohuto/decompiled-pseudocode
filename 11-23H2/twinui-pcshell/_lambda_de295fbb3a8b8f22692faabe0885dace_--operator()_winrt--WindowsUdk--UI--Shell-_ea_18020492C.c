/*
 * XREFs of _lambda_de295fbb3a8b8f22692faabe0885dace_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_const_&_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_ @ 0x18020492C
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_de295fbb3a8b8f22692faabe0885dace___::Invoke @ 0x18020A930 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_18020A930.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _lambda_de295fbb3a8b8f22692faabe0885dace_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator$_InitCoro$2_const_&_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_ @ 0x180203F18 (_lambda_de295fbb3a8b8f22692faabe0885dace_--operator()_winrt--WindowsUdk--UI--Shell--ShellViewCoo.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_de295fbb3a8b8f22692faabe0885dace_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_const___winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        winrt::Windows::Foundation::IUnknown *a4)
{
  _DWORD *v8; // rax
  int v10; // [rsp+208h] [rbp+10h] BYREF
  winrt::Windows::Foundation::IUnknown *v11; // [rsp+218h] [rbp+20h]

  v11 = a4;
  v8 = operator new(0x1A9uLL);
  v10 = 0;
  lambda_de295fbb3a8b8f22692faabe0885dace_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator__InitCoro_2_const___winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_(
    (__int64)&v10,
    v8,
    a2,
    a3,
    (__int64)a4,
    a1);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(a4);
  return a2;
}

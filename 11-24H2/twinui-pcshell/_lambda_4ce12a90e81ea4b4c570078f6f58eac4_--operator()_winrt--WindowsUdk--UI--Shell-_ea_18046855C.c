/*
 * XREFs of _lambda_4ce12a90e81ea4b4c570078f6f58eac4_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_const_&_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_ @ 0x18046855C
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_4ce12a90e81ea4b4c570078f6f58eac4___::Invoke @ 0x1804724C0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_1804724C0.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     _lambda_4ce12a90e81ea4b4c570078f6f58eac4_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator$_InitCoro$2_const_&_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_ @ 0x180467DA0 (_lambda_4ce12a90e81ea4b4c570078f6f58eac4_--operator()_winrt--WindowsUdk--UI--Shell--ShellViewCoo.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall lambda_4ce12a90e81ea4b4c570078f6f58eac4_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_const___winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 *a4)
{
  char *v8; // rax
  int v10; // [rsp+198h] [rbp+10h] BYREF
  __int64 *v11; // [rsp+1A8h] [rbp+20h]

  v11 = a4;
  v8 = (char *)operator new(0x140uLL);
  v10 = 0;
  lambda_4ce12a90e81ea4b4c570078f6f58eac4_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator__InitCoro_2_const___winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_(
    &v10,
    v8,
    a2,
    a3,
    a4,
    a1);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a4);
  return a2;
}

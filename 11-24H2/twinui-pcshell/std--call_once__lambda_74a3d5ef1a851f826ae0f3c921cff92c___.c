/*
 * XREFs of std::call_once__lambda_74a3d5ef1a851f826ae0f3c921cff92c___ @ 0x1801D7F08
 * Callers:
 *     ?get_Current@?$produce@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlApplicationStatics@34567@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1801D7EA0 (-get_Current@-$produce@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@W.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??0XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1801B24D8 (--0XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x18044ED44 (--1_Init_once_completer@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::call_once__lambda_74a3d5ef1a851f826ae0f3c921cff92c___(union _RTL_RUN_ONCE *a1, __int64 a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // [rsp+20h] [rbp-30h] BYREF
  union _RTL_RUN_ONCE *v6; // [rsp+28h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-20h]
  WINBOOL fPending; // [rsp+38h] [rbp-18h] BYREF

  fPending = 0;
  if ( !__std_init_once_begin_initialize(a1, 0, &fPending, 0LL) )
    abort();
  if ( fPending )
  {
    v6 = a1;
    v7 = 4LL;
    v4 = operator new(0x50uLL);
    memset_0(v4, 0, 0x50uLL);
    winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication::XamlApplication((winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication *)v4);
    *v4 = &winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication::`vftable';
    v5 = v4 + 3;
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(*(_QWORD *)a2 + 40LL), (__int64 *)&v5);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v5);
    LODWORD(v7) = 0;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v6);
  }
}

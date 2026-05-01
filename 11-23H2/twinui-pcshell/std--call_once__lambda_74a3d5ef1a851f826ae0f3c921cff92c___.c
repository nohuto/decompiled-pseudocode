/*
 * XREFs of std::call_once__lambda_74a3d5ef1a851f826ae0f3c921cff92c___ @ 0x18010EBB4
 * Callers:
 *     ?get_Current@?$produce@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlApplicationStatics@34567@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18010EB50 (-get_Current@-$produce@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@W.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??0XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18010ED44 (--0XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x18010F11C (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::call_once__lambda_74a3d5ef1a851f826ae0f3c921cff92c___(union _RTL_RUN_ONCE *a1, _QWORD *a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // [rsp+20h] [rbp-38h] BYREF
  union _RTL_RUN_ONCE *v6; // [rsp+28h] [rbp-30h] BYREF
  int v7; // [rsp+30h] [rbp-28h]
  WINBOOL fPending; // [rsp+38h] [rbp-20h] BYREF

  if ( !__std_init_once_begin_initialize(a1, 0, &fPending, 0LL) )
    abort();
  if ( fPending )
  {
    v6 = a1;
    v7 = 4;
    v4 = operator new(0x58uLL);
    memset_0(v4, 0, 0x58uLL);
    winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication::XamlApplication((winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication *)v4);
    *v4 = &winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication::`vftable';
    v5 = v4 + 3;
    winrt::Windows::Foundation::IUnknown::operator=(*a2 + 40LL, &v5);
    if ( v5 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v5);
    v7 = 0;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v6);
  }
}

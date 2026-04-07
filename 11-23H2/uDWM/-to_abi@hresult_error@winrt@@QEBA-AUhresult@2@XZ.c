/*
 * XREFs of ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x18009E064
 * Callers:
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$1 @ 0x18009CEF3 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$1.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$7 @ 0x18009D076 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$7.c)
 *     _winrt::to_hresult_::_1_::catch$19 @ 0x1800EEA27 (_winrt--to_hresult_--_1_--catch$19.c)
 *     _winrt::to_hresult_::_1_::catch$21 @ 0x1800EEA81 (_winrt--to_hresult_--_1_--catch$21.c)
 *     _winrt::to_hresult_::_1_::catch$22 @ 0x1800EEB24 (_winrt--to_hresult_--_1_--catch$22.c)
 *     _winrt::to_hresult_::_1_::catch$23 @ 0x1800EEBC7 (_winrt--to_hresult_--_1_--catch$23.c)
 * Callees:
 *     SetErrorInfo_0 @ 0x18005E81D (SetErrorInfo_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18009E160 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 */

_DWORD *__fastcall winrt::hresult_error::to_abi(__int64 a1, _DWORD *a2)
{
  void (__fastcall ***v4)(_QWORD, __int64 *, IErrorInfo **); // rcx
  IErrorInfo *v5; // rbx
  IErrorInfo *perrinfo; // [rsp+30h] [rbp+8h] BYREF
  IErrorInfo *v8; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(void (__fastcall ****)(_QWORD, __int64 *, IErrorInfo **))(a1 + 16);
  if ( v4 )
  {
    perrinfo = 0LL;
    (**v4)(v4, &winrt::impl::guid_v<winrt::impl::IErrorInfo>, &perrinfo);
    v5 = perrinfo;
    v8 = perrinfo;
    SetErrorInfo_0(0, perrinfo);
    if ( v5 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v8);
  }
  *a2 = *(_DWORD *)(a1 + 12);
  return a2;
}

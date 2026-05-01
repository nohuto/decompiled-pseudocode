/*
 * XREFs of ?cancel_asynchronously@?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@CA?AUfire_and_forget@3@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@3@@Z @ 0x1805EC7E0
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_bcd598840cbda29c8508817aee038ce7_@@CA@PEAX@Z @ 0x1805DE6F0 (-_lambda_invoker_cdecl_@_lambda_bcd598840cbda29c8508817aee038ce7_@@CA@PEAX@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____1_::cancel_asynchronously$_InitCoro$2 @ 0x180335B68 (winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Foundatio.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,1>::cancel_asynchronously(
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *this)
{
  void *v2; // rax
  char v3; // bl
  _DWORD v5[10]; // [rsp+20h] [rbp-48h] BYREF
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v6; // [rsp+48h] [rbp-20h]
  _BYTE v7[8]; // [rsp+50h] [rbp-18h] BYREF

  v6 = this;
  v2 = operator new(0x20uLL);
  v5[0] = 0;
  winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____1_::cancel_asynchronously__InitCoro_2(
    v7,
    v5,
    (__int64)v2,
    (__int64 *)this);
  v3 = v7[0];
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(this);
  return v3;
}

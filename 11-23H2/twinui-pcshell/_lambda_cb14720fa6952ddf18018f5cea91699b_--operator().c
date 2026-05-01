/*
 * XREFs of _lambda_cb14720fa6952ddf18018f5cea91699b_::operator() @ 0x1805CD34C
 * Callers:
 *     _lambda_7e13dd26ee5179011b47c221adf0f758_::_lambda_invoker_cdecl_ @ 0x1805CCAC0 (_lambda_7e13dd26ee5179011b47c221adf0f758_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1805649C8 (-FailFast_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_cb14720fa6952ddf18018f5cea91699b_::operator()(__int64 a1, unsigned int a2)
{
  unsigned int ActivationFactory; // eax
  unsigned int v4; // eax
  const char *v6; // [rsp+28h] [rbp-50h]
  const char *v7; // [rsp+28h] [rbp-50h]
  _BYTE v8[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+38h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-38h] BYREF
  __int64 v11; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v9 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
  v11 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.Vtc.Win32VtcView",
    0x22u,
    0x21u);
  ActivationFactory = RoGetActivationFactory(v11, &GUID_24d7c183_14a3_5525_b34b_e90a5af9e8e7, &v9);
  wil::details::in1diag3::FailFast_IfFailedMsg(
    retaddr,
    (void *)0x325,
    (int)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
    (const char *)ActivationFactory,
    (__int64)"Do not use PPIWin32VtcLayoutOperation on platforms without win32 vtc",
    v6);
  v8[0] = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)v9 + 56LL))(v9, a2, v8);
  wil::details::in1diag3::FailFast_IfFailedMsg(
    retaddr,
    (void *)0x328,
    (int)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
    (const char *)v4,
    (__int64)"Do not use PPIWin32VtcLayoutOperation on platforms without win32 vtc",
    v7);
  LOBYTE(a2) = v8[0];
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
  return a2;
}

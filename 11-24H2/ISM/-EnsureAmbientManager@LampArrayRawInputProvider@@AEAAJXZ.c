/*
 * XREFs of ?EnsureAmbientManager@LampArrayRawInputProvider@@AEAAJXZ @ 0x1800E352C
 * Callers:
 *     _lambda_15d270ed647e652b2d70a0e99e327c3c_::_lambda_invoker_cdecl_ @ 0x1800E29F0 (_lambda_15d270ed647e652b2d70a0e99e327c3c_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18006913C (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18006CD7C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::IEventHandler_bool___lambda_701f9db595b52d3fc136544516ee8948___ @ 0x1800E2AE0 (Microsoft--WRL--Callback_Windows--Foundation--IEventHandler_bool___lambda_701f9db595b52d3fc13654.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Devices::Lights::Internal::AmbientManager___Windows::Devices::Lights::Internal::AmbientDeviceMappingChangedEventArgs_____lambda_83a6d5673f7f1c2812f02265aa1e897b___ @ 0x1800E2B4C (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Devices--Lights--Inter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LampArrayRawInputProvider::EnsureAmbientManager(LampArrayRawInputProvider *this)
{
  int ActivationFactory; // eax
  const char *v3; // r9
  int v4; // eax
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, char *); // rdi
  _QWORD *v7; // rsi
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-50h] BYREF
  __int64 v13; // [rsp+28h] [rbp-48h] BYREF
  LampArrayRawInputProvider *v14; // [rsp+30h] [rbp-40h] BYREF
  LampArrayRawInputProvider *v15; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v17; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v12 = 0LL;
  v17 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Devices.Lights.LampArray",
    0x21u,
    0x20u);
  ActivationFactory = RoGetActivationFactory(v17, &GUID_7bb8c98d_5fc1_452d_bb1f_4ad410d398ff, &v12);
  if ( ActivationFactory != -2147221164 )
  {
    if ( ActivationFactory < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x292,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
        (const char *)(unsigned int)ActivationFactory,
        (int)v12);
    if ( !v12 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x293,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
        v3);
    v13 = 0LL;
    v4 = (**v12)(v12, &GUID_64652a6a_1d85_45b9_84f0_b7a1316ac766, &v13);
    if ( v4 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x296,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
        (const char *)(unsigned int)v4,
        (int)v12);
    v5 = v13;
    v6 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v13 + 56LL);
    v7 = (_QWORD *)((char *)this + 48);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
    v8 = v6(v5, (char *)this + 48);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x298,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
        (const char *)(unsigned int)v8,
        (int)v12);
    v14 = this;
    Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Devices::Lights::Internal::AmbientManager___Windows::Devices::Lights::Internal::AmbientDeviceMappingChangedEventArgs_____lambda_83a6d5673f7f1c2812f02265aa1e897b___(
      (__int64 *)&v15,
      (__int64)&v14);
    v9 = (__int64)v15;
    (*(void (__fastcall **)(_QWORD, LampArrayRawInputProvider *, char *))(*(_QWORD *)*v7 + 48LL))(
      *v7,
      v15,
      (char *)this + 352);
    v15 = this;
    Microsoft::WRL::Callback_Windows::Foundation::IEventHandler_bool___lambda_701f9db595b52d3fc136544516ee8948___(
      (__int64 *)&v14,
      (__int64)&v15);
    v10 = (__int64)v14;
    (*(void (__fastcall **)(_QWORD, LampArrayRawInputProvider *, char *))(*(_QWORD *)*v7 + 64LL))(
      *v7,
      v14,
      (char *)this + 360);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v13);
  }
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v12);
  return 0LL;
}

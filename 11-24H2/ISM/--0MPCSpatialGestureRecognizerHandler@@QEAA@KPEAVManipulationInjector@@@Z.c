/*
 * XREFs of ??0MPCSpatialGestureRecognizerHandler@@QEAA@KPEAVManipulationInjector@@@Z @ 0x1800C2478
 * Callers:
 *     ??0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z @ 0x1800BCC58 (--0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18006CD7C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?RegisterSpatialEventHandlers@MPCSpatialGestureRecognizerHandler@@AEAAXXZ @ 0x1800C407C (-RegisterSpatialEventHandlers@MPCSpatialGestureRecognizerHandler@@AEAAXXZ.c)
 *     ?SetMode@MPCSpatialGestureRecognizerHandler@@AEAAXW4MPC2DGestureMode@@@Z @ 0x1800C454C (-SetMode@MPCSpatialGestureRecognizerHandler@@AEAAXW4MPC2DGestureMode@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
MPCSpatialGestureRecognizerHandler *__fastcall MPCSpatialGestureRecognizerHandler::MPCSpatialGestureRecognizerHandler(
        MPCSpatialGestureRecognizerHandler *this,
        int a2,
        struct ManipulationInjector *a3)
{
  __int64 *v4; // r14
  __int64 *v5; // r15
  __int64 *v6; // r12
  __int64 v7; // rbx
  int ActivationFactory; // eax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64 *); // rdi
  int v11; // eax
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, GUID *, __int64 *); // rbx
  int v14; // eax
  __int64 v15; // rbx
  int v16; // eax
  __int64 v18[2]; // [rsp+20h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  __int64 v20; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v18[1] = (__int64)this;
  *(_QWORD *)this = &MPCSpatialGestureRecognizerHandler::`vftable';
  *((_DWORD *)this + 2) = a2;
  v4 = (__int64 *)((char *)this + 16);
  *((_QWORD *)this + 2) = 0LL;
  v5 = (__int64 *)((char *)this + 24);
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  v6 = (__int64 *)((char *)this + 120);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((_BYTE *)this + 172) = 0;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 0;
  *((_BYTE *)this + 200) = 0;
  *((_QWORD *)this + 26) = a3;
  v18[0] = 0LL;
  v20 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.UI.Input.Spatial.SpatialGestureRecognizer",
    0x32u,
    0x31u);
  v7 = v20;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v18);
  ActivationFactory = RoGetActivationFactory(v7, &GUID_77214186_57b9_3150_8382_698b24e264d0, v18);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x31,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)ActivationFactory,
      v18[0]);
  v9 = v18[0];
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v18[0] + 48LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v4);
  v11 = v10(v9, 0LL, v4);
  if ( v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x32,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v11,
      v18[0]);
  v12 = *v4;
  v13 = **(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))*v4;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v5);
  v14 = v13(v12, &GUID_10d1aeec_4246_416e_9cb0_e8273ec2e793, v5);
  if ( v14 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x33,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v14,
      v18[0]);
  MPCSpatialGestureRecognizerHandler::RegisterSpatialEventHandlers(this);
  MPCSpatialGestureRecognizerHandler::SetMode(this, 0LL);
  v20 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Perception.PerceptionTimestampHelper",
    0x2Du,
    0x2Cu);
  v15 = v20;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v6);
  v16 = RoGetActivationFactory(v15, &GUID_d2b11f53_48f3_4131_9edc_4979a97e16bd, v6);
  if ( v16 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v16,
      v18[0]);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v18);
  return this;
}

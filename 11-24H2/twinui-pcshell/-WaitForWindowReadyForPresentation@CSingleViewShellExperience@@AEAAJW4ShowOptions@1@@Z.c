/*
 * XREFs of ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x1800AFB9C
 * Callers:
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x1800AF9CC (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180026C3C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z @ 0x18003ABCC (-Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z.c)
 *     ?Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x1800AE428 (-Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ??1WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1800AFB70 (--1WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800B0560 (--1-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderT_ea_1800B0560.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800B0670 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflec.c)
 *     ?reset@?$shared_object@V?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800B0774 (-reset@-$shared_object@V-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflector_ea_1800B0774.c)
 *     ?StartActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0I_N11@Z @ 0x1800B07D0 (-StartActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0I_N11@.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1801D6E78 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIClientWindo.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_71ae74f74888d637c85562ef224bc48a___ @ 0x1806808F8 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal-_ea_1806808F8.c)
 *     _lambda_71ae74f74888d637c85562ef224bc48a_::_lambda_71ae74f74888d637c85562ef224bc48a_ @ 0x180680A0C (_lambda_71ae74f74888d637c85562ef224bc48a_--_lambda_71ae74f74888d637c85562ef224bc48a_.c)
 *     _lambda_71ae74f74888d637c85562ef224bc48a_::__lambda_71ae74f74888d637c85562ef224bc48a_ @ 0x180680C0C (_lambda_71ae74f74888d637c85562ef224bc48a_--__lambda_71ae74f74888d637c85562ef224bc48a_.c)
 *     _lambda_6914baa2bbb41478f35591fe55a15932_::operator() @ 0x180680F54 (_lambda_6914baa2bbb41478f35591fe55a15932_--operator().c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CSingleViewShellExperience::WaitForWindowReadyForPresentation(__int64 a1, int a2)
{
  bool v3; // r15
  bool v4; // si
  unsigned int v5; // r14d
  const unsigned __int16 *StringRawBuffer; // rdi
  const unsigned __int16 *v7; // rbx
  char v8; // r12
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rbx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rcx
  int v15; // eax
  int v16; // ebx
  char v17; // bl
  int v18; // edi
  IUnknown *v19; // rax
  IUnknown *v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rsi
  int v24; // eax
  int v25; // r14d
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // eax
  const unsigned __int16 *v29; // rbx
  const unsigned __int16 *v30; // rax
  __int64 v31; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v33[2]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v34[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+70h] [rbp-98h]
  __int64 v36; // [rsp+78h] [rbp-90h] BYREF
  __int64 v37; // [rsp+80h] [rbp-88h] BYREF
  __int128 v38; // [rsp+88h] [rbp-80h]
  int v39[2]; // [rsp+98h] [rbp-70h] BYREF
  int v40; // [rsp+A0h] [rbp-68h] BYREF
  char v41; // [rsp+A4h] [rbp-64h]
  int v42; // [rsp+C8h] [rbp-40h] BYREF
  const char *v43; // [rsp+D0h] [rbp-38h]
  __int64 v44; // [rsp+D8h] [rbp-30h]
  char v45; // [rsp+E0h] [rbp-28h]
  int v46; // [rsp+E8h] [rbp-20h]
  char v47[152]; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v48; // [rsp+188h] [rbp+80h]
  int v49; // [rsp+198h] [rbp+90h]
  __int64 v50; // [rsp+1A0h] [rbp+98h]
  int *v51; // [rsp+1A8h] [rbp+A0h]
  __int64 v52; // [rsp+1B0h] [rbp+A8h] BYREF
  _QWORD v53[3]; // [rsp+1B8h] [rbp+B0h] BYREF
  int v54; // [rsp+1D0h] [rbp+C8h]
  int *v55; // [rsp+1D8h] [rbp+D0h]
  char v56; // [rsp+1E0h] [rbp+D8h]
  _BYTE v57[368]; // [rsp+1E8h] [rbp+E0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+390h] [rbp+288h]

  LODWORD(v32) = a2;
  v33[0] = -1;
  (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 24) + 352LL))(*(_QWORD *)(a1 + 24), v33);
  v3 = *(_QWORD *)(a1 + 120) != 0LL;
  v4 = *(_DWORD *)(a1 + 72) != 0;
  v5 = v33[0];
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 16), 0LL);
  v7 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 8), 0LL);
  v40 = 0;
  v41 = 0;
  v45 = 0;
  v42 = 0;
  v43 = "WaitForWindowReadyForPresentation";
  v44 = 0LL;
  v46 = 0;
  v48 = 0LL;
  memset_0(v47, 0, sizeof(v47));
  v8 = 1;
  v49 = 1;
  v50 = 0LL;
  v51 = &v40;
  v52 = 0LL;
  v53[0] = 0LL;
  v53[1] = v39;
  v53[2] = 0LL;
  v54 = 0;
  v55 = &v42;
  v56 = 0;
  *(_QWORD *)v39 = &SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::`vftable';
  SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::StartActivity(
    (SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *)v39,
    v7,
    StringRawBuffer,
    v5,
    v4,
    v3,
    *(_BYTE *)(a1 + 53));
  v34[0] = v39;
  v34[1] = a1;
  LOBYTE(v35) = 1;
  v31 = 0LL;
  v9 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 24);
  v10 = **v9;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v31);
  v11 = v10(v9, &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e, &v31);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x337,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v11);
    v13 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
LABEL_4:
    LOBYTE(v35) = 0;
    lambda_6914baa2bbb41478f35591fe55a15932_::operator()(v34);
LABEL_5:
    *(_QWORD *)v39 = &SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::`vftable';
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(v39);
    wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v53);
    wil::details::shared_object<wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v52);
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>(&v40);
    return v12;
  }
  if ( *(_DWORD *)(a1 + 72) )
  {
    *(_DWORD *)(a1 + 72) = 4;
LABEL_10:
    v16 = 0;
    goto LABEL_11;
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 24) + 344LL))(*(_QWORD *)(a1 + 24), 4LL);
  v16 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6A,
      (int)"Desktop\\internal\\Shell\\inc\\private\\NavigationLevelOverrideHelper.h",
      (const char *)(unsigned int)v15);
  }
  else
  {
    *(_DWORD *)(a1 + 76) = 4;
    v16 = 0;
  }
  if ( v16 >= 0 )
    goto LABEL_10;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x80,
    (int)"Desktop\\internal\\Shell\\inc\\private\\NavigationLevelOverrideHelper.h",
    (const char *)(unsigned int)v16);
LABEL_11:
  if ( v16 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x33A,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v16);
  v17 = v32;
  if ( (v32 & 1) != 0
    || (v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 72LL))(*(_QWORD *)(a1 + 80)), v18 >= 0)
    || (v17 & 4) == 0 )
  {
    if ( !*(_QWORD *)(a1 + 120) )
    {
      *(_QWORD *)&v38 = a1;
      *((_QWORD *)&v38 + 1) = CSingleViewShellExperience::OnClientWindowReadyForPresentationChanged;
      v19 = (IUnknown *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
      v20 = v19;
      if ( v19 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>(v19);
        *(_OWORD *)&v20[2].lpVtbl = v38;
        v20->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>::*)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,_lambda_e2a4807c8e61afd010bc972c5955136a_,-1,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>::`vftable';
      }
      else
      {
        v20 = 0LL;
      }
      *(_QWORD *)&v38 = v20;
      v21 = *(_QWORD *)(a1 + 96);
      v36 = v21;
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
      v32 = 0LL;
      CMarshaledInterface::Marshal(&v32, &GUID_8cecdf70_ced8_5bc7_84a7_d80615fedcdd, v20, 2);
      v22 = lambda_71ae74f74888d637c85562ef224bc48a_::_lambda_71ae74f74888d637c85562ef224bc48a_(
              (unsigned int)v57,
              (unsigned int)&v36,
              a1,
              (unsigned int)&v32,
              (__int64)v39);
      Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_71ae74f74888d637c85562ef224bc48a___(
        &v37,
        v22);
      lambda_71ae74f74888d637c85562ef224bc48a_::__lambda_71ae74f74888d637c85562ef224bc48a_(v57);
      v23 = v37;
      v24 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v31 + 80LL))(v31, v37, a1 + 120);
      v25 = v24;
      if ( v24 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x374,
          (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v24);
        if ( v23 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        if ( v20 )
          ((void (__fastcall *)(IUnknown *))v20->lpVtbl->Release)(v20);
        v26 = v31;
        if ( v31 )
        {
          v31 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        }
        v12 = v25;
        goto LABEL_4;
      }
      v8 = 0;
      LOBYTE(v35) = 0;
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      if ( v20 )
        ((void (__fastcall *)(IUnknown *))v20->lpVtbl->Release)(v20);
    }
    v27 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
    if ( v8 )
    {
      LOBYTE(v35) = 0;
      lambda_6914baa2bbb41478f35591fe55a15932_::operator()(v34);
    }
    v12 = 0;
    goto LABEL_5;
  }
  v28 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 72LL))(*(_QWORD *)(a1 + 88), a1);
  if ( v28 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x340,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v28);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v31);
  v29 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 16), 0LL);
  v30 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 8), 0LL);
  SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::Stop(
    (SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *)v39,
    v30,
    v29);
  SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::~WaitForWindowReadyForPresentation((SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *)v39);
  return (unsigned int)v18;
}

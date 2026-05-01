/*
 * XREFs of ?RaisePropertyChangedEvent@CToastCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x1800B4688
 * Callers:
 *     ?OnVisibilityChanged@CToastCenterExperienceManager@@AEAAXXZ @ 0x1800B452C (-OnVisibilityChanged@CToastCenterExperienceManager@@AEAAXXZ.c)
 *     ?HotKeyInvoked@CToastCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windows@@@Z @ 0x1803840B0 (-HotKeyInvoked@CToastCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Window.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800250C8 (-Stop@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1?$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800268FC (--1-$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ?reset@?$shared_object@V?$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180026BE4 (-reset@-$shared_object@V-$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180026C3C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026ED4 (-Destroy@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18003D4C4 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@1@Z @ 0x18003E8B0 (-Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundat.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x18003EE68 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?StartActivity@EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAAXPEBG_N@Z @ 0x1800B4A90 (-StartActivity@EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAAXPEBG_N@Z.c)
 *     ?NoOp_ApplicationNotRunning@EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x1800B4B4C (-NoOp_ApplicationNotRunning@EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180122FC0 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??1EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x180201650 (--1EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ?EventRaised@EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x1802140F0 (-EventRaised@EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B7C4C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CToastCenterExperienceManager::RaisePropertyChangedEvent(
        CToastCenterExperienceManager *this,
        const unsigned __int16 *a2,
        char a3)
{
  HRESULT v7; // eax
  int v8; // edx
  unsigned int v9; // r8d
  int v10; // eax
  unsigned __int64 v11; // rbx
  int v12; // edx
  unsigned int v13; // r8d
  unsigned __int64 v14; // rdi
  unsigned int v15; // eax
  UINT32 v16; // edx
  HRESULT v17; // eax
  int v18; // edx
  __int64 v19; // r8
  int v20; // eax
  int v21; // edx
  unsigned int v22; // r8d
  int v23; // edi
  struct Windows::Foundation::Collections::IPropertySet *v24; // r14
  struct Windows::Foundation::Collections::IPropertySet *v25; // rcx
  unsigned int v26; // eax
  UINT32 v27; // edx
  HRESULT v28; // eax
  int v29; // edx
  unsigned int v30; // r8d
  struct Windows::Foundation::Collections::IPropertySet *v31; // r9
  int v32; // eax
  struct Windows::Foundation::Collections::IPropertySet *v33; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v34; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v35; // [rsp+20h] [rbp-E0h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v36; // [rsp+28h] [rbp-D8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING string; // [rsp+48h] [rbp-B8h] BYREF
  void **v39; // [rsp+50h] [rbp-B0h] BYREF
  int v40; // [rsp+58h] [rbp-A8h] BYREF
  char v41; // [rsp+5Ch] [rbp-A4h]
  int v42; // [rsp+80h] [rbp-80h] BYREF
  const char *v43; // [rsp+88h] [rbp-78h]
  __int64 v44; // [rsp+90h] [rbp-70h]
  char v45; // [rsp+98h] [rbp-68h]
  int v46; // [rsp+A0h] [rbp-60h]
  _BYTE v47[152]; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v48; // [rsp+140h] [rbp+40h]
  int v49; // [rsp+150h] [rbp+50h]
  __int64 v50; // [rsp+158h] [rbp+58h]
  int *v51; // [rsp+160h] [rbp+60h]
  volatile signed __int32 *v52; // [rsp+168h] [rbp+68h] BYREF
  _QWORD v53[3]; // [rsp+170h] [rbp+70h] BYREF
  int v54; // [rsp+188h] [rbp+88h]
  int *v55; // [rsp+190h] [rbp+90h]
  char v56; // [rsp+198h] [rbp+98h]
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  v40 = 0;
  v41 = 0;
  v45 = 0;
  v42 = 0;
  v43 = "EM_RaiseApplicationEventActivity";
  v44 = 0LL;
  v46 = 0;
  v48 = 0LL;
  memset_0(v47, 0, sizeof(v47));
  v49 = 1;
  v50 = 0LL;
  v51 = &v40;
  v52 = 0LL;
  v53[0] = 0LL;
  v53[1] = &v39;
  v53[2] = 0LL;
  v54 = 0;
  v55 = &v42;
  v56 = 0;
  v39 = &ToastCenterTelemetry::EM_RaiseApplicationEventActivity::`vftable';
  ToastCenterTelemetry::EM_RaiseApplicationEventActivity::StartActivity(
    (ToastCenterTelemetry::EM_RaiseApplicationEventActivity *)&v39,
    a2,
    a3);
  if ( !*((_QWORD *)this + 16) )
  {
    ToastCenterTelemetry::EM_RaiseApplicationEventActivity::NoOp_ApplicationNotRunning((ToastCenterTelemetry::EM_RaiseApplicationEventActivity *)&v39);
LABEL_3:
    wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)&v39, 0);
    v39 = &ToastCenterTelemetry::EM_RaiseApplicationEventActivity::`vftable';
    wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((volatile signed __int32 **)&v39);
    wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v53);
    wil::details::shared_object<wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v52);
    wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>(&v40);
    return 0LL;
  }
  v35 = 0LL;
  string = 0LL;
  v7 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
  if ( v7 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7, v8, v9);
    goto LABEL_33;
  }
  v10 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
          string,
          &v35);
  LODWORD(v11) = v10;
  if ( v10 < 0 )
    goto LABEL_17;
  v36 = v35;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v36);
  string = 0LL;
  v11 = -1LL;
  v14 = -1LL;
  do
    ++v14;
  while ( a2[v14] );
  if ( v14 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v12, v13);
    __debugbreak();
  }
  v15 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v14, v12, v13);
  v16 = v15 - 1;
  if ( (unsigned int)v14 < v15 )
    v16 = v14;
  v17 = WindowsCreateStringReference(a2, v16, &hstringHeader, &string);
  if ( v17 < 0 )
  {
LABEL_33:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17, v18, v19);
    __debugbreak();
  }
  v20 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(&v36, (__int64)string, v19, a3);
  v23 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x342,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v20);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v36);
    v34 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v34 + 16LL))(v34);
    }
    LODWORD(v11) = v23;
    goto LABEL_19;
  }
  v24 = v35;
  string = 0LL;
  do
    ++v11;
  while ( aPropertychange[v11] );
  if ( v11 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v21, v22);
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33F,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
    v25 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v25 + 16LL))(v25);
    }
LABEL_19:
    v39 = &ToastCenterTelemetry::EM_RaiseApplicationEventActivity::`vftable';
    wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((volatile signed __int32 **)&v39);
    wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v53);
    wil::details::shared_object<wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v52);
    wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>(&v40);
    return (unsigned int)v11;
  }
  v26 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v11, v21, v22);
  v27 = v26 - 1;
  if ( (unsigned int)v11 < v26 )
    v27 = v11;
  v28 = WindowsCreateStringReference(L"PropertyChanged", v27, &hstringHeader, &string);
  if ( v28 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v28, v29, v30);
    __debugbreak();
  }
  v32 = CSingleViewShellExperience::Reactivate((CToastCenterExperienceManager *)((char *)this + 104), string, v24, v31);
  LODWORD(v11) = v32;
  if ( v32 >= 0 )
  {
    ToastCenterTelemetry::EM_RaiseApplicationEventActivity::EventRaised((ToastCenterTelemetry::EM_RaiseApplicationEventActivity *)&v39);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v36);
    v33 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v33 + 16LL))(v33);
    }
    goto LABEL_3;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x343,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v32);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v36);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35);
  ToastCenterTelemetry::EM_RaiseApplicationEventActivity::~EM_RaiseApplicationEventActivity((ToastCenterTelemetry::EM_RaiseApplicationEventActivity *)&v39);
  return (unsigned int)v11;
}

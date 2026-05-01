/*
 * XREFs of ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x18003E8E4
 * Callers:
 *     ?RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x18003E340 (-RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@1@Z @ 0x18003E8B0 (-Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundat.c)
 *     ?ReactivateHelper@CStartExperienceManager@@AEAAJPEBGI@Z @ 0x180122FF8 (-ReactivateHelper@CStartExperienceManager@@AEAAJPEBGI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?StartActivity@Reactivate@SingleViewExperienceTelemetry@@QEAAXPEBG00@Z @ 0x180024850 (-StartActivity@Reactivate@SingleViewExperienceTelemetry@@QEAAXPEBG00@Z.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180026C3C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1Reactivate@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18003A1B8 (--1Reactivate@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003ED20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18003EDBC (--0-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 *     ?reset@?$shared_object@V?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18003F1C8 (-reset@-$shared_object@V-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflector_ea_18003F1C8.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18003F224 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ??1?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18003F2D4 (--1-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderT_ea_18003F2D4.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18003F308 (--0-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflector_ea_18003F308.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b534361c50cb4958853f48f5e7b1e06a___ @ 0x1801AE5F0 (Windows--Internal--ComTaskPool--QueueTask__lambda_b534361c50cb4958853f48f5e7b1e06a___.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall ExperienceManagerUtils::RaiseReactivatedEvent(
        ExperienceManagerUtils *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING string,
        HSTRING a6)
{
  const unsigned __int16 *StringRawBuffer; // rsi
  const unsigned __int16 *v10; // rdi
  const unsigned __int16 *v11; // rbx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v12; // rdx
  HWND v13; // rsi
  HRESULT v14; // eax
  int v15; // ebx
  int v16; // eax
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, HSTRING, int *); // rdi
  int v19; // eax
  __int64 v20; // rcx
  HSTRING v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v30; // [rsp+28h] [rbp-D8h] BYREF
  HSTRING newString; // [rsp+30h] [rbp-D0h] BYREF
  HRESULT v32; // [rsp+38h] [rbp-C8h]
  unsigned int v33; // [rsp+40h] [rbp-C0h]
  __int64 v34; // [rsp+48h] [rbp-B8h] BYREF
  HWND v35; // [rsp+50h] [rbp-B0h] BYREF
  HSTRING v36; // [rsp+58h] [rbp-A8h] BYREF
  HRESULT v37; // [rsp+60h] [rbp-A0h]
  __int64 v38; // [rsp+68h] [rbp-98h] BYREF
  __int64 v39; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v40[43]; // [rsp+78h] [rbp-88h] BYREF
  void **v41; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v42[272]; // [rsp+1D8h] [rbp+D8h] BYREF
  _BYTE v43[8]; // [rsp+2E8h] [rbp+1E8h] BYREF
  _BYTE v44[48]; // [rsp+2F0h] [rbp+1F0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+378h] [rbp+278h]

  v33 = (unsigned int)a2;
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v10 = WindowsGetStringRawBuffer(a4, 0LL);
  v11 = WindowsGetStringRawBuffer(a3, 0LL);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)&v41);
  v41 = &SingleViewExperienceTelemetry::Reactivate::`vftable';
  SingleViewExperienceTelemetry::Reactivate::StartActivity(
    (SingleViewExperienceTelemetry::Reactivate *)&v41,
    v11,
    v10,
    StringRawBuffer);
  if ( !this || (v13 = ExperienceManagerUtils::WindowFromViewWrapper(this, v12)) == 0LL )
  {
    v15 = -2147023496;
    goto LABEL_29;
  }
  WindowsDeleteString(0LL);
  newString = 0LL;
  v14 = WindowsDuplicateString(string, &newString);
  v15 = v14;
  v32 = v14;
  if ( v14 >= 0 )
  {
    *(_QWORD *)v29 = 0LL;
    if ( a6 )
    {
      v30 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
      v16 = RoCreatePropertySetSerializer(&v30);
      v15 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA3,
          (int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
          (const char *)(unsigned int)v16);
        v26 = v30;
        if ( v30 )
        {
          v30 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        }
        goto LABEL_16;
      }
      v17 = v30;
      v18 = *(__int64 (__fastcall **)(__int64, HSTRING, int *))(*(_QWORD *)v30 + 48LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v29);
      v19 = v18(v17, a6, v29);
      v15 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA4,
          (int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
          (const char *)(unsigned int)v19);
        v27 = v30;
        if ( v30 )
        {
          v30 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        }
        v28 = *(_QWORD *)v29;
        if ( *(_QWORD *)v29 )
        {
          *(_QWORD *)v29 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
        }
        goto LABEL_16;
      }
      v20 = v30;
      if ( v30 )
      {
        v30 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      v15 = v32;
    }
    v34 = 0LL;
    v35 = v13;
    v36 = 0LL;
    v37 = v15;
    if ( v15 >= 0 )
    {
      v21 = newString;
      WindowsDeleteString(0LL);
      v37 = WindowsDuplicateString(v21, &v36);
    }
    v38 = *(_QWORD *)v29;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v38);
    v39 = v34;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v39);
    wil::ActivityBase<SingleViewExperienceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
      v40,
      &v41);
    v40[0] = &SingleViewExperienceTelemetry::Reactivate::`vftable';
    v15 = Windows::Internal::ComTaskPool::QueueTask__lambda_b534361c50cb4958853f48f5e7b1e06a___(v23, v22, v33, &v35);
    SingleViewExperienceTelemetry::Reactivate::~Reactivate((SingleViewExperienceTelemetry::Reactivate *)v40);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v39);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v38);
    WindowsDeleteString(v36);
    if ( v15 >= 0 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
      v24 = *(_QWORD *)v29;
      if ( *(_QWORD *)v29 )
      {
        *(_QWORD *)v29 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
      v15 = 0;
      goto LABEL_16;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCD,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v15);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v29);
    WindowsDeleteString(newString);
    newString = 0LL;
LABEL_29:
    SingleViewExperienceTelemetry::Reactivate::~Reactivate((SingleViewExperienceTelemetry::Reactivate *)&v41);
    return (unsigned int)v15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9C,
    (int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
    (const char *)(unsigned int)v14);
LABEL_16:
  WindowsDeleteString(newString);
  newString = 0LL;
  v41 = &SingleViewExperienceTelemetry::Reactivate::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v41);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v44);
  wil::details::shared_object<wil::ActivityBase<SingleViewExperienceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v43);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>(v42);
  return (unsigned int)v15;
}

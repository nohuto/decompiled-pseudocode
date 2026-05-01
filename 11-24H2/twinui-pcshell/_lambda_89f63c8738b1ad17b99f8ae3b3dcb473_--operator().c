/*
 * XREFs of _lambda_89f63c8738b1ad17b99f8ae3b3dcb473_::operator() @ 0x1803B6348
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_89f63c8738b1ad17b99f8ae3b3dcb473___::Run @ 0x1803BF4C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_89f63c8738b1ad17b99f8ae3b3dcb473___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG0PEAUIInspectable@@0PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x180039708 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG0PEAUIInspectable@@0PEAUIPropertySet@Co.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x18003EE68 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18003F64C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005F300 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D25C0 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x1800D2A64 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180122FC0 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?Stop@?$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18017A194 (-Stop@-$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsPr.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x1801B0838 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 *     ??$InvokeAll@PEAVUndockedSearchAppExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVUndockedSearchAppExperienceManager@@$$T@Z @ 0x1801C7634 (--$InvokeAll@PEAVUndockedSearchAppExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     ??0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation@3@@Z @ 0x1801D2B00 (--0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation.c)
 *     ??1UndockedSearchAppExperienceManager_ActivateSearch@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x1801ECC6C (--1UndockedSearchAppExperienceManager_ActivateSearch@SearchAppExperienceManagerTelemetry@@QEAA@X.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18020B8F4 (--0-$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag__ea_18020B8F4.c)
 *     ??$as@UIInspectable@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x18022C760 (--$as@UIInspectable@@@IUnknown@Foundation@Windows@winrt@@QEBA-A_PXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall lambda_89f63c8738b1ad17b99f8ae3b3dcb473_::operator()(__int64 a1)
{
  int v2; // eax
  __int64 v3; // r8
  int v4; // eax
  char v5; // si
  __int64 v6; // r8
  int v7; // eax
  struct Windows::Foundation::Collections::IPropertySet *v8; // rdi
  const unsigned __int16 *v9; // rax
  __int64 *v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rbx
  DWORD v15; // edx
  const char *v16; // r9
  __int64 result; // rax
  int v18; // [rsp+20h] [rbp-218h]
  int v19; // [rsp+20h] [rbp-218h]
  struct Windows::Foundation::Collections::IPropertySet *v20; // [rsp+40h] [rbp-1F8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-1F0h] BYREF
  __int64 v22; // [rsp+50h] [rbp-1E8h] BYREF
  __int64 v23; // [rsp+58h] [rbp-1E0h] BYREF
  _OWORD v24[2]; // [rsp+60h] [rbp-1D8h] BYREF
  _BYTE v25[48]; // [rsp+80h] [rbp-1B8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+B0h] [rbp-188h] BYREF
  __int64 v27; // [rsp+C8h] [rbp-170h]
  _QWORD v28[34]; // [rsp+D0h] [rbp-168h] BYREF
  _DWORD *v29; // [rsp+1E0h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+0h]

  wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v28,
    a1);
  v28[0] = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch::`vftable';
  if ( *v29 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v24,
      (struct wil::details::IFailureCallback *)v28,
      (const struct wil::details::StoredCallContextInfo *)(v29 + 10));
  }
  else
  {
    memset(v24, 0, sizeof(v24));
    wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
      (wil::details::ThreadFailureCallbackHolder *)v25,
      0LL,
      0LL,
      0);
  }
  v20 = 0LL;
  v27 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v2 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         v27,
         (__int64 *)&v20);
  try
  {
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC2C,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v2,
        v18);
    Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
      (Windows::Internal::ShellHelpers::PropertySetHelper *)&v22,
      v20);
    v27 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"IsActivatedFromExperienceManager",
      0x21u,
      0x20u);
    v4 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(&v22, v27, v3, 1);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC2E,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v4,
        v18);
    v5 = *(_BYTE *)(a1 + 344);
    if ( v5 )
    {
      v27 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"IsFirstSwitchPreLaunchActivation",
        0x21u,
        0x20u);
      v7 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(&v22, v27, v6, 1);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xC31,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
          (const char *)(unsigned int)v7,
          v18);
    }
    v8 = v20;
    winrt::Windows::Foundation::IUnknown::as<IInspectable>((_QWORD *)(a1 + 352), (__int64)&v23);
    v9 = winrt::hstring::c_str((winrt::hstring *)(a1 + 336));
    v12 = (int)ActivateApplicationForExperienceWithPropertySet((__int64)v9, v11, *v10, 0LL, (__int64)v8, 1u, 0LL);
    if ( v23 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v23);
    v21 = 0LL;
    if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>((_QWORD *)(a1 + 368), &v21) >= 0 && v21 )
    {
      if ( !*(_BYTE *)(a1 + 360) )
      {
        v13 = ExperienceManagerUtils::PostToUIThread(
                *(__int64 (__fastcall ****)(ExperienceManagerUtils *, GUID *, LPVOID *))(*(_QWORD *)(a1 + 376) + 48LL),
                *(struct IUnknown **)(a1 + 376),
                (void *)0x402,
                v12);
        if ( v13 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xC44,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
            (const char *)(unsigned int)v13);
      }
      if ( (int)v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xC46,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
          (const char *)(unsigned int)v12,
          v19);
      v14 = *(_QWORD *)(a1 + 376);
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<UndockedSearchAppExperienceManager *,std::nullptr_t>(
        v14 + 712,
        v14);
      if ( !v5 )
        ExperienceManagerUtils::PostToUIThread(
          *(__int64 (__fastcall ****)(ExperienceManagerUtils *, GUID *, LPVOID *))(v14 + 48),
          (struct IUnknown *)v14,
          (void *)0x401,
          11LL);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
    wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v28,
      v15);
    wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v24);
    SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch::~UndockedSearchAppExperienceManager_ActivateSearch((SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch *)v28);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v20) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xC57,
                     (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
                     v16);
    wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v24);
    SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch::~UndockedSearchAppExperienceManager_ActivateSearch((SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch *)v28);
    return (unsigned int)v20;
  }
  return result;
}

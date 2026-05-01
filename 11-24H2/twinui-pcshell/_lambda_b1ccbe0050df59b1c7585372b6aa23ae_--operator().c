/*
 * XREFs of _lambda_b1ccbe0050df59b1c7585372b6aa23ae_::operator() @ 0x1804330B4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b1ccbe0050df59b1c7585372b6aa23ae___::Run @ 0x180433D60 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b1ccbe0050df59b1c7585372b6aa23ae___--Run.c)
 * Callees:
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x180015544 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x1800155E4 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18005D41C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800634D8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801068A4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x18017F364 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ?IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x1801F12C8 (-IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802ED88C (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$HostedViewClosingTimeoutWaitExceeded@AEAK@ViewManagerInteropTraceLogging@@SAXAEAK@Z @ 0x1804325A8 (--$HostedViewClosingTimeoutWaitExceeded@AEAK@ViewManagerInteropTraceLogging@@SAXAEAK@Z.c)
 *     ??1?$unique_ptr@VCCrashDetector@@U?$default_delete@VCCrashDetector@@@std@@@std@@QEAA@XZ @ 0x180432F84 (--1-$unique_ptr@VCCrashDetector@@U-$default_delete@VCCrashDetector@@@std@@@std@@QEAA@XZ.c)
 *     ?CreateEventWithSDDL@@YAJPEBG0HPEAPEAX@Z @ 0x180433744 (-CreateEventWithSDDL@@YAJPEBG0HPEAPEAX@Z.c)
 *     ?_StartMonitoringThreadOfWindow@CCrashDetector@@AEAAJPEAUHWND__@@PEAVCHandler@1@@Z @ 0x180433F4C (-_StartMonitoringThreadOfWindow@CCrashDetector@@AEAAJPEAUHWND__@@PEAVCHandler@1@@Z.c)
 *     ?NavigateInternal@WindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180440E78 (-NavigateInternal@WindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall lambda_b1ccbe0050df59b1c7585372b6aa23ae_::operator()(__int64 a1)
{
  __int64 v2; // rbx
  HRESULT v3; // eax
  void **v4; // rax
  HRESULT v5; // eax
  const unsigned __int16 *v6; // rdx
  int v7; // r8d
  int v8; // eax
  int *v9; // r8
  int IsAppBeingDebugged; // eax
  RTL_SRWLOCK *v11; // rax
  const char *v12; // r9
  RTL_SRWLOCK *v13; // rdi
  int v14; // r14d
  struct CCrashDetector::CHandler *v15; // rax
  struct CCrashDetector::CHandler *v16; // r8
  int started; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  int v21; // eax
  const char *v22; // r9
  int v24; // [rsp+20h] [rbp-98h] BYREF
  unsigned __int16 v25[2]; // [rsp+24h] [rbp-94h] BYREF
  __int64 *v26; // [rsp+28h] [rbp-90h] BYREF
  HANDLE hHandle; // [rsp+30h] [rbp-88h] BYREF
  RTL_SRWLOCK *v28; // [rsp+38h] [rbp-80h] BYREF
  LPCWSTR lpName[2]; // [rsp+40h] [rbp-78h] BYREF
  char v30; // [rsp+50h] [rbp-68h]
  IID v31; // [rsp+60h] [rbp-58h] BYREF
  _BYTE v32[32]; // [rsp+70h] [rbp-48h] BYREF
  IID rclsid; // [rsp+90h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 8);
  lpName[1] = (LPCWSTR)v2;
  v30 = 1;
  rclsid = 0LL;
  v3 = CoCreateGuid(&rclsid);
  try
  {
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA7,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v3,
        v24);
    lpName[0] = 0LL;
    v4 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)lpName);
    v5 = StringFromCLSID(&rclsid, (LPOLESTR *)v4);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA9,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v5,
        v24);
    hHandle = 0LL;
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hHandle,
      0LL);
    v8 = CreateEventWithSDDL(lpName[0], v6, v7, &hHandle);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xAB,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v8,
        v24);
    *(_DWORD *)v25 = 0;
    IsAppBeingDebugged = CallerIdentity::ApiPolicyChecker::IsAppBeingDebugged(
                           *(CallerIdentity::ApiPolicyChecker **)(a1 + 24),
                           v25,
                           v9);
    if ( IsAppBeingDebugged < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xAD,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)IsAppBeingDebugged,
        v24);
    v11 = (RTL_SRWLOCK *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v11;
    v28 = v11;
    if ( v11 )
    {
      v11->Ptr = 0LL;
      v11[1].Ptr = 0LL;
      v11[2].Ptr = 0LL;
    }
    else
    {
      v13 = 0LL;
    }
    v28 = v13;
    if ( !v13 )
      wil::details::in1diag3::_Throw_NullAlloc(
        retaddr,
        (void *)0xAF,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        v12);
    v24 = 15000;
    v26 = 0LL;
    CRPCTimeout::CRPCTimeout((CRPCTimeout *)v32, 0x3A98u);
    v14 = *(_DWORD *)v25;
    if ( *(_DWORD *)v25 )
    {
      CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v32);
      v15 = (struct CCrashDetector::CHandler *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
      v16 = v15;
      if ( v15 )
      {
        *(_QWORD *)v15 = off_18073E958;
        *((_QWORD *)v15 + 1) = hHandle;
      }
      else
      {
        v16 = 0LL;
      }
      started = CCrashDetector::_StartMonitoringThreadOfWindow(v13, *(HWND *)(a1 + 16), v16);
      if ( started < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xC0,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
          (const char *)(unsigned int)started,
          v24);
    }
    v18 = (__int64)v26;
    v26 = 0LL;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    v19 = CoreQueryWindowService(
            *(_QWORD *)(a1 + 16),
            &GUID_f9eb9c6d_5a6a_43c7_b0d1_82d3c81e33fc,
            &GUID_f9eb9c6d_5a6a_43c7_b0d1_82d3c81e33fc,
            &v26);
    if ( v19 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC2,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v19,
        v24);
    v20 = *v26;
    v31 = rclsid;
    v21 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, IID *))(v20 + 24))(v26, *(_QWORD *)(a1 + 16), &v31);
    if ( v21 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC4,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v21,
        v24);
    CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v32);
    if ( WaitForSingleObject(hHandle, v14 != 0 ? -1 : 15000) == 258 )
      ViewManagerInteropTraceLogging::HostedViewClosingTimeoutWaitExceeded<unsigned long &>(&v24);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v26);
    std::unique_ptr<CCrashDetector>::~unique_ptr<CCrashDetector>((CCrashDetector **)&v28);
    wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hHandle);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)lpName);
    (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**(_QWORD **)(v2 + 288) + 200LL))(*(_QWORD *)(v2 + 288), &v28);
    WindowWrapperBase::NavigateInternal(v2 + 8, 0LL);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v28);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xCD,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
                           v22);
  }
  return 0LL;
}

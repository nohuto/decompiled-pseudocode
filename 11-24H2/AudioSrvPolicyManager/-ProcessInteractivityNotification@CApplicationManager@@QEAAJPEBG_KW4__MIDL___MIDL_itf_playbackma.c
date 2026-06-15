/*
 * XREFs of ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180002BC4
 * Callers:
 *     PbmReportAppInteractivityChange @ 0x1800194A0 (PbmReportAppInteractivityChange.c)
 *     ?OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z @ 0x18001A04C (-OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z.c)
 * Callees:
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1800033B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003470 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEBG@Z @ 0x18000348C (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBG@std@@YA-AV-.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x180003C10 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180004B70 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180012ED0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800155D4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1800179F0 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180017D74 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     __security_check_cookie @ 0x1800201B0 (__security_check_cookie.c)
 *     ?CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ @ 0x180031914 (-CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ.c)
 *     ?PostDelayedInteractivityNotification@CApplication@@IEAAJ$$QEAV?$function@$$A6AXXZ@std@@@Z @ 0x180033140 (-PostDelayedInteractivityNotification@CApplication@@IEAAJ$$QEAV-$function@$$A6AXXZ@std@@@Z.c)
 *     std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_bc5d681da67d9384ebd56f302790ab0c__&_0_ @ 0x180035C40 (std--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_bc5d681da67d9384ebd56f30.c)
 *     ?ShouldInteractivityNotificationBeDelayed@CApplicationManager@@QEAAHPEAVCApplication@@W4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@@Z @ 0x1800396A4 (-ShouldInteractivityNotificationBeDelayed@CApplicationManager@@QEAAHPEAVCApplication@@W4__MIDL__.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall CApplicationManager::ProcessInteractivityNotification(
        __int64 a1,
        const unsigned __int16 *a2,
        CApplication *a3,
        unsigned int a4,
        unsigned int a5)
{
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  const struct _tlgProvider_t *v10; // rax
  int v11; // r8d
  int v12; // r9d
  int Application; // eax
  unsigned int v14; // edi
  CApplication *v16; // rbx
  int ShouldInteractivityNotificationBeDelayed; // r14d
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  __int64 v26; // rax
  int v27; // eax
  int v28; // [rsp+20h] [rbp-F8h]
  int v29; // [rsp+40h] [rbp-D8h] BYREF
  struct _RTL_CRITICAL_SECTION *v30; // [rsp+48h] [rbp-D0h] BYREF
  CApplication *v31; // [rsp+50h] [rbp-C8h] BYREF
  const unsigned __int16 *v32; // [rsp+58h] [rbp-C0h] BYREF
  _BYTE v33[8]; // [rsp+60h] [rbp-B8h] BYREF
  std::_Ref_count_base *v34; // [rsp+68h] [rbp-B0h]
  _BYTE v35[8]; // [rsp+70h] [rbp-A8h] BYREF
  std::_Ref_count_base *v36; // [rsp+78h] [rbp-A0h]
  CApplication *v37; // [rsp+80h] [rbp-98h]
  BOOL v38; // [rsp+88h] [rbp-90h]
  unsigned int v39; // [rsp+8Ch] [rbp-8Ch]
  const unsigned __int16 *v40; // [rsp+90h] [rbp-88h] BYREF
  _BYTE v41[64]; // [rsp+A0h] [rbp-78h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+0h]

  v32 = a2;
  v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v30 = v9;
  v10 = AudioSrvPolicyManagerTelemetryProvider::Provider();
  if ( *(_DWORD *)v10 > 4u )
  {
    v29 = a4 == 0;
    v31 = a3;
    v40 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (_DWORD)v10,
      (unsigned int)&unk_180057C35,
      v11,
      v12,
      (__int64)&v40,
      (__int64)&v31,
      (__int64)&v29);
  }
  v31 = 0LL;
  v29 = 0;
  Application = CApplicationManager::GetApplication(
                  (CApplicationManager *)a1,
                  a2,
                  (unsigned __int64)a3,
                  a5,
                  &v31,
                  1,
                  &v29);
  v14 = Application;
  if ( Application < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBCB,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)Application,
      v28);
    if ( v9 )
      LeaveCriticalSection(v9);
    return v14;
  }
  v16 = v31;
  ShouldInteractivityNotificationBeDelayed = CApplicationManager::ShouldInteractivityNotificationBeDelayed(a1, v31, a4);
  std::make_shared<std::wstring,unsigned short const * &>(v33, &v32);
  std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(v35, v33);
  v37 = a3;
  v38 = a4 == 0;
  v39 = a5;
  if ( ShouldInteractivityNotificationBeDelayed )
  {
    std::function_void___cdecl_void__::function_void___cdecl_void____lambda_bc5d681da67d9384ebd56f302790ab0c____0_(
      v41,
      v35);
    v18 = CApplication::PostDelayedInteractivityNotification(v16);
    std::_Func_class<void,>::_Tidy(v41);
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBDB,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v18,
        v28);
      if ( v36 )
        std::_Ref_count_base::_Decref(v36);
      if ( v34 )
        std::_Ref_count_base::_Decref(v34);
LABEL_25:
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(
        &v30,
        v22,
        v23,
        v24);
      return (unsigned int)v18;
    }
  }
  else
  {
    v25 = CApplication::CleanupDelayedInteractivityNotification(v16);
    v18 = v25;
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBE0,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v25,
        v28);
      if ( v36 )
        std::_Ref_count_base::_Decref(v36);
      if ( v34 )
        std::_Ref_count_base::_Decref(v34);
      goto LABEL_25;
    }
    v26 = std::function_void___cdecl_void__::function_void___cdecl_void____lambda_bc5d681da67d9384ebd56f302790ab0c____0_(
            v41,
            v35);
    v27 = QueueGenericWorkItem(v26);
    v18 = v27;
    if ( v27 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBE3,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v27,
        v28);
      if ( v36 )
        std::_Ref_count_base::_Decref(v36);
      if ( v34 )
        std::_Ref_count_base::_Decref(v34);
      goto LABEL_25;
    }
  }
  if ( v36 )
    std::_Ref_count_base::_Decref(v36);
  if ( v34 )
    std::_Ref_count_base::_Decref(v34);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(
    &v30,
    v19,
    v20,
    v21);
  return 0LL;
}

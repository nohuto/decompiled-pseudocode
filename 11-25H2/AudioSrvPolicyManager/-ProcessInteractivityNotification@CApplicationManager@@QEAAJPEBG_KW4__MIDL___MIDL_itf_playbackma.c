/*
 * XREFs of ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x18000B110
 * Callers:
 *     PbmReportAppInteractivityChange @ 0x180019370 (PbmReportAppInteractivityChange.c)
 *     ?OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z @ 0x180019F1C (-OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z.c)
 * Callees:
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180006D70 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000B8F0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18000BDB0 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEBG@Z @ 0x18000D098 (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBG@std@@YA-AV-.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000D140 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000D180 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180014E54 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1800178C0 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180017C44 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 *     ?CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ @ 0x1800342F4 (-CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ.c)
 *     ?PostDelayedInteractivityNotification@CApplication@@IEAAJ$$QEAV?$function@$$A6AXXZ@std@@@Z @ 0x180035B20 (-PostDelayedInteractivityNotification@CApplication@@IEAAJ$$QEAV-$function@$$A6AXXZ@std@@@Z.c)
 *     std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_bc5d681da67d9384ebd56f302790ab0c__&_0_ @ 0x180038620 (std--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_bc5d681da67d9384ebd56f30.c)
 *     ?ShouldInteractivityNotificationBeDelayed@CApplicationManager@@QEAAHPEAVCApplication@@W4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@@Z @ 0x18003BECC (-ShouldInteractivityNotificationBeDelayed@CApplicationManager@@QEAAHPEAVCApplication@@W4__MIDL__.c)
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
  int v19; // eax
  __int64 *v20; // rax
  int v21; // eax
  int v22; // [rsp+40h] [rbp-D8h] BYREF
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+48h] [rbp-D0h] BYREF
  CApplication *v24; // [rsp+50h] [rbp-C8h] BYREF
  const unsigned __int16 *v25; // [rsp+58h] [rbp-C0h] BYREF
  _BYTE v26[8]; // [rsp+60h] [rbp-B8h] BYREF
  std::_Ref_count_base *v27; // [rsp+68h] [rbp-B0h]
  _BYTE v28[8]; // [rsp+70h] [rbp-A8h] BYREF
  std::_Ref_count_base *v29; // [rsp+78h] [rbp-A0h]
  CApplication *v30; // [rsp+80h] [rbp-98h]
  BOOL v31; // [rsp+88h] [rbp-90h]
  unsigned int v32; // [rsp+8Ch] [rbp-8Ch]
  const unsigned __int16 *v33; // [rsp+90h] [rbp-88h] BYREF
  _BYTE v34[64]; // [rsp+A0h] [rbp-78h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+0h]

  v25 = a2;
  v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v23 = v9;
  v10 = AudioSrvPolicyManagerTelemetryProvider::Provider();
  if ( *(_DWORD *)v10 > 4u )
  {
    v22 = a4 == 0;
    v24 = a3;
    v33 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (_DWORD)v10,
      (unsigned int)&unk_18005AC7D,
      v11,
      v12,
      (__int64)&v33,
      (__int64)&v24,
      (__int64)&v22);
  }
  v24 = 0LL;
  v22 = 0;
  Application = CApplicationManager::GetApplication(
                  (CApplicationManager *)a1,
                  a2,
                  (unsigned __int64)a3,
                  a5,
                  &v24,
                  1,
                  &v22);
  v14 = Application;
  if ( Application < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC28,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)Application);
    if ( v9 )
      LeaveCriticalSection(v9);
    return v14;
  }
  v16 = v24;
  ShouldInteractivityNotificationBeDelayed = CApplicationManager::ShouldInteractivityNotificationBeDelayed(a1, v24, a4);
  std::make_shared<std::wstring,unsigned short const * &>(v26, &v25);
  std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(v28, v26);
  v30 = a3;
  v31 = a4 == 0;
  v32 = a5;
  if ( ShouldInteractivityNotificationBeDelayed )
  {
    std::function_void___cdecl_void__::function_void___cdecl_void____lambda_bc5d681da67d9384ebd56f302790ab0c____0_(
      v34,
      v28);
    v18 = CApplication::PostDelayedInteractivityNotification(v16);
    std::_Func_class<void,>::_Tidy(v34);
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC38,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v18);
      if ( v29 )
        std::_Ref_count_base::_Decref(v29);
      if ( v27 )
        std::_Ref_count_base::_Decref(v27);
LABEL_25:
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v23);
      return (unsigned int)v18;
    }
  }
  else
  {
    v19 = CApplication::CleanupDelayedInteractivityNotification(v16);
    v18 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC3D,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v19);
      if ( v29 )
        std::_Ref_count_base::_Decref(v29);
      if ( v27 )
        std::_Ref_count_base::_Decref(v27);
      goto LABEL_25;
    }
    v20 = (__int64 *)std::function_void___cdecl_void__::function_void___cdecl_void____lambda_bc5d681da67d9384ebd56f302790ab0c____0_(
                       v34,
                       v28);
    v21 = QueueGenericWorkItem(v20);
    v18 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC40,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v21);
      if ( v29 )
        std::_Ref_count_base::_Decref(v29);
      if ( v27 )
        std::_Ref_count_base::_Decref(v27);
      goto LABEL_25;
    }
  }
  if ( v29 )
    std::_Ref_count_base::_Decref(v29);
  if ( v27 )
    std::_Ref_count_base::_Decref(v27);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v23);
  return 0LL;
}

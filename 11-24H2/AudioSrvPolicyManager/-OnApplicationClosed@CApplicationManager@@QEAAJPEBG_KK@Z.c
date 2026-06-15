/*
 * XREFs of ?OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x180038194
 * Callers:
 *     _lambda_55bbdd01f859b2b681de89e14de0bd19_::operator() @ 0x180003ADC (_lambda_55bbdd01f859b2b681de89e14de0bd19_--operator().c)
 *     std::_Func_impl_no_alloc__lambda_7fa36116be3e294e551541c666ff9548__void_::_Do_call @ 0x18003AB00 (std--_Func_impl_no_alloc__lambda_7fa36116be3e294e551541c666ff9548__void_--_Do_call.c)
 * Callees:
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180002250 (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1800033B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003470 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x180003C10 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18000D680 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800155D4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ??1?$com_ptr_t@VCApplication@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002849C (--1-$com_ptr_t@VCApplication@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCApplication@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCApplication@@@Z @ 0x180030DF8 (--4-$com_ptr_t@VCApplication@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCApplication@@@Z.c)
 *     ?DisconnectExclusiveModeStreams@CProcess@@QEAAXXZ @ 0x180031D60 (-DisconnectExclusiveModeStreams@CProcess@@QEAAXXZ.c)
 *     ?IsVoipCallCapableAndCallIsActive@CApplication@@QEAAHXZ @ 0x180032C20 (-IsVoipCallCapableAndCallIsActive@CApplication@@QEAAHXZ.c)
 *     ?SendAppClosureNotification@CApplication@@QEAAXXZ @ 0x1800341E4 (-SendAppClosureNotification@CApplication@@QEAAXXZ.c)
 *     ?UpdateAppState@CApplication@@QEAAXHPEAH@Z @ 0x180034AE8 (-UpdateAppState@CApplication@@QEAAXHPEAH@Z.c)
 *     ?RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z @ 0x1800390F0 (-RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180039720 (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?TsSessionIsActiveMediaApplication@@YA_NPEAVCApplication@@@Z @ 0x1800400EC (-TsSessionIsActiveMediaApplication@@YA_NPEAVCApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::OnApplicationClosed(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        CApplication *a3,
        int a4)
{
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  int Application; // r15d
  __int64 v12; // rbx
  CApplication *v13; // rbx
  CProcess *v14; // rcx
  CProcess **Next; // rax
  void *v17[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v18; // [rsp+90h] [rbp+40h] BYREF
  CApplication *v19; // [rsp+98h] [rbp+48h] BYREF

  v8 = AudioSrvPolicyManagerTelemetryProvider::Provider();
  if ( *(_DWORD *)v8 > 4u )
  {
    LODWORD(v18) = a4;
    v19 = a3;
    v17[0] = (void *)a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)v8,
      byte_180057C8A,
      v9,
      v10,
      v17,
      (__int64)&v19,
      (__int64)&v18);
  }
  Application = 0;
  v12 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v17[0] = (char *)this + 32;
  if ( a2 )
  {
    if ( *a2 )
    {
      Application = CApplicationManager::GetApplication(this, a2, (__int64)a3, a4, &v19, 0, 0LL);
      if ( Application >= 0 )
      {
        v13 = v19;
        wil::com_ptr_t<CApplication,wil::err_returncode_policy>::operator=(&v18, (volatile int *)v19);
        if ( !(unsigned int)CApplication::IsVoipCallCapableAndCallIsActive(v13) && *((_DWORD *)v13 + 163) )
          CApplicationManager::SilenceAndRevokePLMExemption(this, v13);
        CApplication::UpdateAppState(v13, 0, 0LL);
        if ( TsSessionIsActiveMediaApplication(v13) )
          TsSessionIdRemoveActiveMediaApp(a4, v13);
        CApplication::SendAppClosureNotification(v13);
        if ( *((_BYTE *)v13 + 720) )
          Application = CApplicationManager::RemoveApplication(this, &v19);
        v12 = v18;
      }
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)v17);
  if ( v12 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v12 + 32));
    v17[0] = (void *)(v12 + 32);
    v19 = *(CApplication **)(v12 + 72);
    while ( v19 )
    {
      Next = (CProcess **)ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(
                            (__int64)v14,
                            (_QWORD **)&v19);
      v14 = *Next;
      if ( !*((_DWORD *)*Next + 104) )
        CProcess::DisconnectExclusiveModeStreams(v14);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)v17);
  }
  wil::com_ptr_t<CApplication,wil::err_returncode_policy>::~com_ptr_t<CApplication,wil::err_returncode_policy>(&v18);
  return (unsigned int)Application;
}

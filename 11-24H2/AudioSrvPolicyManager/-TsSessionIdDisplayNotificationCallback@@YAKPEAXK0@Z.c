/*
 * XREFs of ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x18003F830
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x18000151C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1800033B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003470 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180004B70 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18000D6B0 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180013EA0 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?TsSessionRequiresReevaluationOfAudioInStandby@@YA_NPEBVTSSession@@@Z @ 0x180040A44 (-TsSessionRequiresReevaluationOfAudioInStandby@@YA_NPEBVTSSession@@@Z.c)
 *     McTemplateU0qtt_EventWriteTransfer @ 0x180041290 (McTemplateU0qtt_EventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionIdDisplayNotificationCallback(__int64 a1, __int64 a2, _DWORD *a3)
{
  DWORD v4; // edi
  int v5; // ecx
  struct TSSession *v6; // r14
  int v7; // r15d
  int v8; // esi
  const struct _tlgProvider_t *v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+48h] [rbp-11h] BYREF
  __int64 (__fastcall **v14)(); // [rsp+50h] [rbp-9h] BYREF
  DWORD v15; // [rsp+58h] [rbp-1h]
  __int64 (__fastcall ***v16)(); // [rsp+88h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  struct TSSession *v18; // [rsp+D0h] [rbp+77h] BYREF
  BOOL v19; // [rsp+D8h] [rbp+7Fh]

  v4 = a1;
  CWindowsPolicyManager::Lock(a1, &v13);
  if ( a3[4] != 4 )
    goto LABEL_13;
  if ( *(_QWORD *)a3 != *(_QWORD *)&GUID_SESSION_DISPLAY_STATUS.Data1 )
    goto LABEL_13;
  if ( *((_QWORD *)a3 + 1) != *(_QWORD *)GUID_SESSION_DISPLAY_STATUS.Data4 )
    goto LABEL_13;
  v18 = 0LL;
  if ( (int)TsSessionFromSessionId(v4, 0, &v18) < 0 )
    goto LABEL_13;
  v6 = v18;
  v7 = *((_DWORD *)v18 + 253);
  v8 = a3[5] != 0;
  *((_DWORD *)v18 + 253) = v8;
  if ( (Microsoft_Windows_AudioEnableBits & 0x10) != 0 )
    McTemplateU0qtt_EventWriteTransfer(v5, (unsigned int)&EVT_Session_Display_State, v4, v8, v7 != v8);
  v9 = AudioSrvPolicyManagerTelemetryProvider::Provider();
  if ( *(_DWORD *)v9 > 4u )
  {
    LODWORD(v18) = *((_DWORD *)v6 + 253);
    v19 = v7 != v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v9,
      (__int64)&unk_180057E47);
  }
  if ( v7 != v8
    && TsSessionRequiresReevaluationOfAudioInStandby(v6)
    && (v14 = off_1800512D8, v15 = v4, v16 = &v14, v10 = QueueGenericWorkItem((__int64 *)&v14), v11 = v10, v10 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x800,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v10);
  }
  else
  {
LABEL_13:
    v11 = 0;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v13);
  return v11;
}

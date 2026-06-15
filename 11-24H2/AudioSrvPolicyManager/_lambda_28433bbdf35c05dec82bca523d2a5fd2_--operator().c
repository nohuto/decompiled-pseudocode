/*
 * XREFs of _lambda_28433bbdf35c05dec82bca523d2a5fd2_::operator() @ 0x18003D8DC
 * Callers:
 *     ?TsSessionConsoleLockedNotificationCallback@@YAKPEAXK0@Z @ 0x18003ECC0 (-TsSessionConsoleLockedNotificationCallback@@YAKPEAXK0@Z.c)
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
__int64 __fastcall lambda_28433bbdf35c05dec82bca523d2a5fd2_::operator()(__int64 a1)
{
  __int64 v2; // rdi
  DWORD v3; // esi
  int v4; // eax
  int v5; // ecx
  unsigned int v6; // ebx
  __int64 v7; // r9
  struct TSSession *v8; // r14
  int v9; // r15d
  int v10; // ebx
  const struct _tlgProvider_t *v11; // rax
  __int64 (__fastcall **v13)(); // [rsp+40h] [rbp-19h] BYREF
  DWORD v14; // [rsp+48h] [rbp-11h]
  __int64 (__fastcall ***v15)(); // [rsp+78h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  struct TSSession *v17; // [rsp+C0h] [rbp+67h] BYREF
  int v18; // [rsp+C8h] [rbp+6Fh]
  DWORD v19; // [rsp+D0h] [rbp+77h]
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+D8h] [rbp+7Fh] BYREF

  CWindowsPolicyManager::Lock(a1, &v20);
  v2 = **(_QWORD **)a1;
  if ( *(_DWORD *)(v2 + 16) != 4
    || *(_QWORD *)v2 != *(_QWORD *)&GUID_CONSOLE_LOCKED.Data1
    || *(_QWORD *)(v2 + 8) != *(_QWORD *)GUID_CONSOLE_LOCKED.Data4 )
  {
    v6 = -2147024809;
    v7 = 2147942487LL;
    goto LABEL_15;
  }
  v3 = **(_DWORD **)(a1 + 8);
  v17 = 0LL;
  v4 = TsSessionFromSessionId(v3, 0, &v17);
  v6 = v4;
  if ( v4 < 0 )
    goto LABEL_5;
  v8 = v17;
  v9 = *((_DWORD *)v17 + 254);
  v10 = *(_BYTE *)(v2 + 20) != 0;
  *((_DWORD *)v17 + 254) = v10;
  if ( (Microsoft_Windows_AudioEnableBits & 0x10) != 0 )
    McTemplateU0qtt_EventWriteTransfer(v5, (unsigned int)&EVT_Console_Locked, v3, v10, v9 != v10);
  v11 = AudioSrvPolicyManagerTelemetryProvider::Provider();
  if ( *(_DWORD *)v11 > 4u )
  {
    LODWORD(v17) = v9 != v10;
    v18 = *((_DWORD *)v8 + 254);
    v19 = v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v11,
      (__int64)&unk_180057DE6);
  }
  if ( v9 != v10 && TsSessionRequiresReevaluationOfAudioInStandby(v8) )
  {
    v13 = off_1800512A8;
    v14 = v3;
    v15 = &v13;
    v4 = QueueGenericWorkItem((__int64 *)&v13);
    v6 = v4;
    if ( v4 < 0 )
    {
LABEL_5:
      v7 = (unsigned int)v4;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x829,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)v7);
      goto LABEL_16;
    }
  }
  v6 = 0;
LABEL_16:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v20);
  return v6;
}

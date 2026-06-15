/*
 * XREFs of ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x1800402B8
 * Callers:
 *     ?TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18003EC1C (-TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x18003F688 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionIdLogon@@YAJK@Z @ 0x18003FCEC (-TsSessionIdLogon@@YAJK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180001974 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1800033B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003470 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002B05C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueSessionMuteUnmute@@YAJKK@Z @ 0x18003E62C (-QueueSessionMuteUnmute@@YAJKK@Z.c)
 */

void __fastcall TsSessionNewPrimaryConsoleAudioSession(struct TSSession *a1)
{
  bool v2; // zf
  _QWORD *i; // rax
  _DWORD *v4; // r8
  unsigned int *v5; // rax
  unsigned int v6; // edi
  const struct _tlgProvider_t *v7; // rax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+50h] [rbp+18h] BYREF

  EnterCriticalSection(&stru_180064A78);
  v2 = *(_DWORD *)a1 == 0;
  v10 = &stru_180064A78;
  if ( !v2 )
  {
    for ( i = *(_QWORD **)qword_180064AA8; ; i = (_QWORD *)*i )
    {
      if ( i == (_QWORD *)qword_180064AA8 )
        goto LABEL_8;
      v4 = (_DWORD *)i[3];
      if ( *v4 )
      {
        if ( v4[278] )
          break;
      }
    }
    if ( i == (_QWORD *)qword_180064AA8 )
    {
LABEL_8:
      v5 = 0LL;
      goto LABEL_10;
    }
    v5 = (unsigned int *)i[3];
LABEL_10:
    if ( v5 != (unsigned int *)a1 )
    {
      v6 = -2;
      if ( v5 )
      {
        v5[278] = 0;
        v6 = *v5;
        if ( g_MaxSessions <= 1 )
          v5[9] = 1;
      }
      *((_DWORD *)a1 + 9) = 0;
      *((_DWORD *)a1 + 278) = 1;
      if ( g_MaxSessions <= 1 )
      {
        v7 = AudioSrvPolicyManagerTelemetryProvider::Provider();
        if ( *(_DWORD *)v7 > 4u )
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (__int64)v7,
            (__int64)&unk_1800580B5);
        v8 = QueueSessionMuteUnmute(v6, *(_DWORD *)a1);
        if ( v8 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            883LL,
            (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
            (const char *)(unsigned int)v8);
      }
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v10);
}

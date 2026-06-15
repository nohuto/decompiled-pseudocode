/*
 * XREFs of ?TsSessionIdConnect@@YAXK@Z @ 0x18003F688
 * Callers:
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18003EB20 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800019F0 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1800033B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003470 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18000D6B0 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180013EA0 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@I@Z @ 0x18001C404 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@I@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002B05C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueSessionMuteUnmute@@YAJKK@Z @ 0x18003E62C (-QueueSessionMuteUnmute@@YAJKK@Z.c)
 *     ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x1800402B8 (-TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x1800404F0 (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x1800476CC (-GetTsAudioProtocol@@YAIK@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TsSessionIdConnect(DWORD a1)
{
  int TsAudioProtocol; // edi
  __int64 v3; // rcx
  struct TSSession *v4; // rbx
  const struct _tlgProvider_t *v5; // rax
  int v6; // eax
  const struct _tlgProvider_t *v7; // rax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct TSSession *v10; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+50h] [rbp+18h] BYREF

  TsAudioProtocol = GetTsAudioProtocol(a1);
  CWindowsPolicyManager::Lock(v3, &v11);
  v10 = 0LL;
  if ( (int)TsSessionFromSessionId(a1, 1, &v10) >= 0 )
  {
    v4 = v10;
    TsSessionRefreshSessionInformation(v10);
    TsSessionUpdateAudioProtocol(v4, TsAudioProtocol);
    if ( *((_QWORD *)v4 + 3) == -130LL || !*(_WORD *)(*((_QWORD *)v4 + 3) + 130LL) )
    {
      v5 = AudioSrvPolicyManagerTelemetryProvider::Provider();
      if ( *(_DWORD *)v5 > 4u )
      {
        LODWORD(v10) = *(_DWORD *)v4;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
          (__int64)v5,
          (__int64)&unk_180058056);
      }
      *((_DWORD *)v4 + 9) = 0;
      *((_DWORD *)v4 + 278) = 0;
      v6 = QueueSessionMuteUnmute(0xFFFFFFFF, *(_DWORD *)v4);
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          1488LL,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)(unsigned int)v6);
    }
    if ( TsAudioProtocol )
    {
      if ( TsAudioProtocol != 0xFFFF )
      {
        v7 = AudioSrvPolicyManagerTelemetryProvider::Provider();
        if ( *(_DWORD *)v7 > 4u )
        {
          LODWORD(v10) = *(_DWORD *)v4;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
            (__int64)v7,
            (__int64)&unk_18005801A);
        }
        *((_DWORD *)v4 + 9) = 0;
        *((_DWORD *)v4 + 278) = 0;
        v8 = QueueSessionMuteUnmute(0xFFFFFFFF, *(_DWORD *)v4);
        if ( v8 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            1522LL,
            (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
            (const char *)(unsigned int)v8);
      }
    }
    else if ( *(_QWORD *)(*((_QWORD *)v4 + 3) + 200LL) )
    {
      TsSessionNewPrimaryConsoleAudioSession(v4);
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v11);
}

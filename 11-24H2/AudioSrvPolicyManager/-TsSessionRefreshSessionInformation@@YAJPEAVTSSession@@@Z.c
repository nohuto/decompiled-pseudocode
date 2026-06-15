/*
 * XREFs of ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x1800404F0
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x18003ED14 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x18003F688 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionIdLogon@@YAJK@Z @ 0x18003FCEC (-TsSessionIdLogon@@YAJK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800019F0 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1800033B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003470 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18001B9E0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x18002269C (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1800229C8 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ?TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z @ 0x1800405E4 (-TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z.c)
 */

__int64 __fastcall TsSessionRefreshSessionInformation(DWORD *a1)
{
  const struct _tlgProvider_t *v2; // rax
  DWORD v3; // edx
  const char *v4; // r9
  LPWSTR v6; // rsi
  void *v7; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD v9; // [rsp+50h] [rbp+8h] BYREF
  DWORD pBytesReturned; // [rsp+58h] [rbp+10h] BYREF
  LPWSTR ppBuffer; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+68h] [rbp+20h] BYREF

  v2 = AudioSrvPolicyManagerTelemetryProvider::Provider();
  if ( *(_DWORD *)v2 > 4u )
  {
    v9 = *a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (__int64)v2,
      (__int64)&unk_180058125);
  }
  v3 = *a1;
  pBytesReturned = 0;
  ppBuffer = 0LL;
  if ( !WTSQuerySessionInformationW(0LL, v3, WTSSessionInfo, &ppBuffer, &pBytesReturned) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x31E,
             (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
             v4);
  EnterCriticalSection(&stru_180064A78);
  v6 = ppBuffer;
  v12 = &stru_180064A78;
  v7 = (void *)*((_QWORD *)a1 + 3);
  if ( v7 )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)&v9);
    WTSFreeMemory(v7);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v9);
  }
  *((_QWORD *)a1 + 3) = v6;
  TsSessionRefreshUserSid((struct TSSession *)a1);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v12);
  return 0LL;
}

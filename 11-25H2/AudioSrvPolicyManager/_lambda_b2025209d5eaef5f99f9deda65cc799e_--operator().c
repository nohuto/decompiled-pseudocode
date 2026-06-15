/*
 * XREFs of _lambda_b2025209d5eaef5f99f9deda65cc799e_::operator() @ 0x18004038C
 * Callers:
 *     wil::init_once_nothrow__lambda_b2025209d5eaef5f99f9deda65cc799e___ @ 0x18003F61C (wil--init_once_nothrow__lambda_b2025209d5eaef5f99f9deda65cc799e___.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x18000151C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800019F0 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000B8F0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003C314 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@$$BY0A@U_WTS_SESSION_INFOW@@U?$function_deleter@P6AXPEAX@Z$1?WTSFreeMemory@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18003FC84 (--1-$out_param_t@V-$unique_ptr@$$BY0A@U_WTS_SESSION_INFOW@@U-$function_deleter@P6AXPEAX@Z$1-WTSF.c)
 *     ?QueueVolumeRefreshForAllTsSessions@@YAXXZ @ 0x180040EBC (-QueueVolumeRefreshForAllTsSessions@@YAXXZ.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180043A4C (McTemplateU0q_EventWriteTransfer.c)
 */

__int64 __fastcall lambda_b2025209d5eaef5f99f9deda65cc799e_::operator()(__int64 a1)
{
  BOOL v1; // ebx
  __int64 v2; // rbx
  BOOL v3; // esi
  const char *v4; // r9
  int v5; // esi
  const struct _tlgProvider_t *v6; // rax
  PVOID v7; // rcx
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID v11; // rcx
  PVOID v12; // rcx
  unsigned int v13; // ebx
  PVOID v15; // [rsp+48h] [rbp-30h] BYREF
  PVOID pMemory; // [rsp+50h] [rbp-28h] BYREF
  PVOID *p_pMemory; // [rsp+58h] [rbp-20h] BYREF
  PWTS_SESSION_INFOW ppSessionInfo; // [rsp+60h] [rbp-18h] BYREF
  char v19; // [rsp+68h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+20h]
  DWORD pCount; // [rsp+A0h] [rbp+28h] BYREF
  int v22; // [rsp+A4h] [rbp+2Ch]
  DWORD pBytesReturned; // [rsp+A8h] [rbp+30h] BYREF
  int v24; // [rsp+B0h] [rbp+38h]
  int v25; // [rsp+B8h] [rbp+40h]

  v22 = HIDWORD(a1);
  v15 = 0LL;
  pCount = 0;
  ppSessionInfo = 0LL;
  p_pMemory = &v15;
  v19 = 1;
  v1 = WTSEnumerateSessionsW(0LL, 0, 1u, &ppSessionInfo, &pCount);
  wil::details::out_param_t<wistd::unique_ptr<_WTS_SESSION_INFOW [0],wil::function_deleter<void (*)(void *),&void WTSFreeMemory(void *)>>>::~out_param_t<wistd::unique_ptr<_WTS_SESSION_INFOW [0],wil::function_deleter<void (*)(void *),&void WTSFreeMemory(void *)>>>((__int64)&p_pMemory);
  if ( v1 )
  {
    v2 = 0LL;
    if ( pCount )
    {
      while ( 1 )
      {
        pMemory = 0LL;
        pBytesReturned = 0;
        ppSessionInfo = 0LL;
        p_pMemory = &pMemory;
        v19 = 1;
        v3 = WTSQuerySessionInformationW(
               0LL,
               *((_DWORD *)v15 + 6 * v2),
               WTSSessionInfoEx,
               (LPWSTR *)&ppSessionInfo,
               &pBytesReturned);
        if ( !v3 )
          wil::details::in1diag3::_Log_GetLastError(
            retaddr,
            (void *)0x704,
            (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
            v4);
        wil::details::out_param_t<wistd::unique_ptr<_WTS_SESSION_INFOW [0],wil::function_deleter<void (*)(void *),&void WTSFreeMemory(void *)>>>::~out_param_t<wistd::unique_ptr<_WTS_SESSION_INFOW [0],wil::function_deleter<void (*)(void *),&void WTSFreeMemory(void *)>>>((__int64)&p_pMemory);
        if ( v3 )
        {
          v5 = *((_DWORD *)pMemory + 4);
          v6 = AudioSrvPolicyManagerTelemetryProvider::Provider();
          if ( *(_DWORD *)v6 > 4u )
          {
            v25 = g_GlobalUserPresent;
            v24 = v5;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              (__int64)v6,
              (__int64)&unk_18005B008);
          }
          if ( v5 == 1 )
            break;
        }
        v7 = pMemory;
        pMemory = 0LL;
        if ( v7 )
          WTSFreeMemory(v7);
        v2 = (unsigned int)(v2 + 1);
        if ( (unsigned int)v2 >= pCount )
          goto LABEL_19;
      }
      g_GlobalUserPresent = 1;
      v8 = AudioSrvPolicyManagerTelemetryProvider::Provider();
      if ( *(_DWORD *)v8 > 4u )
      {
        v24 = *((_DWORD *)v15 + 6 * v2);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
          (__int64)v8,
          (__int64)&unk_18005AFD3);
      }
      if ( (Microsoft_Windows_AudioEnableBits & 0x10) != 0 )
        McTemplateU0q_EventWriteTransfer(v10, v9, *((unsigned int *)v15 + 6 * v2));
      QueueVolumeRefreshForAllTsSessions();
      v11 = pMemory;
      pMemory = 0LL;
      if ( v11 )
        WTSFreeMemory(v11);
    }
  }
LABEL_19:
  v12 = v15;
  v15 = 0LL;
  v13 = g_GlobalUserPresent == 0 ? 0x80004004 : 0;
  if ( v12 )
    WTSFreeMemory(v12);
  return v13;
}

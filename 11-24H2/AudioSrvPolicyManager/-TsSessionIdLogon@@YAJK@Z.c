/*
 * XREFs of ?TsSessionIdLogon@@YAJK@Z @ 0x18003FCEC
 * Callers:
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18003EB20 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003470 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18000D6B0 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180013EA0 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?RegisterSessionDisplayNotificationCallback@TSSession@@QEAAXXZ @ 0x18003E6DC (-RegisterSessionDisplayNotificationCallback@TSSession@@QEAAXXZ.c)
 *     ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x1800402B8 (-TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x1800404F0 (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionIdLogon(__int64 a1)
{
  DWORD v1; // ebx
  int v2; // eax
  unsigned int v3; // ebx
  struct TSSession *v4; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct TSSession *v7; // [rsp+38h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+40h] [rbp+18h] BYREF

  v1 = a1;
  CWindowsPolicyManager::Lock(a1, &v8);
  v7 = 0LL;
  v2 = TsSessionFromSessionId(v1, 1, &v7);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = v7;
    TsSessionRefreshSessionInformation(v7);
    TSSession::RegisterSessionDisplayNotificationCallback(v4);
    if ( !*((_DWORD *)v4 + 1) )
      TsSessionNewPrimaryConsoleAudioSession(v4);
    g_bIsSystemAsleep = 0;
    g_AppTypesBlockedTillConsoleUnlocked = 0;
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x607,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v2);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v8);
  return v3;
}

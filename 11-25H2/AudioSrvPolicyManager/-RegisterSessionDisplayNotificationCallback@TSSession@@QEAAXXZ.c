/*
 * XREFs of ?RegisterSessionDisplayNotificationCallback@TSSession@@QEAAXXZ @ 0x180040EFC
 * Callers:
 *     ?TsSessionIdLogon@@YAJK@Z @ 0x18004250C (-TsSessionIdLogon@@YAJK@Z.c)
 * Callees:
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18002D4DC (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

void __fastcall TSSession::RegisterSessionDisplayNotificationCallback(TSSession *this)
{
  __int64 v1; // rdx
  _QWORD *v3; // rcx
  unsigned int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // eax
  _QWORD v7[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v1 = *(unsigned int *)this;
  if ( (_DWORD)v1 )
  {
    v3 = (_QWORD *)((char *)this + 1024);
    if ( !*v3 && !*((_QWORD *)this + 129) )
    {
      v7[0] = TsSessionIdDisplayNotificationCallback;
      v7[1] = v1;
      v4 = PowerSettingRegisterNotificationEx(&GUID_SESSION_DISPLAY_STATUS, v1, 2LL, v7, v3);
      if ( v4 )
        wil::details::in1diag3::_Log_Win32(
          retaddr,
          220LL,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)v4);
      v5 = *(unsigned int *)this;
      v8[0] = TsSessionConsoleLockedNotificationCallback;
      v8[1] = v5;
      v6 = PowerSettingRegisterNotificationEx(&GUID_CONSOLE_LOCKED, v5, 2LL, v8, (char *)this + 1032);
      if ( v6 )
        wil::details::in1diag3::_Log_Win32(
          retaddr,
          233LL,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)v6);
    }
  }
}

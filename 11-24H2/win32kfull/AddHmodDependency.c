/*
 * XREFs of AddHmodDependency @ 0x140083E60
 * Callers:
 *     _SetWinEventHook @ 0x140084C1C (_SetWinEventHook.c)
 *     _RegisterDManipHook @ 0x14021A630 (_RegisterDManipHook.c)
 *     ?zzzSetWindowsHookEx@@YAPEAUtagHOOK@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z @ 0x1402396A8 (-zzzSetWindowsHookEx@@YAPEAUtagHOOK@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z.c)
 *     ?zzzSetWindowsHookEx_New@@YAPEAUHHOOK__@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z @ 0x140283CE0 (-zzzSetWindowsHookEx_New@@YAPEAUHHOOK__@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH.c)
 *     _RegisterUserApiHook @ 0x140284A8C (_RegisterUserApiHook.c)
 * Callees:
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_CLIENTLIB@@@?$DomainShared@$$V@@QEAA@XZ @ 0x140084000 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_CLIENTLIB@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall AddHmodDependency(int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  tagDomLock *v7; // [rsp+20h] [rbp-48h] BYREF
  char v8; // [rsp+28h] [rbp-40h]
  char v9; // [rsp+48h] [rbp-20h]

  v1 = a1;
  DomainShared<>::DomainExclusive<DLT_CLIENTLIB>::ObjectLock<>::ObjectLock<>(&v7);
  if ( (int)v1 < *(_DWORD *)(W32GetUserSessionState(v3, v2) + 41456) )
  {
    UserSessionState = W32GetUserSessionState(v5, v4);
    ++*(_DWORD *)(UserSessionState + 4 * v1 + 41652);
  }
  if ( v9 && v7 )
  {
    if ( v8 )
      tagDomLock::UnLockExclusive(v7);
    else
      tagDomLock::UnLockShared(v7);
  }
}

/*
 * XREFs of NtUserRegisterBSDRWindow @ 0x140244A40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140118D30 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

__int64 __fastcall NtUserRegisterBSDRWindow(__int64 a1, unsigned int a2)
{
  LARGE_INTEGER v2; // rbp
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  HANDLE v9; // rbx
  __int64 v10; // rdx
  struct tagQ **v11; // rcx
  _QWORD v12[3]; // [rsp+40h] [rbp-18h] BYREF

  v2.QuadPart = a2;
  v4 = 0LL;
  v5 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( !a1 || (v5 = ValidateHwnd(a1)) != 0 )
  {
    v9 = *(HANDLE *)(W32GetUserSessionState(v7, v6) + 63592);
    if ( PsGetCurrentProcessId() == v9
      || !*(_QWORD *)(W32GetUserSessionState(v11, v10) + 63592) && (unsigned __int8)HasTcbPrivilege() )
    {
      if ( v5 )
      {
        v12[1] = v5;
        v12[0] = W32GetUserSessionState(v11, v10) + 63512;
        HMAssignmentLock(v12, 0LL);
      }
      if ( v2.LowPart )
      {
        v11 = *(struct tagQ ***)(W32GetUserSessionState(v11, v10) + 69296);
        if ( v11 )
          PostEventMessageEx((struct tagTHREADINFO *)v11, v11[59], 0x13u, 0LL, 0x329u, v2, 0xFFFFFFFFLL, 0LL);
      }
      v4 = 1LL;
    }
    else
    {
      UserSetLastError(5);
    }
    UserSessionSwitchLeaveCrit(v11);
    return v4;
  }
  else
  {
    UserSessionSwitchLeaveCrit(v7);
    return 0LL;
  }
}

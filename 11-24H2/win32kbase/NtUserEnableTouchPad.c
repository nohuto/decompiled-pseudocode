/*
 * XREFs of NtUserEnableTouchPad @ 0x1401BA850
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x140042D80 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     EtwTraceUIPISystemError @ 0x14016A710 (EtwTraceUIPISystemError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A5A58 (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     EnablePTPDevices @ 0x1401B16B0 (EnablePTPDevices.c)
 */

_BOOL8 __fastcall NtUserEnableTouchPad(__int64 a1)
{
  int v1; // ebp
  _QWORD *UserSessionState; // rsi
  __int64 v3; // rax
  __int64 v4; // rcx
  BOOL v5; // ebx
  int *v6; // rax
  __int64 v7; // rdi
  __int64 CurrentThreadWin32Thread; // rdi
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // rax
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rax
  _DWORD v14[6]; // [rsp+30h] [rbp-18h] BYREF

  v1 = a1;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v3 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v5 = 0;
  UserSessionState[3] = v3;
  if ( v3 )
  {
    while ( 1 )
    {
      v7 = UserSessionState[2471];
      if ( !v7 )
        break;
      UserSessionState[2471] = *(_QWORD *)(v7 + 16);
      v6 = *(int **)v7;
      *(_QWORD *)(v7 + 16) = 0LL;
      if ( !v6[2] )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
      HMUnlockObject(*(int **)v7);
    }
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  if ( !*(_QWORD *)W32GetUserSessionState(v4) || !IS_USERCRIT_OWNED_AT_ALL() )
    KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
  v14[0] = 0x2000;
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
  v14[1] = -1;
  ++*(_DWORD *)(CurrentThreadWin32Thread + 28);
  v14[2] = 0;
  v10 = PtiCurrent(v9);
  if ( UIPrivilegeIsolation::CheckAccessEx(
         (UIPrivilegeIsolation *)(*((_QWORD *)v10 + 58) + 872LL),
         (const struct tagUIPI_INFO *)v14,
         0LL) )
  {
    LOBYTE(v5) = v1 != 0;
    v5 = EnablePTPDevices(v5);
  }
  else
  {
    v12 = PtiCurrent(v11);
    EtwTraceUIPISystemError(*((PEPROCESS **)v12 + 58), 0LL, 13);
    UserSetLastError(5);
  }
  --*(_DWORD *)(CurrentThreadWin32Thread + 28);
  UserSessionSwitchLeaveCritWithNonPaged();
  return v5;
}

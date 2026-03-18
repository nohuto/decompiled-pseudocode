/*
 * XREFs of NtMITUninitMinuserThread @ 0x1401B9070
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ProtectHandle @ 0x1400DD798 (ProtectHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall NtMITUninitMinuserThread(__int64 a1)
{
  _QWORD *UserSessionState; // rsi
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int *v6; // rax
  __int64 v7; // rdi
  int v8; // edx
  struct tagTHREADINFO *v9; // rdi
  __int64 v10; // rax
  void *v11; // rcx

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v2 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v3 = 0LL;
  UserSessionState[3] = v2;
  v4 = v2;
  if ( v2 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v2 + 528), 0, 0) & 0x1000000) != 0
      && *(char *)(v2 + 1360) >= 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
      if ( CurrentProcessWin32Process )
      {
        if ( *(_QWORD *)CurrentProcessWin32Process && *(_BYTE *)(CurrentProcessWin32Process + 1208) == 1 )
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
      }
    }
  }
  v9 = PtiCurrent(v4);
  v10 = *((_QWORD *)v9 + 170);
  if ( (v10 & 0x1000000) != 0 )
  {
    v11 = (void *)*((_QWORD *)v9 + 95);
    *((_QWORD *)v9 + 170) = v10 & 0xFFFFFFFFFEFFFFFFuLL;
    ProtectHandle(v11, v8, (struct _OBJECT_TYPE *)ExEventObjectType, 0);
    ObfDereferenceObject(*((PVOID *)v9 + 96));
    *((_QWORD *)v9 + 95) = 0LL;
    *((_QWORD *)v9 + 96) = 0LL;
    v3 = 1LL;
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return v3;
}

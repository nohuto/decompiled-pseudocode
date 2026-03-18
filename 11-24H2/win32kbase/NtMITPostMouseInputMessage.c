/*
 * XREFs of NtMITPostMouseInputMessage @ 0x1401B8660
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     PostMouseInputMessage @ 0x140213164 (PostMouseInputMessage.c)
 */

__int64 __fastcall NtMITPostMouseInputMessage(void *Src, unsigned int a2, __int64 a3, _QWORD *a4)
{
  _QWORD *UserSessionState; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  int **v11; // rbx
  unsigned int v12; // ebx
  __int64 v13; // rbx
  _QWORD v15[3]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v16; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v17[4]; // [rsp+40h] [rbp-48h] BYREF

  UserSessionState = (_QWORD *)W32GetUserSessionState(Src);
  v9 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v9;
  if ( v9 )
  {
    while ( 1 )
    {
      v11 = (int **)UserSessionState[2471];
      if ( !v11 )
        break;
      UserSessionState[2471] = v11[2];
      v11[2] = 0LL;
      if ( !(*v11)[2] )
      {
        LODWORD(v15[0]) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
      }
      HMUnlockObject(*v11);
    }
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  if ( IsInputThread(v10) )
  {
    v17[0] = 0LL;
    v15[0] = 0LL;
    RtlCopyFromUser(v15, Src, 8uLL);
    v13 = v15[0];
    v17[1] = v15[0];
    if ( a4 )
    {
      v16 = 0LL;
      RtlCopyFromUser(&v16, a4, 8uLL);
      v17[0] = v16;
      a4 = v17;
    }
    v12 = (unsigned __int8)PostMouseInputMessage(v13, a2, a3, a4) == 0 ? 0xC0000001 : 0;
  }
  else
  {
    v12 = -1073741823;
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return v12;
}

/*
 * XREFs of NtMITPostThreadEventMessage @ 0x1401B87E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     PtiFromThreadId @ 0x1400D8ED0 (PtiFromThreadId.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     PostThreadEvent @ 0x140213208 (PostThreadEvent.c)
 */

__int64 __fastcall NtMITPostThreadEventMessage(__int64 a1, void *a2, int a3, int a4, unsigned int a5)
{
  int v8; // r15d
  _QWORD *UserSessionState; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // ebx
  int **v13; // rdi
  int v14; // ecx
  int v15; // edi
  __int64 v16; // rax
  _QWORD v18[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19; // [rsp+48h] [rbp-30h]

  v8 = a1;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v10 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
          UserSessionState,
          0,
          0,
          (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v10;
  v12 = 0;
  if ( v10 )
  {
    while ( 1 )
    {
      v13 = (int **)UserSessionState[2471];
      if ( !v13 )
        break;
      UserSessionState[2471] = v13[2];
      v13[2] = 0LL;
      if ( !(*v13)[2] )
      {
        LODWORD(v18[0]) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
      }
      HMUnlockObject(*v13);
    }
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  if ( IsInputThread(v11) )
  {
    v15 = 0;
    v19 = 0LL;
    if ( a2 )
    {
      v18[0] = 0LL;
      RtlCopyFromUser(v18, a2, 8uLL);
      v15 = v18[0];
      v19 = v18[0];
    }
    v16 = PtiFromThreadId(v8);
    if ( v16 )
    {
      LOBYTE(v12) = (unsigned __int8)PostThreadEvent(v16, v15, a3, a4, a5) != 0;
      goto LABEL_16;
    }
    v14 = 87;
  }
  else
  {
    v14 = 5;
  }
  UserSetLastError(v14);
LABEL_16:
  UserSessionSwitchLeaveCritWithNonPaged();
  return v12;
}

/*
 * XREFs of NtMITSynthesizeTouchInput @ 0x1401B8EC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140060B94 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x140062674 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     SynthesizeMitTouchInput @ 0x140218E34 (SynthesizeMitTouchInput.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall NtMITSynthesizeTouchInput(void *Src)
{
  __int64 v2; // rcx
  _QWORD *UserSessionState; // rdi
  __int64 v4; // rax
  int **v5; // rbx
  __int64 v6; // rcx
  int v7; // ecx
  int v8; // ebx
  unsigned __int8 v9; // al
  __int64 *v11[2]; // [rsp+38h] [rbp-B90h] BYREF
  _BYTE Srca[1464]; // [rsp+48h] [rbp-B80h] BYREF
  _BYTE v13[1456]; // [rsp+600h] [rbp-5C8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v11, "MITSynthesizeTouchInput", 0LL);
  UserSessionState = (_QWORD *)W32GetUserSessionState(v2);
  v4 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v4;
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = (int **)UserSessionState[2471];
      if ( !v5 )
        break;
      UserSessionState[2471] = v5[2];
      v5[2] = 0LL;
      if ( !(*v5)[2] )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
      HMUnlockObject(*v5);
    }
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  memset(v13, 0, sizeof(v13));
  if ( IsInputThread(v6) )
  {
    memset(Srca, 0, 0x5B0uLL);
    RtlCopyFromUser(Srca, Src, 0x5B0uLL);
    memmove(v13, Srca, 0x5B0uLL);
    v9 = SynthesizeMitTouchInput(v13);
    v8 = v9;
    if ( v9 )
      goto LABEL_13;
    v7 = 5023;
  }
  else
  {
    v7 = 5;
  }
  v8 = 0;
  UserSetLastError(v7);
LABEL_13:
  UserSessionSwitchLeaveCritWithNonPaged();
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v11);
  return v8;
}

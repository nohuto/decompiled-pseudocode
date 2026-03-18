/*
 * XREFs of NtUserDestroyPalmRejectionDelayZone @ 0x1401BA760
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x14006041C (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     ?RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z @ 0x1402119E0 (-RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z.c)
 */

_BOOL8 __fastcall NtUserDestroyPalmRejectionDelayZone(__int64 a1)
{
  unsigned int v1; // ebp
  _QWORD *UserSessionState; // rsi
  __int64 v3; // rax
  __int64 v4; // rcx
  _BOOL8 v5; // rbx
  int *v6; // rax
  __int64 v7; // rdi
  DelayZonePalmRejection *Instance; // rax

  v1 = a1;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v3 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v5 = 0LL;
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
  Instance = DelayZonePalmRejection::GetInstance(v4);
  if ( Instance )
    v5 = DelayZonePalmRejection::RemoveDelayZoneFromList(Instance, v1);
  UserSessionSwitchLeaveCritWithNonPaged();
  return v5;
}

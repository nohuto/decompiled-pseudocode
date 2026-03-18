/*
 * XREFs of LockIntoSharedUserCritDeferredUnlockList @ 0x1401B6588
 * Callers:
 *     HMUnlockObjectInternal @ 0x140046060 (HMUnlockObjectInternal.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140045260 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _HMPkheFromObjectWorker @ 0x1400E1208 (_HMPkheFromObjectWorker.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall LockIntoSharedUserCritDeferredUnlockList(__int64 a1)
{
  __int64 v2; // rcx
  __int64 UserSessionState; // rdi
  __int64 v4; // rbx
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1);
  if ( !*(_DWORD *)(UserSessionState + 19816) && !IS_USERCRIT_OWNED_SHAREDONLY() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4588);
  if ( !PtiCurrent(v2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4589);
  v4 = HMPkheFromObjectWorker((int *)a1);
  if ( *(_QWORD *)(v4 + 16) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4592);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  result = *(_QWORD *)(UserSessionState + 19768);
  if ( result )
    *(_QWORD *)(v4 + 16) = result;
  *(_QWORD *)(UserSessionState + 19768) = v4;
  return result;
}

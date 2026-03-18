/*
 * XREFs of LockIntoExclusiveUserCritDeferredUnlockList @ 0x14016AD70
 * Callers:
 *     HMUnlockObjectInternal @ 0x140046060 (HMUnlockObjectInternal.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x140042D50 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     _HMPkheFromObjectWorker @ 0x1400E1208 (_HMPkheFromObjectWorker.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall LockIntoExclusiveUserCritDeferredUnlockList(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rcx
  __int64 UserSessionState; // rbx
  __int64 result; // rax

  v2 = HMPkheFromObjectWorker((int *)a1);
  UserSessionState = W32GetUserSessionState(v3);
  if ( !*(_QWORD *)(UserSessionState + 19824) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4637LL);
  if ( !*(_DWORD *)(UserSessionState + 19816) && !IS_USERCRIT_OWNED_EXCLUSIVE() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4638LL);
  if ( *(_DWORD *)(a1 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4648LL);
  if ( *(_QWORD *)(v2 + 16) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4649LL);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(UserSessionState + 19776);
  result = (unsigned int)++*(_DWORD *)(UserSessionState + 19836);
  *(_QWORD *)(UserSessionState + 19776) = v2;
  if ( (unsigned int)result > *(_DWORD *)(UserSessionState + 19832) )
    return MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4658LL);
  return result;
}

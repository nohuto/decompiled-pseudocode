/*
 * XREFs of EnterHandleFlagsCrit @ 0x1400F7EE0
 * Callers:
 *     UserDeleteW32Process @ 0x14015DEE0 (UserDeleteW32Process.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EnterHandleFlagsCrit(__int64 a1)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1);
  return ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)(UserSessionState + 19864));
}

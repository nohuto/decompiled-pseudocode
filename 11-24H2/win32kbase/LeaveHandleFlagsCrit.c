/*
 * XREFs of LeaveHandleFlagsCrit @ 0x1400F8CC0
 * Callers:
 *     UserDeleteW32Process @ 0x14015DEE0 (UserDeleteW32Process.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LeaveHandleFlagsCrit(__int64 a1)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1);
  return ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(UserSessionState + 19864));
}

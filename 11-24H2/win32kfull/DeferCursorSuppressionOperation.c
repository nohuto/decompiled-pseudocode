/*
 * XREFs of DeferCursorSuppressionOperation @ 0x140134C10
 * Callers:
 *     TransitionCursorSuppressionState @ 0x140132F80 (TransitionCursorSuppressionState.c)
 *     NtUserEnableMouseInputForCursorSuppression @ 0x140134C70 (NtUserEnableMouseInputForCursorSuppression.c)
 * Callees:
 *     <none>
 */

LONG __fastcall DeferCursorSuppressionOperation(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 UserSessionState; // rax

  v2 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 36368);
  _InterlockedOr((volatile signed __int32 *)(v2 + 100), 2u);
  UserSessionState = W32GetUserSessionState(v2, v3);
  return KeSetEvent(*(PRKEVENT *)(*(_QWORD *)(UserSessionState + 36368) + 72LL), 1, 0);
}

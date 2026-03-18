/*
 * XREFs of QueryAutoRotationState @ 0x140264860
 * Callers:
 *     NtUserGetAutoRotationState @ 0x1401D7B20 (NtUserGetAutoRotationState.c)
 *     ?TraceLoggingAutoRotationStateEvent@@YAXXZ @ 0x140205514 (-TraceLoggingAutoRotationStateEvent@@YAXXZ.c)
 * Callees:
 *     ?QueryAutoRotationState@CRotationMgr@@QEAA?AW4tagAR_STATE@@XZ @ 0x140264888 (-QueryAutoRotationState@CRotationMgr@@QEAA-AW4tagAR_STATE@@XZ.c)
 */

__int64 __fastcall QueryAutoRotationState(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  return CRotationMgr::QueryAutoRotationState(*(_QWORD *)(UserSessionState + 66112));
}

/*
 * XREFs of SetPointerMetaVisibility @ 0x140131E3C
 * Callers:
 *     _anonymous_namespace_::RenderCursor @ 0x140091F44 (_anonymous_namespace_--RenderCursor.c)
 *     _anonymous_namespace_::xxxSwitchCursors @ 0x140132D94 (_anonymous_namespace_--xxxSwitchCursors.c)
 *     TransitionCursorSuppressionState @ 0x140132F80 (TransitionCursorSuppressionState.c)
 *     NtUserEnableMouseInputForCursorSuppression @ 0x140134C70 (NtUserEnableMouseInputForCursorSuppression.c)
 *     PowerOnGdi @ 0x140134F50 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x140135140 (PowerOffGdi.c)
 *     _anonymous_namespace_::xxxRestoreMouseCursors @ 0x140135364 (_anonymous_namespace_--xxxRestoreMouseCursors.c)
 * Callees:
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x14002B398 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 *     zzzEnableDwmPointerSupport @ 0x1401320A8 (zzzEnableDwmPointerSupport.c)
 */

bool __fastcall SetPointerMetaVisibility(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax

  v1 = a1;
  zzzEnableDwmPointerSupport(a1, 1LL);
  UserSessionState = W32GetUserSessionState(v3, v2);
  return CursorApiRouter::HidePointer(*(CursorApiRouter **)(UserSessionState + 36360), v1 == 0);
}

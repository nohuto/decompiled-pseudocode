/*
 * XREFs of ReadCursorSuppressionConfig @ 0x140134838
 * Callers:
 *     _anonymous_namespace_::RenderCursor @ 0x140091F44 (_anonymous_namespace_--RenderCursor.c)
 *     _anonymous_namespace_::xxxSwitchCursors @ 0x140132D94 (_anonymous_namespace_--xxxSwitchCursors.c)
 *     TransitionCursorSuppressionState @ 0x140132F80 (TransitionCursorSuppressionState.c)
 *     NtUserEnableMouseInputForCursorSuppression @ 0x140134C70 (NtUserEnableMouseInputForCursorSuppression.c)
 *     PowerOnGdi @ 0x140134F50 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x140135140 (PowerOffGdi.c)
 * Callees:
 *     IsCurrentSessionServiceSession @ 0x1400A4078 (IsCurrentSessionServiceSession.c)
 */

__int64 ReadCursorSuppressionConfig()
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  int v4; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  v4 = 0;
  if ( !IsCurrentSessionServiceSession() && !*(_WORD *)(W32GetUserSessionState(v2, v1) + 69008) )
    FastGetProfileDword(0LL, 49LL, L"EnableCursorSuppression", 0LL, &v4);
  LOBYTE(v0) = v4 != 0;
  return v0;
}

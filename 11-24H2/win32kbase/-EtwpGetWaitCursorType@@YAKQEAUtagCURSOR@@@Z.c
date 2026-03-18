/*
 * XREFs of ?EtwpGetWaitCursorType@@YAKQEAUtagCURSOR@@@Z @ 0x14009BB90
 * Callers:
 *     EtwTraceWaitCursor @ 0x14009B930 (EtwTraceWaitCursor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetWaitCursorType(struct tagCURSOR *const a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  unsigned int v5; // ecx

  if ( a1 == *(struct tagCURSOR *const *)(W32GetUserSessionState(a1) + 23040) )
    return 102LL;
  if ( a1 == *(struct tagCURSOR *const *)(W32GetUserSessionState(v2) + 28008) )
    return 111LL;
  UserSessionState = W32GetUserSessionState(v3);
  v5 = 0;
  if ( a1 == *(struct tagCURSOR *const *)(UserSessionState + 30768) )
    return 116;
  return v5;
}

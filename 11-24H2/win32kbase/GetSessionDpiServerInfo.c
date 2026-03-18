/*
 * XREFs of GetSessionDpiServerInfo @ 0x140113BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSessionDpiServerInfo(__int64 a1)
{
  return *(_QWORD *)(W32GetUserSessionState(a1) + 19928) + 5096LL;
}

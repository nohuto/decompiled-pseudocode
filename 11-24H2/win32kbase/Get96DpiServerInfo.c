/*
 * XREFs of Get96DpiServerInfo @ 0x140106710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Get96DpiServerInfo(__int64 a1)
{
  return *(_QWORD *)(W32GetUserSessionState(a1) + 19928) + 5200LL;
}

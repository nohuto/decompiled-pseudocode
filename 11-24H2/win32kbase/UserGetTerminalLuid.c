/*
 * XREFs of UserGetTerminalLuid @ 0x1401062F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UserGetTerminalLuid(__int64 a1)
{
  return *(_QWORD *)(W32GetUserSessionState(a1) + 68952);
}

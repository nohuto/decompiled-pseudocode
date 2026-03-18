/*
 * XREFs of W32GetCurrentWin32kFastMutex @ 0x140109600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall W32GetCurrentWin32kFastMutex(__int64 a1)
{
  return *(_QWORD *)(W32GetUserSessionState(a1) + 42600);
}

/*
 * XREFs of EditionShowSystemCursor @ 0x14002B360
 * Callers:
 *     NtUserShowSystemCursor @ 0x1402A0FD0 (NtUserShowSystemCursor.c)
 * Callees:
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x14002B398 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 */

_BOOL8 __fastcall EditionShowSystemCursor(int a1)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState();
  return CursorApiRouter::HidePointer(*(CursorApiRouter **)(UserSessionState + 36360), a1 == 0);
}

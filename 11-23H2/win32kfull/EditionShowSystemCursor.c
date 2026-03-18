/*
 * XREFs of EditionShowSystemCursor @ 0x1C00C29E0
 * Callers:
 *     NtUserShowSystemCursor @ 0x1C01DE460 (NtUserShowSystemCursor.c)
 * Callees:
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1C00C2A00 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 */

_BOOL8 __fastcall EditionShowSystemCursor(CursorApiRouter *a1)
{
  return CursorApiRouter::HidePointer(a1, (_DWORD)a1 == 0);
}

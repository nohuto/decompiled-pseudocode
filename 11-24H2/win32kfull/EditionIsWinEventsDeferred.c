/*
 * XREFs of EditionIsWinEventsDeferred @ 0x1402879A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EditionIsWinEventsDeferred(__int64 a1, __int64 a2)
{
  return *(_DWORD *)(W32GetUserSessionState(a1, a2) + 70856) != 0;
}

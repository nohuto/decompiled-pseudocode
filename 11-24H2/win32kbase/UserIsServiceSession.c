/*
 * XREFs of UserIsServiceSession @ 0x14019E7D0
 * Callers:
 *     InitializeGre @ 0x1402E6D50 (InitializeGre.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UserIsServiceSession(__int64 a1)
{
  return *(_DWORD *)(W32GetUserSessionState(a1) + 68868) == 0;
}

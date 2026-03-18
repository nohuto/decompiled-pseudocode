/*
 * XREFs of UserGetSiloGlobals @ 0x140129160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 UserGetSiloGlobals()
{
  return *(_QWORD *)(W32GetSiloSessionState() + 16);
}

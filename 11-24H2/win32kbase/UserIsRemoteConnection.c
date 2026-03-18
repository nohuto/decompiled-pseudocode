/*
 * XREFs of UserIsRemoteConnection @ 0x14008C9F0
 * Callers:
 *     DrvChangeD3RequestsState @ 0x14008C968 (DrvChangeD3RequestsState.c)
 *     DrvSetMonitorBrightness @ 0x14008DCD0 (DrvSetMonitorBrightness.c)
 *     UpdateMouseConnectionState @ 0x14012BF88 (UpdateMouseConnectionState.c)
 *     DrvInitConsole @ 0x1401794EC (DrvInitConsole.c)
 *     GrepIsRemoteConnection @ 0x1401C4C00 (GrepIsRemoteConnection.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UserIsRemoteConnection(__int64 a1)
{
  return *(_WORD *)(W32GetUserSessionState(a1) + 69008) != 0;
}

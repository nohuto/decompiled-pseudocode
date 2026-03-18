/*
 * XREFs of ?CitIsEnabled@@YAEXZ @ 0x1400B3CFC
 * Callers:
 *     CitSetInfo @ 0x1400B3B80 (CitSetInfo.c)
 *     CitBackgroundMouseInput @ 0x1400B3C30 (CitBackgroundMouseInput.c)
 *     CitDisplayRequestChange @ 0x1400B542C (CitDisplayRequestChange.c)
 *     CitDisplayPowerChange @ 0x1400B59E4 (CitDisplayPowerChange.c)
 *     CitProcessCallout @ 0x1400B5AC4 (CitProcessCallout.c)
 *     ?CitpProcessForegroundChange@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@0@Z @ 0x14012BCCC (-CitpProcessForegroundChange@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@0@Z.c)
 *     CitUserChange @ 0x14014E080 (CitUserChange.c)
 *     CitSessionConnectChange @ 0x140150F90 (CitSessionConnectChange.c)
 *     CitEnableKeyboardDelegation @ 0x1401971A8 (CitEnableKeyboardDelegation.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@_K@Z @ 0x14023C0F8 (-CitEtwEnableCallback@@YAXPEBU_GUID@@_K@Z.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x14023CCE0 (-CitpResetTracking@@YAJXZ.c)
 *     CitModerncoreShutdown @ 0x14023CEF0 (CitModerncoreShutdown.c)
 * Callees:
 *     <none>
 */

bool __fastcall CitIsEnabled(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1) + 18968) + 32LL) != 0LL;
}

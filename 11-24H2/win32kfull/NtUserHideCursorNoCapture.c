/*
 * XREFs of NtUserHideCursorNoCapture @ 0x1402985B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetAppCompatFlags2 @ 0x140049EF0 (GetAppCompatFlags2.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1400759F4 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 */

__int64 NtUserHideCursorNoCapture()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rdx

  EnterCrit(0LL, 0LL);
  v3 = *((_QWORD *)PtiCurrent(v1, v0) + 59);
  if ( !*(_QWORD *)(v3 + 112) && (GetAppCompatFlags2(1024LL, v2) & 0x100) == 0 )
  {
    v3 = *(_DWORD *)(W32GetUserSessionState(v3, v4) + 67060) & 0x80010000;
    if ( (_DWORD)v3 == -2147418112 )
      zzzSetCursor(0LL, v5);
  }
  UserSessionSwitchLeaveCrit(v3);
  return 0LL;
}

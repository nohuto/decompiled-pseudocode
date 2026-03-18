/*
 * XREFs of ?_UnregisterHotKey@@YAHPEAUtagWND@@H@Z @ 0x1C003EE94
 * Callers:
 *     NtUserUnregisterHotKey @ 0x1C003EF00 (NtUserUnregisterHotKey.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C0072BD4 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 * Callees:
 *     ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C003EBC0 (-HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall _UnregisterHotKey(struct tagWND *a1, int a2)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( (unsigned __int8)HKRemoveMatchingHotkeys(gptiCurrent, (__int64)a1, a2, 3) )
  {
    if ( *(_QWORD *)(SGDGetUserSessionState(v2) + 13784) )
      *(_QWORD *)(SGDGetUserSessionState(v3) + 13784) = 0LL;
    return 1LL;
  }
  else
  {
    UserSetLastError(1419LL);
    return 0LL;
  }
}

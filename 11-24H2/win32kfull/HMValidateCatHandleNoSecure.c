/*
 * XREFs of HMValidateCatHandleNoSecure @ 0x14008C510
 * Callers:
 *     zzzUpdateWindowsAfterModeChange @ 0x14008B5E8 (zzzUpdateWindowsAfterModeChange.c)
 *     UpdateMonitorForWindowAndChildren @ 0x14008BA78 (UpdateMonitorForWindowAndChildren.c)
 *     xxxInheritWindowMonitor @ 0x14008C114 (xxxInheritWindowMonitor.c)
 *     xxxDDETrackGetMessageHook @ 0x14024E7A4 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall HMValidateCatHandleNoSecure(__int64 a1, __int64 a2)
{
  int v2; // esi
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r14

  v2 = a1;
  v3 = 0LL;
  PtiCurrent(a1, a2);
  v7 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19928);
  if ( (unsigned __int64)(unsigned __int16)v2 < *(_QWORD *)(v7 + 8) )
  {
    UserSessionState = W32GetUserSessionState(v7, v6);
    v11 = *(_DWORD *)(W32GetUserSessionState(v10, v9) + 19952) * (unsigned int)(unsigned __int16)v2
        + *(_QWORD *)(UserSessionState + 19944);
    v15 = HMPkheFromPhe(v11);
    LOWORD(v2) = HIWORD(v2) & 0x7FFF;
    if ( ((HIWORD(v2) & 0x7FFF) == *(_WORD *)(v11 + 26)
       || (_WORD)v2 == 0x7FFF
       || !(_WORD)v2 && PsGetCurrentProcessWow64Process(v13, v12, v14))
      && *(_BYTE *)(v11 + 24) == 1 )
    {
      return *(_QWORD *)v15;
    }
  }
  return v3;
}

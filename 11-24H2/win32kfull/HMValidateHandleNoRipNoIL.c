/*
 * XREFs of HMValidateHandleNoRipNoIL @ 0x1402F142C
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x14024E7A4 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall HMValidateHandleNoRipNoIL(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 *v13; // r14
  __int16 v14; // ax

  v3 = 0LL;
  PtiCurrent(a1, a2);
  v7 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19928);
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(v7 + 8) )
  {
    UserSessionState = W32GetUserSessionState(v7, v6);
    v11 = *(_DWORD *)(W32GetUserSessionState(v10, v9) + 19952) * (unsigned int)(unsigned __int16)a1
        + *(_QWORD *)(UserSessionState + 19944);
    v13 = (__int64 *)HMPkheFromPhe(v11);
    v7 = 0x7FFFLL;
    v14 = WORD1(a1) & 0x7FFF;
    if ( ((WORD1(a1) & 0x7FFF) == *(_WORD *)(v11 + 26)
       || v14 == 0x7FFF
       || !v14 && PsGetCurrentProcessWow64Process(0x7FFFLL, v6, v12))
      && (*(_BYTE *)(v11 + 25) & 1) == 0
      && *(_BYTE *)(v11 + 24) == 11 )
    {
      v3 = *v13;
    }
  }
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent(v7, v6) + 132, 0, 0) & 0x20000000) != 0 )
    return -(__int64)((unsigned int)ValidateHandleSecure(a1, 1LL) != 0) & v3;
  return v3;
}

/*
 * XREFs of UseVelocityToEnableIV @ 0x1400CE858
 * Callers:
 *     IsKeyboardIVEnabled @ 0x14004FB3C (IsKeyboardIVEnabled.c)
 *     IsPTPIVEnabled @ 0x14004FBE8 (IsPTPIVEnabled.c)
 *     IsMouseIVEnabled @ 0x140050CD0 (IsMouseIVEnabled.c)
 *     IsPenIVEnabled @ 0x140217E98 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x140217EF0 (IsTouchIVEnabled.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 */

char __fastcall UseVelocityToEnableIV(__int64 a1)
{
  __int64 v1; // rcx
  char v2; // di
  int v4; // ebx

  v2 = 0;
  if ( *(_DWORD *)(W32GetUserSessionState(a1) + 19504) )
  {
    v4 = *(_DWORD *)(W32GetUserSessionState(v1) + 19508);
    if ( (unsigned int)W32GetCurrentWin32kSessionId() == v4 )
    {
      if ( *(_DWORD *)(W32GetUserSessionState(v1) + 19560) )
        return 1;
    }
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v1) + 36) == 3 )
    return 1;
  return v2;
}

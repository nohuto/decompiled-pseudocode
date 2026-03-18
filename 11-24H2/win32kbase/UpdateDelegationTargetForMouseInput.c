/*
 * XREFs of UpdateDelegationTargetForMouseInput @ 0x1402137A0
 * Callers:
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x14018FBDC (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 * Callees:
 *     SendMessageTo @ 0x140048F20 (SendMessageTo.c)
 *     IsAnyDelegationEnabled @ 0x1400C2360 (IsAnyDelegationEnabled.c)
 *     IsCurrentSessionServiceSession @ 0x14012AA48 (IsCurrentSessionServiceSession.c)
 *     IsKeyboardDelegationTarget @ 0x140212F60 (IsKeyboardDelegationTarget.c)
 */

char __fastcall UpdateDelegationTargetForMouseInput(tagTHREADINFO *this)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned int ThreadId; // eax
  _DWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+38h] [rbp-10h]
  int v10; // [rsp+3Ch] [rbp-Ch]

  LODWORD(UserSessionState) = IsCurrentSessionServiceSession();
  if ( !(_DWORD)UserSessionState )
  {
    LOBYTE(UserSessionState) = IsAnyDelegationEnabled();
    if ( (_BYTE)UserSessionState )
    {
      LOBYTE(UserSessionState) = IsKeyboardDelegationTarget(this);
      if ( !(_BYTE)UserSessionState )
      {
        UserSessionState = W32GetUserSessionState(v3);
        if ( *(_DWORD *)(*(_QWORD *)(UserSessionState + 19656) + 4LL) )
        {
          v4 = *((_QWORD *)this + 58);
          v10 = 0;
          v8 = 0LL;
          v7[0] = *(_DWORD *)(v4 + 56);
          ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)this);
          v9 = 1;
          v7[1] = ThreadId;
          LOBYTE(UserSessionState) = SendMessageTo(2LL, v7, 32LL);
        }
      }
    }
  }
  return UserSessionState;
}

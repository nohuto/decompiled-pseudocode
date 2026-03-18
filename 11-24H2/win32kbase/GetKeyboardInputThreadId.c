/*
 * XREFs of GetKeyboardInputThreadId @ 0x140212860
 * Callers:
 *     NtUserGetKeyboardInputThreadId @ 0x1401BAD90 (NtUserGetKeyboardInputThreadId.c)
 * Callees:
 *     ?GetTID@tagTHREADINFO@@QEBAKXZ @ 0x1400F2110 (-GetTID@tagTHREADINFO@@QEBAKXZ.c)
 */

__int64 __fastcall GetKeyboardInputThreadId(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx
  unsigned int v3; // eax
  __int64 v4; // rcx
  __int64 UserSessionState; // rax

  v1 = 0;
  v2 = *(_QWORD *)(W32GetUserSessionState(a1) + 19656);
  if ( (*(_DWORD *)(v2 + 8) & 1) != 0 )
  {
    v3 = *(_DWORD *)(v2 + 4);
    if ( v3 )
      return v3;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v2) + 18960) )
  {
    UserSessionState = W32GetUserSessionState(v4);
    return (unsigned int)tagTHREADINFO::GetTID(*(PETHREAD **)(UserSessionState + 18960));
  }
  return v1;
}

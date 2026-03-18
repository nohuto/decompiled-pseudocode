/*
 * XREFs of EnsureArbitraryDpiServerInfoForDpi @ 0x14028735C
 * Callers:
 *     GetDpiServerInfoForDpi @ 0x1402F18D4 (GetDpiServerInfoForDpi.c)
 * Callees:
 *     ?ClearDpiServerInfo@@YAXPEAUtagDPISERVERINFO@@@Z @ 0x140287260 (-ClearDpiServerInfo@@YAXPEAUtagDPISERVERINFO@@@Z.c)
 *     EnsureDpiServerInfoForDpi @ 0x140287514 (EnsureDpiServerInfoForDpi.c)
 */

__int64 __fastcall EnsureArbitraryDpiServerInfoForDpi(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // di
  __int64 UserSessionState; // rsi
  struct HLFONT__ **v4; // rbx
  __int16 v5; // ax

  v2 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = (struct HLFONT__ **)(UserSessionState + 66416);
  v5 = *(_WORD *)(UserSessionState + 66520);
  if ( v5 != v2 )
  {
    if ( v5 )
      ClearDpiServerInfo(v4);
    EnsureDpiServerInfoForDpi(v4, v2);
    *(_WORD *)(UserSessionState + 66520) = v2;
  }
  return UserSessionState + 66416;
}

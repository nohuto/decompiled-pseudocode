/*
 * XREFs of ?GetTsAudioProtocol@@YAIK@Z @ 0x180020FD4
 * Callers:
 *     VADServerUserSessionChanged @ 0x180020E68 (VADServerUserSessionChanged.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     IsWinStationIsSessionRemoteablePresent @ 0x1800AACA8 (IsWinStationIsSessionRemoteablePresent.c)
 *     IsWTSQuerySessionInformationWPresent @ 0x1800AAE24 (IsWTSQuerySessionInformationWPresent.c)
 */

__int64 __fastcall GetTsAudioProtocol(DWORD SessionId)
{
  WCHAR v2; // di
  char v3; // bl
  unsigned int v5; // ebx
  _BYTE v6[4]; // [rsp+30h] [rbp-D0h] BYREF
  DWORD pBytesReturned; // [rsp+34h] [rbp-CCh] BYREF
  int v8; // [rsp+38h] [rbp-C8h] BYREF
  LPWSTR ppBuffer; // [rsp+40h] [rbp-C0h] BYREF
  LPWSTR v10; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v11[1152]; // [rsp+50h] [rbp-B0h] BYREF

  v10 = 0LL;
  ppBuffer = 0LL;
  pBytesReturned = 0;
  v2 = -1;
  memset_0(v11, 0, 0x8F8uLL);
  v8 = 0;
  v3 = 0;
  v6[0] = 0;
  if ( !(unsigned __int8)IsWinStationIsSessionRemoteablePresent()
    || !(unsigned __int8)IsWTSQuerySessionInformationWPresent() )
  {
    return 0;
  }
  if ( SessionId == -1 )
    SessionId = NtCurrentPeb()->SessionId;
  if ( !(unsigned __int8)WinStationIsSessionRemoteable(0LL, SessionId, v6) )
    return (WCHAR)-1;
  if ( (unsigned int)RtlGetActiveConsoleId() != SessionId )
  {
LABEL_12:
    if ( (unsigned int)RtlGetCurrentServiceSessionId() == SessionId )
      return 0;
    if ( !v3 )
    {
      if ( !WTSQuerySessionInformationW(0LL, SessionId, WTSClientProtocolType, &ppBuffer, &pBytesReturned) )
        return (WCHAR)-1;
      v2 = *ppBuffer;
      WTSFreeMemory(ppBuffer);
    }
    if ( WTSQuerySessionInformationW(0LL, SessionId, WTSConnectState, &v10, &pBytesReturned) )
    {
      v5 = *(_DWORD *)v10;
      WTSFreeMemory(v10);
      if ( v5 <= 2 )
      {
        if ( !v2 )
          return v2;
        if ( (unsigned __int8)WinStationQueryInformationW(0LL, SessionId, 6LL, v11, 2296, &v8) )
        {
          if ( (v11[0] & 0x100) == 0 )
            return v2;
          return 0;
        }
      }
    }
    return (WCHAR)-1;
  }
  if ( v6[0] )
  {
    v3 = 1;
    v2 = 2;
    goto LABEL_12;
  }
  return 0;
}

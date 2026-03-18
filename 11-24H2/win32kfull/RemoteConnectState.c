/*
 * XREFs of RemoteConnectState @ 0x1401C2EB8
 * Callers:
 *     NtUserRemoteConnectState @ 0x1401C2E80 (NtUserRemoteConnectState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RemoteConnectState(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx

  v3 = 0;
  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 68868) )
  {
    if ( *(_DWORD *)(W32GetUserGdiSessionState(v2) + 32) )
    {
      if ( *(_DWORD *)(W32GetUserSessionState(v5, v4) + 36460) )
        return 2;
      else
        return 4 - (unsigned int)(*(_DWORD *)(W32GetUserSessionState(v7, v6) + 69012) != 0);
    }
    else
    {
      return 1;
    }
  }
  return v3;
}

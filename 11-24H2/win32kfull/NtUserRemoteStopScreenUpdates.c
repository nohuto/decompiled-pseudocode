/*
 * XREFs of NtUserRemoteStopScreenUpdates @ 0x14029BDB0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoteStopScreenUpdates @ 0x1401DF978 (xxxRemoteStopScreenUpdates.c)
 */

__int64 NtUserRemoteStopScreenUpdates()
{
  __int64 v0; // rcx
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rdx

  EnterCrit(0LL, 0LL);
  v1 = *(_QWORD *)(W32GetUserGdiSessionState(v0) + 40);
  if ( PsGetCurrentProcess(v2) == v1 )
  {
    if ( *(_DWORD *)(W32GetUserGdiSessionState(v3) + 36) )
      v4 = -1073741823;
    else
      v4 = xxxRemoteStopScreenUpdates(v3, v5);
  }
  else
  {
    v4 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}

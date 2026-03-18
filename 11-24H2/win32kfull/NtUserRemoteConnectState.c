/*
 * XREFs of NtUserRemoteConnectState @ 0x1401C2E80
 * Callers:
 *     <none>
 * Callees:
 *     RemoteConnectState @ 0x1401C2EB8 (RemoteConnectState.c)
 */

__int64 NtUserRemoteConnectState()
{
  unsigned int v0; // ebx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = RemoteConnectState();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}

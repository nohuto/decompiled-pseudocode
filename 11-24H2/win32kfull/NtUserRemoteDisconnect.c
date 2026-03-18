/*
 * XREFs of NtUserRemoteDisconnect @ 0x1401DF390
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoteDisconnect @ 0x1401DF3C8 (xxxRemoteDisconnect.c)
 */

__int64 NtUserRemoteDisconnect()
{
  unsigned int v0; // ebx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = xxxRemoteDisconnect();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}

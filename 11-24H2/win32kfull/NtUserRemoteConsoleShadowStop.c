/*
 * XREFs of NtUserRemoteConsoleShadowStop @ 0x14029BA30
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoteConsoleShadowStop @ 0x1402B7794 (xxxRemoteConsoleShadowStop.c)
 */

__int64 NtUserRemoteConsoleShadowStop()
{
  unsigned int v0; // ebx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = xxxRemoteConsoleShadowStop();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}

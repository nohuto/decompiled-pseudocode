/*
 * XREFs of NtUserRemotePassthruDisable @ 0x14029BA70
 * Callers:
 *     <none>
 * Callees:
 *     RemotePassthruDisable @ 0x1401FBD88 (RemotePassthruDisable.c)
 */

__int64 NtUserRemotePassthruDisable()
{
  unsigned int v0; // ebx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = RemotePassthruDisable();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}

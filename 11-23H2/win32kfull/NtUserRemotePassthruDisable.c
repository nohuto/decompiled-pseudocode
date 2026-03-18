/*
 * XREFs of NtUserRemotePassthruDisable @ 0x1C01D9250
 * Callers:
 *     <none>
 * Callees:
 *     RemotePassthruDisable @ 0x1C020281C (RemotePassthruDisable.c)
 */

__int64 NtUserRemotePassthruDisable()
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  EnterCrit(0LL, 0LL);
  v0 = RemotePassthruDisable();
  UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
  return v0;
}

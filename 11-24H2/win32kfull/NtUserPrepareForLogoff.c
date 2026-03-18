/*
 * XREFs of NtUserPrepareForLogoff @ 0x14020FB90
 * Callers:
 *     <none>
 * Callees:
 *     PrepareForLogoff @ 0x14020FBCC (PrepareForLogoff.c)
 */

__int64 NtUserPrepareForLogoff()
{
  __int64 v0; // rbx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = (int)PrepareForLogoff();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}

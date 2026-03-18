/*
 * XREFs of NtUserUpdatePerUserImmEnabling @ 0x14020BB90
 * Callers:
 *     <none>
 * Callees:
 *     UpdatePerUserImmEnabling @ 0x14020BBCC (UpdatePerUserImmEnabling.c)
 */

__int64 NtUserUpdatePerUserImmEnabling()
{
  __int64 updated; // rbx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  updated = (int)UpdatePerUserImmEnabling();
  UserSessionSwitchLeaveCrit(v1);
  return updated;
}

/*
 * XREFs of UpdatePerUserImmEnabling @ 0x14020BBCC
 * Callers:
 *     NtUserUpdatePerUserImmEnabling @ 0x14020BB90 (NtUserUpdatePerUserImmEnabling.c)
 * Callees:
 *     <none>
 */

__int64 UpdatePerUserImmEnabling()
{
  __int64 v0; // rdx
  __int64 v1; // rcx

  if ( (unsigned int)IsIMMEnabledSystem() )
    _InterlockedOr(*(volatile signed __int32 **)(W32GetUserSessionState(v1, v0) + 19928), 4u);
  else
    _InterlockedAnd(*(volatile signed __int32 **)(W32GetUserSessionState(v1, v0) + 19928), 0xFFFFFFFB);
  return 1LL;
}

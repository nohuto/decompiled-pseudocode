/*
 * XREFs of NtUserUpdatePerUserImmEnabling @ 0x1C009D450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserUpdatePerUserImmEnabling()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9

  EnterCrit(0LL, 0LL);
  if ( (unsigned int)IsIMMEnabledSystem() )
    _InterlockedOr(gpsi, 4u);
  else
    _InterlockedAnd(gpsi, 0xFFFFFFFB);
  UserSessionSwitchLeaveCrit(gpsi, v0, v1, v2);
  return 1LL;
}

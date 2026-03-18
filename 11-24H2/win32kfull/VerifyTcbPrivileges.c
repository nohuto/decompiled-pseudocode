/*
 * XREFs of VerifyTcbPrivileges @ 0x14021F090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN VerifyTcbPrivileges()
{
  return SeSinglePrivilegeCheck((LUID)7LL, 1);
}

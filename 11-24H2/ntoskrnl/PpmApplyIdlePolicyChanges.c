/*
 * XREFs of PpmApplyIdlePolicyChanges @ 0x1404369D0
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetIdlePolicy @ 0x1404372B8 (PpmResetIdlePolicy.c)
 */

__int64 __fastcall PpmApplyIdlePolicyChanges(__int64 a1)
{
  PpmResetIdlePolicy(a1 + 34880);
  return 0LL;
}

/*
 * XREFs of PpmApplyIdlePolicyChanges @ 0x1403E72A0
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetIdlePolicy @ 0x1403E7B88 (PpmResetIdlePolicy.c)
 */

__int64 __fastcall PpmApplyIdlePolicyChanges(__int64 a1)
{
  PpmResetIdlePolicy(a1 + 34880);
  return 0LL;
}

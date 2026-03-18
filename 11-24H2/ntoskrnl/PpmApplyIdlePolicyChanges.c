/*
 * XREFs of PpmApplyIdlePolicyChanges @ 0x14032C6C0
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetIdlePolicy @ 0x14032CFA8 (PpmResetIdlePolicy.c)
 */

__int64 __fastcall PpmApplyIdlePolicyChanges(__int64 a1)
{
  PpmResetIdlePolicy(a1 + 34880);
  return 0LL;
}

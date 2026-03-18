/*
 * XREFs of PpmReapplyIdlePolicy @ 0x140A936D0
 * Callers:
 *     PpmInfoApplySettingUpdate @ 0x140965D6C (PpmInfoApplySettingUpdate.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140A3EC4C (PpmCompareAndApplyPolicySettings.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x1403B2EE8 (PopExecuteOnTargetProcessors.c)
 */

__int64 PpmReapplyIdlePolicy()
{
  return PopExecuteOnTargetProcessors((__int64)&KeActiveProcessors, (__int64)PpmApplyIdlePolicyChanges, 0LL, 0LL);
}

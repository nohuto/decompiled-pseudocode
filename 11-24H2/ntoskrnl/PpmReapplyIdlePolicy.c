/*
 * XREFs of PpmReapplyIdlePolicy @ 0x140A97940
 * Callers:
 *     PpmInfoApplySettingUpdate @ 0x1409BDA78 (PpmInfoApplySettingUpdate.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140A4706C (PpmCompareAndApplyPolicySettings.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x1403529A4 (PopExecuteOnTargetProcessors.c)
 */

__int64 PpmReapplyIdlePolicy()
{
  return PopExecuteOnTargetProcessors((__int64)&KeActiveProcessors, (__int64)PpmApplyIdlePolicyChanges, 0LL, 0LL);
}

/*
 * XREFs of CmpAllocatePoolWithQuota @ 0x14045935C
 * Callers:
 *     CmUpdateFeatureConfiguration @ 0x1407D5C24 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x1407D5E8C (CmUpdateFeatureUsageSubscription.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpAllocatePoolWithQuota(__int64 a1)
{
  return ExAllocatePool2(a1 | 1);
}

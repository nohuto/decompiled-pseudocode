/*
 * XREFs of CmpAllocatePoolWithQuota @ 0x140458B14
 * Callers:
 *     CmUpdateFeatureConfiguration @ 0x1407C64D0 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x1407C6738 (CmUpdateFeatureUsageSubscription.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpAllocatePoolWithQuota(__int64 a1)
{
  return ExAllocatePool2(a1 | 1);
}

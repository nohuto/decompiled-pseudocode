/*
 * XREFs of CmpAllocatePoolWithQuota @ 0x14044E3DC
 * Callers:
 *     CmUpdateFeatureConfiguration @ 0x1407D6120 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x1407D6388 (CmUpdateFeatureUsageSubscription.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpAllocatePoolWithQuota(__int64 a1, ULONG_PTR a2, ULONG a3)
{
  return ExAllocatePool2(a1 | 1, a2, a3);
}

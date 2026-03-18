/*
 * XREFs of Feature_NotifyQuotaCharge__private_IsEnabledDeviceUsageNoInline @ 0x1404F1ECC
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x140937870 (NtNotifyChangeMultipleKeys.c)
 *     CmpAllocatePostBlock @ 0x140938BE0 (CmpAllocatePostBlock.c)
 *     CmpNotifyChangeKey @ 0x1409391FC (CmpNotifyChangeKey.c)
 * Callees:
 *     Feature_NotifyQuotaCharge__private_IsEnabledFallback @ 0x14065BF14 (Feature_NotifyQuotaCharge__private_IsEnabledFallback.c)
 */

__int64 Feature_NotifyQuotaCharge__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_NotifyQuotaCharge__private_featureState & 0x10) != 0 )
    return Feature_NotifyQuotaCharge__private_featureState & 1;
  else
    return Feature_NotifyQuotaCharge__private_IsEnabledFallback(
             (unsigned int)Feature_NotifyQuotaCharge__private_featureState,
             3LL);
}

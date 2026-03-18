/*
 * XREFs of Feature_Servicing_PteDeadLock__private_IsEnabledDeviceUsageNoInline @ 0x14004D620
 * Callers:
 *     ?AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x140099824 (-AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED.c)
 * Callees:
 *     Feature_Servicing_PteDeadLock__private_IsEnabledFallback @ 0x14004D658 (Feature_Servicing_PteDeadLock__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_PteDeadLock__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_PteDeadLock__private_featureState & 0x10) != 0 )
    return Feature_Servicing_PteDeadLock__private_featureState & 1;
  else
    return Feature_Servicing_PteDeadLock__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_PteDeadLock__private_featureState,
             3LL);
}

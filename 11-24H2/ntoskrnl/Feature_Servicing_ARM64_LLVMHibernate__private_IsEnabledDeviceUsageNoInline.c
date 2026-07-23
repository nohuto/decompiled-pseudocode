/*
 * XREFs of Feature_Servicing_ARM64_LLVMHibernate__private_IsEnabledDeviceUsageNoInline @ 0x1405D0B10
 * Callers:
 *     PopAllocateHiberContext @ 0x140AC4284 (PopAllocateHiberContext.c)
 * Callees:
 *     Feature_Servicing_ARM64_LLVMHibernate__private_IsEnabledFallback @ 0x1405D0B48 (Feature_Servicing_ARM64_LLVMHibernate__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_ARM64_LLVMHibernate__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_ARM64_LLVMHibernate__private_featureState & 0x10) != 0 )
    return Feature_Servicing_ARM64_LLVMHibernate__private_featureState & 1;
  else
    return Feature_Servicing_ARM64_LLVMHibernate__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_ARM64_LLVMHibernate__private_featureState,
             3LL);
}

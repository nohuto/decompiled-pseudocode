/*
 * XREFs of Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline @ 0x1405D3348
 * Callers:
 *     PopHiberInitializeResources @ 0x1407524BC (PopHiberInitializeResources.c)
 *     PopPreallocateHibernateMemory @ 0x140752A4C (PopPreallocateHibernateMemory.c)
 *     PopAllocateHiberContext @ 0x140AC688C (PopAllocateHiberContext.c)
 *     PopWriteHiberPages @ 0x140B5EA28 (PopWriteHiberPages.c)
 *     MmInvalidateDumpAddresses @ 0x140B631B0 (MmInvalidateDumpAddresses.c)
 *     PopHiberCheckResume @ 0x140B6E970 (PopHiberCheckResume.c)
 *     PopSaveHiberContext @ 0x140B6EC80 (PopSaveHiberContext.c)
 *     MiInitializeCrashDumpPtes @ 0x140C53FC0 (MiInitializeCrashDumpPtes.c)
 * Callees:
 *     Feature_CrashDumpOneMBTransferSize__private_IsEnabledFallback @ 0x1405D3380 (Feature_CrashDumpOneMBTransferSize__private_IsEnabledFallback.c)
 */

__int64 Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CrashDumpOneMBTransferSize__private_featureState & 0x10) != 0 )
    return Feature_CrashDumpOneMBTransferSize__private_featureState & 1;
  else
    return Feature_CrashDumpOneMBTransferSize__private_IsEnabledFallback(
             (unsigned int)Feature_CrashDumpOneMBTransferSize__private_featureState,
             3LL);
}

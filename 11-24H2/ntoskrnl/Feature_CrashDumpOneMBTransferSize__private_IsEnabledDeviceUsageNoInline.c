/*
 * XREFs of Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline @ 0x1405D0A68
 * Callers:
 *     PopHiberInitializeResources @ 0x1407507DC (PopHiberInitializeResources.c)
 *     PopPreallocateHibernateMemory @ 0x140750D6C (PopPreallocateHibernateMemory.c)
 *     PopAllocateHiberContext @ 0x140AC4284 (PopAllocateHiberContext.c)
 *     PopWriteHiberPages @ 0x140B60AA8 (PopWriteHiberPages.c)
 *     MmInvalidateDumpAddresses @ 0x140B65280 (MmInvalidateDumpAddresses.c)
 *     PopHiberCheckResume @ 0x140B709E0 (PopHiberCheckResume.c)
 *     PopSaveHiberContext @ 0x140B70CF0 (PopSaveHiberContext.c)
 *     MiInitializeCrashDumpPtes @ 0x140C56150 (MiInitializeCrashDumpPtes.c)
 * Callees:
 *     Feature_CrashDumpOneMBTransferSize__private_IsEnabledFallback @ 0x1405D0AA0 (Feature_CrashDumpOneMBTransferSize__private_IsEnabledFallback.c)
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

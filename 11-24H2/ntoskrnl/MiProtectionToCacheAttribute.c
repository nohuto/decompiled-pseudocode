/*
 * XREFs of MiProtectionToCacheAttribute @ 0x1402EF870
 * Callers:
 *     MmCheckCachedPageStates @ 0x140280E90 (MmCheckCachedPageStates.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14028F9F0 (MmMapLockedPagesSpecifyCache.c)
 *     MiGetHardFaultPages @ 0x1402D0AC8 (MiGetHardFaultPages.c)
 *     MiBuildMdlForMappedFileFault @ 0x1402E604C (MiBuildMdlForMappedFileFault.c)
 *     MiMapContiguousMemory @ 0x1402E9A9C (MiMapContiguousMemory.c)
 *     MiCreateSharedZeroPages @ 0x1402EED80 (MiCreateSharedZeroPages.c)
 *     MiMakePageAvoidRead @ 0x1402EF168 (MiMakePageAvoidRead.c)
 *     MiInitializeReadInProgressPfn @ 0x1402EF9B8 (MiInitializeReadInProgressPfn.c)
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 *     MiInitializeTransitionPfn @ 0x14031359C (MiInitializeTransitionPfn.c)
 *     MiMapContiguousMemoryLarge @ 0x1403A6D44 (MiMapContiguousMemoryLarge.c)
 *     MiAllocateLargeZeroPages @ 0x1403A7BB8 (MiAllocateLargeZeroPages.c)
 *     MiInsertPhysicalPteMapping @ 0x1403CFC94 (MiInsertPhysicalPteMapping.c)
 *     MiGetFastLargePages @ 0x1403D5E44 (MiGetFastLargePages.c)
 *     MiAllocateContiguousMemory @ 0x14041182C (MiAllocateContiguousMemory.c)
 *     MiIdealClusterPage @ 0x1404D205C (MiIdealClusterPage.c)
 *     MiGetClusterPage @ 0x1404D2DE4 (MiGetClusterPage.c)
 *     MiPrefetchPreallocatePages @ 0x1404D5620 (MiPrefetchPreallocatePages.c)
 *     MiPfPrepareSequentialReadList @ 0x140956378 (MiPfPrepareSequentialReadList.c)
 *     MiMapViewOfPhysicalSection @ 0x140A135A0 (MiMapViewOfPhysicalSection.c)
 *     MiFindLargePageMemory @ 0x140A92A7C (MiFindLargePageMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiProtectionToCacheAttribute(unsigned int a1)
{
  unsigned int v1; // edx

  v1 = 1;
  if ( !a1 )
    return 3LL;
  if ( a1 == 31 )
    return v1;
  if ( a1 >> 3 != 3 )
    return a1 >> 3 != 1;
  if ( (a1 & 7) == 0 )
    return v1;
  return 2LL;
}

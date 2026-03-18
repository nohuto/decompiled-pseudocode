/*
 * XREFs of MiAcquireNonPagedResources @ 0x140211200
 * Callers:
 *     MiFindContiguousPagesEx @ 0x140304960 (MiFindContiguousPagesEx.c)
 *     MiAllocateKernelStackPages @ 0x14039F96C (MiAllocateKernelStackPages.c)
 *     MiCreateSlabEntry @ 0x1403A112C (MiCreateSlabEntry.c)
 *     MiObtainMdlCharges @ 0x1404128E0 (MiObtainMdlCharges.c)
 *     MiMakePageBad @ 0x14047C9DC (MiMakePageBad.c)
 *     MiGetFileHashPage @ 0x140486B9C (MiGetFileHashPage.c)
 *     MmAllocateNonChargedSecurePages @ 0x14049D980 (MmAllocateNonChargedSecurePages.c)
 *     MiIdealClusterPage @ 0x1404D205C (MiIdealClusterPage.c)
 *     MiPrefetchPreallocatePages @ 0x1404D5620 (MiPrefetchPreallocatePages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140674B50 (MmMarkPhysicalMemoryAsBad.c)
 *     MiMoveBadPageChargesCrossPartition @ 0x1406835E0 (MiMoveBadPageChargesCrossPartition.c)
 *     MmAllocateSecureKernelPages @ 0x140688AC4 (MmAllocateSecureKernelPages.c)
 *     MiMoveBadPagePartition @ 0x14068B054 (MiMoveBadPagePartition.c)
 *     MiStoreChargeReservedPages @ 0x14068BDD0 (MiStoreChargeReservedPages.c)
 *     MiProcessVaContiguityInformation @ 0x14068D0DC (MiProcessVaContiguityInformation.c)
 *     MmRemovePhysicalMemory @ 0x1407EA5D0 (MmRemovePhysicalMemory.c)
 *     MiAllocateFastAwePages @ 0x1407F833C (MiAllocateFastAwePages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407FB6A4 (MiAllocatePartitionPhysicalPages.c)
 *     MiAllocateProcessShadow @ 0x140A5A1B0 (MiAllocateProcessShadow.c)
 *     MiMapSystemImage @ 0x140A8B428 (MiMapSystemImage.c)
 *     MiChargeSystemImageCommitment @ 0x140A9E2DC (MiChargeSystemImageCommitment.c)
 *     MiAllocateDummyPage @ 0x140C4EBD8 (MiAllocateDummyPage.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C5428C (MmInitializeImageViewExtensionCfg.c)
 *     MiUpdateBootHpatPagesInUse @ 0x140C568E8 (MiUpdateBootHpatPagesInUse.c)
 *     MiInitializeBootShadowStackPage @ 0x140C5712C (MiInitializeBootShadowStackPage.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140C5B14C (MiInitializeBootLoadedDriverPfns.c)
 * Callees:
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     MiChargeResident @ 0x1402F5FA0 (MiChargeResident.c)
 *     MiChargePartitionResidentAvailable @ 0x1402F6BC0 (MiChargePartitionResidentAvailable.c)
 */

__int64 __fastcall MiAcquireNonPagedResources(ULONG *a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  int v7; // edx
  unsigned int v8; // esi
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int32 CachedResidentAvailable; // eax
  unsigned __int32 v11; // ett

  if ( (a4 & 1) != 0 )
  {
    MiChargeCommit(a1, a2, 4LL);
    MiChargeResident(a1, a2, 0xFFFFFFFFLL);
    return 0LL;
  }
  v7 = (a4 >> 1) & 1 | 2;
  if ( (a4 & 4) == 0 )
    v7 = (a4 >> 1) & 1;
  v8 = v7 | 0x10;
  if ( (a4 & 8) == 0 )
    v8 = v7;
  if ( !(unsigned int)MiChargeCommit(a1, a2, v8) )
    return 3221225773LL;
  if ( a1 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    while ( a2 <= CachedResidentAvailable && CachedResidentAvailable != -1 )
    {
      v11 = CachedResidentAvailable;
      CachedResidentAvailable = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                  CachedResidentAvailable - a2,
                                  CachedResidentAvailable);
      if ( v11 == CachedResidentAvailable )
        return 0LL;
    }
  }
  if ( (unsigned int)MiChargePartitionResidentAvailable(a1, a2, a3) )
    return 0LL;
  MiReturnCommit(a1, a2, v8);
  return 3221225626LL;
}

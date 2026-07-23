/*
 * XREFs of MiAcquireNonPagedResources @ 0x14033A560
 * Callers:
 *     MiAllocateKernelStackPages @ 0x14021639C (MiAllocateKernelStackPages.c)
 *     MiCreateSlabEntry @ 0x140217C8C (MiCreateSlabEntry.c)
 *     MiFindContiguousPagesEx @ 0x14030E840 (MiFindContiguousPagesEx.c)
 *     MiObtainMdlCharges @ 0x140394D20 (MiObtainMdlCharges.c)
 *     MiGetFileHashPage @ 0x1404264BC (MiGetFileHashPage.c)
 *     MiMakePageBad @ 0x140477B64 (MiMakePageBad.c)
 *     MmAllocateNonChargedSecurePages @ 0x140498780 (MmAllocateNonChargedSecurePages.c)
 *     MiIdealClusterPage @ 0x1404CB218 (MiIdealClusterPage.c)
 *     MiPrefetchPreallocatePages @ 0x1404CEA68 (MiPrefetchPreallocatePages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140675D20 (MmMarkPhysicalMemoryAsBad.c)
 *     MiMoveBadPageChargesCrossPartition @ 0x14068478C (MiMoveBadPageChargesCrossPartition.c)
 *     MmAllocateSecureKernelPages @ 0x140689BF4 (MmAllocateSecureKernelPages.c)
 *     MiMoveBadPagePartition @ 0x14068C184 (MiMoveBadPagePartition.c)
 *     MiStoreChargeReservedPages @ 0x14068CF00 (MiStoreChargeReservedPages.c)
 *     MiProcessVaContiguityInformation @ 0x14068E20C (MiProcessVaContiguityInformation.c)
 *     MmRemovePhysicalMemory @ 0x1407EABA0 (MmRemovePhysicalMemory.c)
 *     MiAllocateFastAwePages @ 0x1407F8AAC (MiAllocateFastAwePages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407FBE14 (MiAllocatePartitionPhysicalPages.c)
 *     MiAllocateProcessShadow @ 0x140A51A70 (MiAllocateProcessShadow.c)
 *     MiMapSystemImage @ 0x140A87914 (MiMapSystemImage.c)
 *     MiChargeSystemImageCommitment @ 0x140A9984C (MiChargeSystemImageCommitment.c)
 *     MiAllocateDummyPage @ 0x140C50D68 (MiAllocateDummyPage.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C5641C (MmInitializeImageViewExtensionCfg.c)
 *     MiUpdateBootHpatPagesInUse @ 0x140C58A78 (MiUpdateBootHpatPagesInUse.c)
 *     MiInitializeBootShadowStackPage @ 0x140C592BC (MiInitializeBootShadowStackPage.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140C5D2DC (MiInitializeBootLoadedDriverPfns.c)
 * Callees:
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiChargeResident @ 0x14033DD30 (MiChargeResident.c)
 *     MiChargePartitionResidentAvailable @ 0x14033ECD0 (MiChargePartitionResidentAvailable.c)
 */

__int64 __fastcall MiAcquireNonPagedResources(ULONG *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // edx
  unsigned int v8; // esi
  __int64 v9; // r9
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int32 CachedResidentAvailable; // eax
  unsigned __int32 v12; // ett

  if ( (a4 & 1) != 0 )
  {
    MiChargeCommit(a1, a2, 4LL, a4);
    MiChargeResident(a1, a2, 0xFFFFFFFFLL);
    return 0LL;
  }
  v7 = ((unsigned int)a4 >> 1) & 1 | 2;
  if ( (a4 & 4) == 0 )
    v7 = ((unsigned int)a4 >> 1) & 1;
  v8 = v7 | 0x10;
  if ( (a4 & 8) == 0 )
    v8 = v7;
  if ( !(unsigned int)MiChargeCommit(a1, a2, v8, a4) )
    return 3221225773LL;
  if ( a1 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    while ( a2 <= CachedResidentAvailable && CachedResidentAvailable != -1 )
    {
      v12 = CachedResidentAvailable;
      CachedResidentAvailable = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                  CachedResidentAvailable - a2,
                                  CachedResidentAvailable);
      if ( v12 == CachedResidentAvailable )
        return 0LL;
    }
  }
  if ( (unsigned int)MiChargePartitionResidentAvailable(a1, a2, a3, v9) )
    return 0LL;
  MiReturnCommit((__int64)a1, a2, v8);
  return 3221225626LL;
}

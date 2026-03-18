/*
 * XREFs of MiAcquireNonPagedResources @ 0x14022E560
 * Callers:
 *     MiFindContiguousPagesEx @ 0x14021E3E0 (MiFindContiguousPagesEx.c)
 *     MiAllocateKernelStackPages @ 0x1402282B8 (MiAllocateKernelStackPages.c)
 *     MiGetFileHashPage @ 0x1402D1F24 (MiGetFileHashPage.c)
 *     MiCreateSlabEntry @ 0x140376BF8 (MiCreateSlabEntry.c)
 *     MiObtainMdlCharges @ 0x140415E40 (MiObtainMdlCharges.c)
 *     MiMakePageBad @ 0x14047BA9C (MiMakePageBad.c)
 *     MmAllocateNonChargedSecurePages @ 0x14049E89C (MmAllocateNonChargedSecurePages.c)
 *     MiIdealClusterPage @ 0x1404D210C (MiIdealClusterPage.c)
 *     MiPrefetchPreallocatePages @ 0x1404D5F34 (MiPrefetchPreallocatePages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1406690F0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiMoveBadPageChargesCrossPartition @ 0x140677DDC (MiMoveBadPageChargesCrossPartition.c)
 *     MmAllocateSecureKernelPages @ 0x14067D234 (MmAllocateSecureKernelPages.c)
 *     MiMoveBadPagePartition @ 0x14067F7C4 (MiMoveBadPagePartition.c)
 *     MiStoreChargeReservedPages @ 0x140680540 (MiStoreChargeReservedPages.c)
 *     MiProcessVaContiguityInformation @ 0x14068184C (MiProcessVaContiguityInformation.c)
 *     MmRemovePhysicalMemory @ 0x1407DA710 (MmRemovePhysicalMemory.c)
 *     MiAllocateFastAwePages @ 0x1407E84AC (MiAllocateFastAwePages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407EB814 (MiAllocatePartitionPhysicalPages.c)
 *     MiAllocateProcessShadow @ 0x140A47EB0 (MiAllocateProcessShadow.c)
 *     MiMapSystemImage @ 0x140A869D8 (MiMapSystemImage.c)
 *     MiChargeSystemImageCommitment @ 0x140A988C4 (MiChargeSystemImageCommitment.c)
 *     MiAllocateDummyPage @ 0x140C3D9A8 (MiAllocateDummyPage.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C43014 (MmInitializeImageViewExtensionCfg.c)
 *     MiUpdateBootHpatPagesInUse @ 0x140C45608 (MiUpdateBootHpatPagesInUse.c)
 *     MiInitializeBootShadowStackPage @ 0x140C45E4C (MiInitializeBootShadowStackPage.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140C49DC0 (MiInitializeBootLoadedDriverPfns.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x14022BAA0 (MiChargePartitionResidentAvailable.c)
 *     MiChargeResident @ 0x14022CAE0 (MiChargeResident.c)
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 */

__int64 __fastcall MiAcquireNonPagedResources(ULONG *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // edx
  unsigned int v8; // esi
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int32 CachedResidentAvailable; // eax
  unsigned __int32 v11; // ett

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
      v11 = CachedResidentAvailable;
      CachedResidentAvailable = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                  CachedResidentAvailable - a2,
                                  CachedResidentAvailable);
      if ( v11 == CachedResidentAvailable )
        return 0LL;
    }
  }
  if ( (unsigned int)MiChargePartitionResidentAvailable((__int64)a1, a2, a3) )
    return 0LL;
  MiReturnCommit(a1, a2, v8);
  return 3221225626LL;
}

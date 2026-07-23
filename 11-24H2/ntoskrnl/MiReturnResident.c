/*
 * XREFs of MiReturnResident @ 0x140338A10
 * Callers:
 *     MiDeleteSegmentPages @ 0x140203D4C (MiDeleteSegmentPages.c)
 *     MiLockPageTablePage @ 0x140205E40 (MiLockPageTablePage.c)
 *     MiReturnCloneCharges @ 0x140206FD0 (MiReturnCloneCharges.c)
 *     MiResolveMappedFileFault @ 0x140214824 (MiResolveMappedFileFault.c)
 *     MmFreeIndependentPages @ 0x14021D100 (MmFreeIndependentPages.c)
 *     MiDeleteKernelStackPages @ 0x14021F734 (MiDeleteKernelStackPages.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14022EA80 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiDeletePartialVad @ 0x1402675A0 (MiDeletePartialVad.c)
 *     MiGetCloneCharges @ 0x140269B50 (MiGetCloneCharges.c)
 *     MiCreateLargePfnList @ 0x14026A8C0 (MiCreateLargePfnList.c)
 *     MmReleaseResourceCharge @ 0x1402F8EFC (MmReleaseResourceCharge.c)
 *     MiCommitExistingVad @ 0x140306380 (MiCommitExistingVad.c)
 *     MiReferenceActiveSubsection @ 0x1403374A0 (MiReferenceActiveSubsection.c)
 *     MiUnmapViewSubsections @ 0x140337FB0 (MiUnmapViewSubsections.c)
 *     MiCheckControlArea @ 0x140338330 (MiCheckControlArea.c)
 *     SmAcquireReleaseCharges @ 0x14033A050 (SmAcquireReleaseCharges.c)
 *     MmChargeResources @ 0x14033BB60 (MmChargeResources.c)
 *     MiChargePartitionResidentAvailable @ 0x14033ECD0 (MiChargePartitionResidentAvailable.c)
 *     MiReleaseNonPagedResourcesNotExposed @ 0x14039895C (MiReleaseNonPagedResourcesNotExposed.c)
 *     MiReleaseWriteInProgressCharges @ 0x14042CD34 (MiReleaseWriteInProgressCharges.c)
 *     MiReturnPoolCharges @ 0x14044FBA4 (MiReturnPoolCharges.c)
 *     MiReturnSystemCharges @ 0x14044FC38 (MiReturnSystemCharges.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14046C954 (MmAdjustWorkingSetSizeEx.c)
 *     MiReturnFaultCharges @ 0x14047CD94 (MiReturnFaultCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B34A4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiIdealClusterPage @ 0x1404CB218 (MiIdealClusterPage.c)
 *     MiEnableNewPfns @ 0x14066DC8C (MiEnableNewPfns.c)
 *     MiMarkBootGuardPage @ 0x1406810CC (MiMarkBootGuardPage.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x140692A4C (MiAllocateLargeProcessPagesFromCache.c)
 *     MiFreeAweView @ 0x1406F3720 (MiFreeAweView.c)
 *     MiChargeLargeProtoSubsection @ 0x1407F0364 (MiChargeLargeProtoSubsection.c)
 *     MiDeletePartitionResources @ 0x1407FC4B4 (MiDeletePartitionResources.c)
 *     MiFreePartitionPhysicalPages @ 0x1407FC86C (MiFreePartitionPhysicalPages.c)
 *     MiReturnVadCharges @ 0x140919B48 (MiReturnVadCharges.c)
 *     MiCreatePagingFileMap @ 0x14098CB78 (MiCreatePagingFileMap.c)
 *     MiRemoveVadCharges @ 0x14099A074 (MiRemoveVadCharges.c)
 *     MmCleanProcessAddressSpace @ 0x140A03374 (MmCleanProcessAddressSpace.c)
 *     MiCleanEmbryonicProcess @ 0x140A03620 (MiCleanEmbryonicProcess.c)
 *     MiUnloadSystemImage @ 0x140A870C4 (MiUnloadSystemImage.c)
 *     MiUnmapReturnCharges @ 0x140A8BE9C (MiUnmapReturnCharges.c)
 *     MmReturnChargesToLockPagedPool @ 0x140AB5BF0 (MmReturnChargesToLockPagedPool.c)
 *     MmCreateProcessAddressSpace @ 0x140AE7AA8 (MmCreateProcessAddressSpace.c)
 *     MmDeleteProcessAddressSpace @ 0x140AE7D64 (MmDeleteProcessAddressSpace.c)
 *     MiInitializeBootShadowStackPage @ 0x140C592BC (MiInitializeBootShadowStackPage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiReturnResident(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r9
  signed __int32 CachedResidentAvailable; // r8d
  bool v5; // zf

  result = (unsigned __int64)&MiSystemPartition;
  if ( (ULONG *)a1 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    if ( CachedResidentAvailable != -1 )
    {
      do
      {
        result = a2 + CachedResidentAvailable;
        if ( result > 0x100 || a2 >= 0x80000 )
          break;
        result = (unsigned int)_InterlockedCompareExchange(
                                 (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                 a2 + CachedResidentAvailable,
                                 CachedResidentAvailable);
        v5 = CachedResidentAvailable == (_DWORD)result;
        CachedResidentAvailable = result;
        if ( v5 )
          return result;
      }
      while ( (_DWORD)result != -1 );
      if ( CachedResidentAvailable > 192 )
      {
        result = (unsigned int)_InterlockedCompareExchange(
                                 (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                 192,
                                 CachedResidentAvailable);
        if ( CachedResidentAvailable == (_DWORD)result )
        {
          result = CachedResidentAvailable - 192;
          a2 += result;
        }
      }
    }
  }
  if ( a2 )
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 18752), a2);
  return result;
}

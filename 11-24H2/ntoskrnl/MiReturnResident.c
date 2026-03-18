/*
 * XREFs of MiReturnResident @ 0x14020F6B0
 * Callers:
 *     MiReferenceActiveSubsection @ 0x14020E140 (MiReferenceActiveSubsection.c)
 *     MiUnmapViewSubsections @ 0x14020EC50 (MiUnmapViewSubsections.c)
 *     MiCheckControlArea @ 0x14020EFD0 (MiCheckControlArea.c)
 *     SmAcquireReleaseCharges @ 0x140210CF0 (SmAcquireReleaseCharges.c)
 *     MmChargeResources @ 0x140212800 (MmChargeResources.c)
 *     MiCommitExistingVad @ 0x140213020 (MiCommitExistingVad.c)
 *     MiResolveMappedFileFault @ 0x140239490 (MiResolveMappedFileFault.c)
 *     MiReturnCloneCharges @ 0x14023EE80 (MiReturnCloneCharges.c)
 *     MiDeleteKernelStackPages @ 0x14026A1A4 (MiDeleteKernelStackPages.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402794F0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiLockPageTablePage @ 0x140284A20 (MiLockPageTablePage.c)
 *     MiChargePartitionResidentAvailable @ 0x1402F6BC0 (MiChargePartitionResidentAvailable.c)
 *     MiGetCloneCharges @ 0x14036E068 (MiGetCloneCharges.c)
 *     MiCreateLargePfnList @ 0x14036E934 (MiCreateLargePfnList.c)
 *     MiDeleteSegmentPages @ 0x1403707BC (MiDeleteSegmentPages.c)
 *     MmReleaseResourceCharge @ 0x14039BBFC (MmReleaseResourceCharge.c)
 *     MmFreeIndependentPages @ 0x14039EC60 (MmFreeIndependentPages.c)
 *     MiReleaseNonPagedResourcesNotExposed @ 0x1403A9CCC (MiReleaseNonPagedResourcesNotExposed.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403CD164 (MmAdjustWorkingSetSizeEx.c)
 *     MiDeletePartialVad @ 0x1403CDE5C (MiDeletePartialVad.c)
 *     MiReleaseWriteInProgressCharges @ 0x14043A500 (MiReleaseWriteInProgressCharges.c)
 *     MiReturnPoolCharges @ 0x14045A754 (MiReturnPoolCharges.c)
 *     MiReturnSystemCharges @ 0x14045A7E8 (MiReturnSystemCharges.c)
 *     MiReturnFaultCharges @ 0x140481AD4 (MiReturnFaultCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B8B54 (MiReturnCrossPartitionSectionCharges.c)
 *     MiIdealClusterPage @ 0x1404D205C (MiIdealClusterPage.c)
 *     MiEnableNewPfns @ 0x14066CABC (MiEnableNewPfns.c)
 *     MiMarkBootGuardPage @ 0x14067FECC (MiMarkBootGuardPage.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x14069197C (MiAllocateLargeProcessPagesFromCache.c)
 *     MiFreeAweView @ 0x1406F5720 (MiFreeAweView.c)
 *     MiChargeLargeProtoSubsection @ 0x1407EFD94 (MiChargeLargeProtoSubsection.c)
 *     MiDeletePartitionResources @ 0x1407FBD44 (MiDeletePartitionResources.c)
 *     MiFreePartitionPhysicalPages @ 0x1407FC0FC (MiFreePartitionPhysicalPages.c)
 *     MiReturnVadCharges @ 0x1408E2F98 (MiReturnVadCharges.c)
 *     MiCreatePagingFileMap @ 0x140942908 (MiCreatePagingFileMap.c)
 *     MiRemoveVadCharges @ 0x1409B0374 (MiRemoveVadCharges.c)
 *     MmCleanProcessAddressSpace @ 0x140A06E44 (MmCleanProcessAddressSpace.c)
 *     MiCleanEmbryonicProcess @ 0x140A070F0 (MiCleanEmbryonicProcess.c)
 *     MiUnloadSystemImage @ 0x140A8AD84 (MiUnloadSystemImage.c)
 *     MiUnmapReturnCharges @ 0x140A8F804 (MiUnmapReturnCharges.c)
 *     MmReturnChargesToLockPagedPool @ 0x140ABABD0 (MmReturnChargesToLockPagedPool.c)
 *     MmCreateProcessAddressSpace @ 0x140AE61C8 (MmCreateProcessAddressSpace.c)
 *     MmDeleteProcessAddressSpace @ 0x140AE6484 (MmDeleteProcessAddressSpace.c)
 *     MiInitializeBootShadowStackPage @ 0x140C5712C (MiInitializeBootShadowStackPage.c)
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

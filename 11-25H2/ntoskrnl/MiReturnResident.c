/*
 * XREFs of MiReturnResident @ 0x14022F8D0
 * Callers:
 *     MmReleaseResourceCharge @ 0x14020C540 (MmReleaseResourceCharge.c)
 *     MiReferenceActiveSubsection @ 0x1402140B0 (MiReferenceActiveSubsection.c)
 *     MmFreeIndependentPages @ 0x140227210 (MmFreeIndependentPages.c)
 *     MiResolveMappedFileFault @ 0x1402276BC (MiResolveMappedFileFault.c)
 *     MiChargePartitionResidentAvailable @ 0x14022BAA0 (MiChargePartitionResidentAvailable.c)
 *     MmChargeResources @ 0x14022E140 (MmChargeResources.c)
 *     SmAcquireReleaseCharges @ 0x14022E380 (SmAcquireReleaseCharges.c)
 *     MiCheckControlArea @ 0x14022F1E0 (MiCheckControlArea.c)
 *     MiLockPageTablePage @ 0x1402AC2E0 (MiLockPageTablePage.c)
 *     MiGetCloneCharges @ 0x1402CF39C (MiGetCloneCharges.c)
 *     MiReturnCloneCharges @ 0x14033FDD4 (MiReturnCloneCharges.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140349F10 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiReturnPoolCharges @ 0x140377D44 (MiReturnPoolCharges.c)
 *     MiReturnSystemCharges @ 0x140377DD8 (MiReturnSystemCharges.c)
 *     MiCommitExistingVad @ 0x1403840D0 (MiCommitExistingVad.c)
 *     MiReleaseNonPagedResourcesNotExposed @ 0x14038B398 (MiReleaseNonPagedResourcesNotExposed.c)
 *     MiDeleteKernelStackPages @ 0x1403B3258 (MiDeleteKernelStackPages.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403C5254 (MmAdjustWorkingSetSizeEx.c)
 *     MiCreateLargePfnList @ 0x140405A3C (MiCreateLargePfnList.c)
 *     MiReleaseWriteInProgressCharges @ 0x14040AC14 (MiReleaseWriteInProgressCharges.c)
 *     MiDeleteSegmentPages @ 0x14044A758 (MiDeleteSegmentPages.c)
 *     MiReturnFaultCharges @ 0x140480970 (MiReturnFaultCharges.c)
 *     MiSwitchToTransition @ 0x1404AC960 (MiSwitchToTransition.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B9590 (MiReturnCrossPartitionSectionCharges.c)
 *     MiIdealClusterPage @ 0x1404D210C (MiIdealClusterPage.c)
 *     MiEnableNewPfns @ 0x140660F7C (MiEnableNewPfns.c)
 *     MiMarkBootGuardPage @ 0x1406746AC (MiMarkBootGuardPage.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x14068651C (MiAllocateLargeProcessPagesFromCache.c)
 *     MiFreeAweView @ 0x1406E9DC4 (MiFreeAweView.c)
 *     MiChargeLargeProtoSubsection @ 0x1407DFEF4 (MiChargeLargeProtoSubsection.c)
 *     MiDeletePartitionResources @ 0x1407EBEB4 (MiDeletePartitionResources.c)
 *     MiFreePartitionPhysicalPages @ 0x1407EC26C (MiFreePartitionPhysicalPages.c)
 *     MmDeleteProcessAddressSpace @ 0x1408D7B40 (MmDeleteProcessAddressSpace.c)
 *     MiReturnVadCharges @ 0x140901270 (MiReturnVadCharges.c)
 *     MiRemoveVadCharges @ 0x140901C48 (MiRemoveVadCharges.c)
 *     MiCreatePagingFileMap @ 0x14093E008 (MiCreatePagingFileMap.c)
 *     MmCleanProcessAddressSpace @ 0x140A04D48 (MmCleanProcessAddressSpace.c)
 *     MiCleanEmbryonicProcess @ 0x140A04FF4 (MiCleanEmbryonicProcess.c)
 *     MmCreateProcessAddressSpace @ 0x140A47B88 (MmCreateProcessAddressSpace.c)
 *     MiUnloadSystemImage @ 0x140A862D4 (MiUnloadSystemImage.c)
 *     MiUnmapReturnCharges @ 0x140A8A838 (MiUnmapReturnCharges.c)
 *     MmReturnChargesToLockPagedPool @ 0x140AB6890 (MmReturnChargesToLockPagedPool.c)
 *     MiInitializeBootShadowStackPage @ 0x140C45E4C (MiInitializeBootShadowStackPage.c)
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

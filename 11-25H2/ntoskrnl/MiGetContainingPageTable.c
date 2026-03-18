/*
 * XREFs of MiGetContainingPageTable @ 0x1402C3750
 * Callers:
 *     MmCopyToCachedPage @ 0x140223414 (MmCopyToCachedPage.c)
 *     MiMakeSystemCachePteValid @ 0x140225760 (MiMakeSystemCachePteValid.c)
 *     MiWsleFree @ 0x14022FD60 (MiWsleFree.c)
 *     MiCompleteProtoPteFault @ 0x140232170 (MiCompleteProtoPteFault.c)
 *     MiLinkPoolCommitChain @ 0x140238250 (MiLinkPoolCommitChain.c)
 *     MiInitializeReadInProgressPfn @ 0x14023B62C (MiInitializeReadInProgressPfn.c)
 *     MmUnmapViewInSystemCache @ 0x14023D300 (MmUnmapViewInSystemCache.c)
 *     MiAssignNonPagedPoolPte @ 0x1402C3250 (MiAssignNonPagedPoolPte.c)
 *     MiDeleteClusterPage @ 0x1402C48B0 (MiDeleteClusterPage.c)
 *     MiMakeSystemCacheRangeValid @ 0x1402C5040 (MiMakeSystemCacheRangeValid.c)
 *     MiUnlockWsle @ 0x1402CC3B4 (MiUnlockWsle.c)
 *     MiCombineInitialInstance @ 0x1402CE290 (MiCombineInitialInstance.c)
 *     MiInitializeSystemPageTable @ 0x1402D04C8 (MiInitializeSystemPageTable.c)
 *     MiInsertPhysicalPteMapping @ 0x140338440 (MiInsertPhysicalPteMapping.c)
 *     MiInitializeHardFaultPfn @ 0x140339E34 (MiInitializeHardFaultPfn.c)
 *     MiDemoteCombinedPte @ 0x14037EFEC (MiDemoteCombinedPte.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiResolveProtoCombine @ 0x14038AD20 (MiResolveProtoCombine.c)
 *     MiDecommitLargePoolVa @ 0x14038BEF0 (MiDecommitLargePoolVa.c)
 *     MiDeleteRotateVa @ 0x14039106C (MiDeleteRotateVa.c)
 *     MiUnmapMdlCommon @ 0x140412070 (MiUnmapMdlCommon.c)
 *     MiInitializeTransitionPfn @ 0x140453E64 (MiInitializeTransitionPfn.c)
 *     MiCompleteRestrictedImageFault @ 0x140464CC4 (MiCompleteRestrictedImageFault.c)
 *     MiUnmapKernelScp @ 0x14049F14C (MiUnmapKernelScp.c)
 *     MiTrimSystemImagePages @ 0x1404A70E0 (MiTrimSystemImagePages.c)
 *     MiSwitchToTransition @ 0x1404AC960 (MiSwitchToTransition.c)
 *     MiDecommitFreePagesTail @ 0x1404EDBB0 (MiDecommitFreePagesTail.c)
 *     MiMapKernelScp @ 0x1404EE5D8 (MiMapKernelScp.c)
 *     MiMakeLargePageTable @ 0x1404F59B4 (MiMakeLargePageTable.c)
 *     MiInitializeNewPfns @ 0x140660094 (MiInitializeNewPfns.c)
 *     MmContainingPageForReservedMapping @ 0x1406636F4 (MmContainingPageForReservedMapping.c)
 *     MmMapDriverTablePage @ 0x14067213C (MmMapDriverTablePage.c)
 *     MI_GET_DIRECTORY_FRAME_FROM_PROCESS_PDE @ 0x1406780F8 (MI_GET_DIRECTORY_FRAME_FROM_PROCESS_PDE.c)
 *     MiCaptureSparsePages @ 0x1407EA86C (MiCaptureSparsePages.c)
 *     MiClearStaleSecurePageMapping @ 0x140C3FD28 (MiClearStaleSecurePageMapping.c)
 *     MxCreatePfnsForPtes @ 0x140C41600 (MxCreatePfnsForPtes.c)
 *     MiFillGapPtes @ 0x140C43B10 (MiFillGapPtes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetContainingPageTable(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rax
  __int64 v4; // rcx
  _KPROCESS *Process; // r9
  unsigned __int64 KernelWaitTime; // r8
  __int64 v7; // rdx

  v1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v2 = *(_QWORD *)v1;
  if ( v1 >= 0xFFFFF6FB7DBED000uLL && v1 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v4 = *(_QWORD *)v1;
    if ( (v2 & 1) != 0 && ((v2 & 0x42) == 0 || (v2 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v7 = *(_QWORD *)(KernelWaitTime + 8 * ((v1 >> 3) & 0x1FF));
          if ( (v7 & 0x20) != 0 )
            v4 = v2 | 0x20;
          v2 = v4 | 0x42;
          if ( (v7 & 0x42) == 0 )
            v2 = v4;
        }
      }
    }
  }
  return (v2 >> 12) & 0xFFFFFFFFFFLL;
}

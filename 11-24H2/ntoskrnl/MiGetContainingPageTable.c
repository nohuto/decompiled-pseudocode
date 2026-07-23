/*
 * XREFs of MiGetContainingPageTable @ 0x14034E470
 * Callers:
 *     MiLinkPoolCommitChain @ 0x1402077F0 (MiLinkPoolCommitChain.c)
 *     MiMakeSystemCacheRangeValid @ 0x14020BFD0 (MiMakeSystemCacheRangeValid.c)
 *     MiCompleteRestrictedImageFault @ 0x140213BC4 (MiCompleteRestrictedImageFault.c)
 *     MiDecommitLargePoolVa @ 0x14021BCD4 (MiDecommitLargePoolVa.c)
 *     MiMakeSystemCachePteValid @ 0x14021C440 (MiMakeSystemCachePteValid.c)
 *     MiWsleFree @ 0x140248D20 (MiWsleFree.c)
 *     MiInitializeReadInProgressPfn @ 0x1402558FC (MiInitializeReadInProgressPfn.c)
 *     MmUnmapViewInSystemCache @ 0x1402572A0 (MmUnmapViewInSystemCache.c)
 *     MiCombineInitialInstance @ 0x140294F94 (MiCombineInitialInstance.c)
 *     MiDemoteCombinedPte @ 0x140296374 (MiDemoteCombinedPte.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiInitializeHardFaultPfn @ 0x140347C54 (MiInitializeHardFaultPfn.c)
 *     MiAssignNonPagedPoolPte @ 0x14034CC00 (MiAssignNonPagedPoolPte.c)
 *     MiCompleteProtoPteFault @ 0x14034D360 (MiCompleteProtoPteFault.c)
 *     MiDeleteClusterPage @ 0x14034E8B0 (MiDeleteClusterPage.c)
 *     MmCopyToCachedPage @ 0x14034F0D4 (MmCopyToCachedPage.c)
 *     MiDeleteRotateVa @ 0x14038DD68 (MiDeleteRotateVa.c)
 *     MiInitializeSystemPageTable @ 0x14038F158 (MiInitializeSystemPageTable.c)
 *     MiInsertPhysicalPteMapping @ 0x1403910B8 (MiInsertPhysicalPteMapping.c)
 *     MiUnlockWsle @ 0x1403DB664 (MiUnlockWsle.c)
 *     MiInitializeTransitionPfn @ 0x1403F2C1C (MiInitializeTransitionPfn.c)
 *     MiUnmapMdlCommon @ 0x140433530 (MiUnmapMdlCommon.c)
 *     MiResolveProtoCombine @ 0x14047C8C4 (MiResolveProtoCombine.c)
 *     MiUnmapKernelScp @ 0x140498D98 (MiUnmapKernelScp.c)
 *     MiTrimSystemImagePages @ 0x1404A24CC (MiTrimSystemImagePages.c)
 *     MiSwitchToTransition @ 0x1404EEE28 (MiSwitchToTransition.c)
 *     MiDecommitFreePagesTail @ 0x1404EF800 (MiDecommitFreePagesTail.c)
 *     MiMapKernelScp @ 0x1404F0048 (MiMapKernelScp.c)
 *     MiMakeLargePageTable @ 0x1404F5A48 (MiMakeLargePageTable.c)
 *     MiInitializeNewPfns @ 0x14066CDA4 (MiInitializeNewPfns.c)
 *     MmContainingPageForReservedMapping @ 0x1406703E4 (MmContainingPageForReservedMapping.c)
 *     MmMapDriverTablePage @ 0x14067EB4C (MmMapDriverTablePage.c)
 *     MI_GET_DIRECTORY_FRAME_FROM_PROCESS_PDE @ 0x140684AA8 (MI_GET_DIRECTORY_FRAME_FROM_PROCESS_PDE.c)
 *     MiCaptureSparsePages @ 0x1407FAE6C (MiCaptureSparsePages.c)
 *     MiClearStaleSecurePageMapping @ 0x140C530E8 (MiClearStaleSecurePageMapping.c)
 *     MxCreatePfnsForPtes @ 0x140C549C0 (MxCreatePfnsForPtes.c)
 *     MiFillGapPtes @ 0x140C56F20 (MiFillGapPtes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetContainingPageTable(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rax
  __int64 v3; // rcx
  _KPROCESS *Process; // r9
  unsigned __int64 KernelWaitTime; // r8
  __int64 v7; // rdx

  v1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v2 = *(_QWORD *)v1;
  if ( v1 >= 0xFFFFF6FB7DBED000uLL && v1 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v3 = *(_QWORD *)v1;
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
            v3 = v2 | 0x20;
          v2 = v3 | 0x42;
          if ( (v7 & 0x42) == 0 )
            v2 = v3;
        }
      }
    }
  }
  return (v2 >> 12) & 0xFFFFFFFFFFLL;
}

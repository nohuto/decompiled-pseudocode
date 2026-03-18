/*
 * XREFs of MiGetContainingPageTable @ 0x1402ECE30
 * Callers:
 *     MiWsleFree @ 0x14021BFD0 (MiWsleFree.c)
 *     MiCompleteRestrictedImageFault @ 0x140238F64 (MiCompleteRestrictedImageFault.c)
 *     MiLinkPoolCommitChain @ 0x14023F6A0 (MiLinkPoolCommitChain.c)
 *     MiMakeSystemCacheRangeValid @ 0x140243570 (MiMakeSystemCacheRangeValid.c)
 *     MiUnlockWsle @ 0x1402C7B94 (MiUnlockWsle.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiInitializeHardFaultPfn @ 0x1402E6618 (MiInitializeHardFaultPfn.c)
 *     MiAssignNonPagedPoolPte @ 0x1402EB5C0 (MiAssignNonPagedPoolPte.c)
 *     MiCompleteProtoPteFault @ 0x1402EBD20 (MiCompleteProtoPteFault.c)
 *     MiDeleteClusterPage @ 0x1402ED270 (MiDeleteClusterPage.c)
 *     MmCopyToCachedPage @ 0x1402EDA94 (MmCopyToCachedPage.c)
 *     MiInitializeReadInProgressPfn @ 0x1402EF9B8 (MiInitializeReadInProgressPfn.c)
 *     MmUnmapViewInSystemCache @ 0x1402F1760 (MmUnmapViewInSystemCache.c)
 *     MiInitializeTransitionPfn @ 0x14031359C (MiInitializeTransitionPfn.c)
 *     MiCombineInitialInstance @ 0x14036C3E0 (MiCombineInitialInstance.c)
 *     MiInitializeSystemPageTable @ 0x140395744 (MiInitializeSystemPageTable.c)
 *     MiDecommitLargePoolVa @ 0x1403A3F50 (MiDecommitLargePoolVa.c)
 *     MiDeleteRotateVa @ 0x1403CDA5C (MiDeleteRotateVa.c)
 *     MiInsertPhysicalPteMapping @ 0x1403CFC94 (MiInsertPhysicalPteMapping.c)
 *     MiDemoteCombinedPte @ 0x1403FABBC (MiDemoteCombinedPte.c)
 *     MiUnmapMdlCommon @ 0x14040F900 (MiUnmapMdlCommon.c)
 *     MiMakeSystemCachePteValid @ 0x14046F7A8 (MiMakeSystemCachePteValid.c)
 *     MiResolveProtoCombine @ 0x140481604 (MiResolveProtoCombine.c)
 *     MiUnmapKernelScp @ 0x14049DF98 (MiUnmapKernelScp.c)
 *     MiTrimSystemImagePages @ 0x1404A7A78 (MiTrimSystemImagePages.c)
 *     MiSwitchToTransition @ 0x1404F1388 (MiSwitchToTransition.c)
 *     MiDecommitFreePagesTail @ 0x1404F1D60 (MiDecommitFreePagesTail.c)
 *     MiMapKernelScp @ 0x1404F25A8 (MiMapKernelScp.c)
 *     MiMakeLargePageTable @ 0x1404F8168 (MiMakeLargePageTable.c)
 *     MiInitializeNewPfns @ 0x14066BBD4 (MiInitializeNewPfns.c)
 *     MmContainingPageForReservedMapping @ 0x14066F214 (MmContainingPageForReservedMapping.c)
 *     MmMapDriverTablePage @ 0x14067D94C (MmMapDriverTablePage.c)
 *     MI_GET_DIRECTORY_FRAME_FROM_PROCESS_PDE @ 0x14068394C (MI_GET_DIRECTORY_FRAME_FROM_PROCESS_PDE.c)
 *     MiCaptureSparsePages @ 0x1407FA6FC (MiCaptureSparsePages.c)
 *     MiClearStaleSecurePageMapping @ 0x140C50F58 (MiClearStaleSecurePageMapping.c)
 *     MxCreatePfnsForPtes @ 0x140C52830 (MxCreatePfnsForPtes.c)
 *     MiFillGapPtes @ 0x140C54D90 (MiFillGapPtes.c)
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

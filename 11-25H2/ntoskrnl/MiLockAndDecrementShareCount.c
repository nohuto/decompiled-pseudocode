/*
 * XREFs of MiLockAndDecrementShareCount @ 0x140227554
 * Callers:
 *     MiIssueHardFault @ 0x1402085EC (MiIssueHardFault.c)
 *     MiCombineWithStandbyExisting @ 0x140224A84 (MiCombineWithStandbyExisting.c)
 *     MiMakeSystemCachePteValid @ 0x140225760 (MiMakeSystemCachePteValid.c)
 *     MiAddSystemPageTableToList @ 0x1402270A8 (MiAddSystemPageTableToList.c)
 *     MmFreeIndependentPages @ 0x140227210 (MmFreeIndependentPages.c)
 *     MiOutPageSingleKernelStack @ 0x140228F50 (MiOutPageSingleKernelStack.c)
 *     MiCompleteProtoPteFault @ 0x140232170 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140233060 (MiResolveTransitionFault.c)
 *     MiCreateSharedZeroPages @ 0x14023B000 (MiCreateSharedZeroPages.c)
 *     MiCompletePrivateZeroFault @ 0x14024C030 (MiCompletePrivateZeroFault.c)
 *     MiCombineInitialInstance @ 0x1402CE290 (MiCombineInitialInstance.c)
 *     MiHandleForkTransitionPte @ 0x1402CF714 (MiHandleForkTransitionPte.c)
 *     MmOutSwapProcess @ 0x1402F1C40 (MmOutSwapProcess.c)
 *     MiDemoteCombinedPte @ 0x14037EFEC (MiDemoteCombinedPte.c)
 *     MiResolveProtoCombine @ 0x14038AD20 (MiResolveProtoCombine.c)
 *     MiDecommitLargePoolVa @ 0x14038BEF0 (MiDecommitLargePoolVa.c)
 *     MiReleaseInPageRefs @ 0x14041981C (MiReleaseInPageRefs.c)
 *     MiCompleteRestrictedImageFault @ 0x140464CC4 (MiCompleteRestrictedImageFault.c)
 *     MiUnmapKernelScp @ 0x14049F14C (MiUnmapKernelScp.c)
 *     MiMarkBootGuardPage @ 0x1406746AC (MiMarkBootGuardPage.c)
 *     MiOutSwapFreeSoftWslePxe @ 0x140685CB8 (MiOutSwapFreeSoftWslePxe.c)
 *     MiCaptureSparsePages @ 0x1407EA86C (MiCaptureSparsePages.c)
 *     MiClearStaleSecurePageMapping @ 0x140C3FD28 (MiClearStaleSecurePageMapping.c)
 *     MiInitializeBootShadowStackPage @ 0x140C45E4C (MiInitializeBootShadowStackPage.c)
 *     MiFreeBootDriverPages @ 0x140C54EE4 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiDecreaseUsedPtesInPfn @ 0x1402274AC (MiDecreaseUsedPtesInPfn.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiDecrementShareCountEx @ 0x1403427F0 (MiDecrementShareCountEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiLockAndDecrementShareCount(ULONG_PTR BugCheckParameter2, char a2)
{
  volatile signed __int32 *v2; // rbx
  unsigned __int8 v5; // di
  unsigned int v6; // esi
  __int64 v7; // rdx
  unsigned int v8; // esi

  v2 = (volatile signed __int32 *)(BugCheckParameter2 + 24);
  if ( (a2 & 2) != 0 )
  {
    v5 = 17;
    v6 = 0;
    while ( _interlockedbittestandset64(v2, 0x3FuLL) )
    {
      do
      {
        if ( (++v6 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(BugCheckParameter2) )
        {
          HvlNotifyLongSpinWait(v6);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)v2 < 0 );
    }
  }
  else
  {
    v5 = MiLockPageInline(BugCheckParameter2);
  }
  if ( (a2 & 1) != 0 )
    *(_QWORD *)(BugCheckParameter2 + 24) = *(_QWORD *)v2 | 0x4000000000000000LL;
  if ( (a2 & 4) != 0 )
    MiDecreaseUsedPtesInPfn(BugCheckParameter2, 1uLL);
  v8 = MiDecrementShareCountEx(BugCheckParameter2, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)v2, 0x7FFFFFFFFFFFFFFFuLL);
  if ( v5 < 2u )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v7) = v5;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
    }
    __writecr8(v5);
  }
  return v8;
}

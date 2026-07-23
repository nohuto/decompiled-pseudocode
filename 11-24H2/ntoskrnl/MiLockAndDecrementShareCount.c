/*
 * XREFs of MiLockAndDecrementShareCount @ 0x14021D444
 * Callers:
 *     MiCompleteRestrictedImageFault @ 0x140213BC4 (MiCompleteRestrictedImageFault.c)
 *     MiOutPageSingleKernelStack @ 0x140215F40 (MiOutPageSingleKernelStack.c)
 *     MiDecommitLargePoolVa @ 0x14021BCD4 (MiDecommitLargePoolVa.c)
 *     MiReleaseInPageRefs @ 0x14021C2D8 (MiReleaseInPageRefs.c)
 *     MiMakeSystemCachePteValid @ 0x14021C440 (MiMakeSystemCachePteValid.c)
 *     MiAddSystemPageTableToList @ 0x14021C950 (MiAddSystemPageTableToList.c)
 *     MmFreeIndependentPages @ 0x14021D100 (MmFreeIndependentPages.c)
 *     MiResolveTransitionFault @ 0x140247040 (MiResolveTransitionFault.c)
 *     MiHandleForkTransitionPte @ 0x1402678C4 (MiHandleForkTransitionPte.c)
 *     MiCombineInitialInstance @ 0x140294F94 (MiCombineInitialInstance.c)
 *     MiDemoteCombinedPte @ 0x140296374 (MiDemoteCombinedPte.c)
 *     MmOutSwapProcess @ 0x1402DDEEC (MmOutSwapProcess.c)
 *     MiCreateSharedZeroPages @ 0x140342A48 (MiCreateSharedZeroPages.c)
 *     MiCompleteProtoPteFault @ 0x14034D360 (MiCompleteProtoPteFault.c)
 *     MiIssueHardFault @ 0x140350280 (MiIssueHardFault.c)
 *     MiCombineWithStandbyExisting @ 0x1403F1098 (MiCombineWithStandbyExisting.c)
 *     MiResolveProtoCombine @ 0x14047C8C4 (MiResolveProtoCombine.c)
 *     MiUnmapKernelScp @ 0x140498D98 (MiUnmapKernelScp.c)
 *     MiMarkBootGuardPage @ 0x1406810CC (MiMarkBootGuardPage.c)
 *     MiOutSwapFreeSoftWslePxe @ 0x1406921E8 (MiOutSwapFreeSoftWslePxe.c)
 *     MiCaptureSparsePages @ 0x1407FAE6C (MiCaptureSparsePages.c)
 *     MiClearStaleSecurePageMapping @ 0x140C530E8 (MiClearStaleSecurePageMapping.c)
 *     MiInitializeBootShadowStackPage @ 0x140C592BC (MiInitializeBootShadowStackPage.c)
 *     MiFreeBootDriverPages @ 0x140C68CE8 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiDecreaseUsedPtesInPfn @ 0x14021D39C (MiDecreaseUsedPtesInPfn.c)
 *     MiDecrementShareCountEx @ 0x14024D2E0 (MiDecrementShareCountEx.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiLockAndDecrementShareCount(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 *v4; // rbx
  char v5; // r14
  unsigned __int8 v7; // di
  unsigned int v8; // esi
  __int64 v9; // rdx
  unsigned int v10; // esi

  v4 = (volatile signed __int32 *)(BugCheckParameter2 + 24);
  v5 = a2;
  if ( (a2 & 2) != 0 )
  {
    v7 = 17;
    v8 = 0;
    while ( _interlockedbittestandset64(v4, 0x3FuLL) )
    {
      do
      {
        if ( (++v8 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(BugCheckParameter2, a2, a3, a4) )
        {
          HvlNotifyLongSpinWait(v8);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)v4 < 0 );
    }
  }
  else
  {
    v7 = MiLockPageInline(BugCheckParameter2);
  }
  if ( (v5 & 1) != 0 )
    *(_QWORD *)(BugCheckParameter2 + 24) = *(_QWORD *)v4 | 0x4000000000000000LL;
  if ( (v5 & 4) != 0 )
    MiDecreaseUsedPtesInPfn(BugCheckParameter2, 1uLL);
  v10 = MiDecrementShareCountEx(BugCheckParameter2, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)v4, 0x7FFFFFFFFFFFFFFFuLL);
  if ( v7 < 2u )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v9) = v7;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
    }
    __writecr8(v7);
  }
  return v10;
}

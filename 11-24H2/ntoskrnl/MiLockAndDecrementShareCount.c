/*
 * XREFs of MiLockAndDecrementShareCount @ 0x14039EFA4
 * Callers:
 *     MiResolveTransitionFault @ 0x14021A2F0 (MiResolveTransitionFault.c)
 *     MiCompleteRestrictedImageFault @ 0x140238F64 (MiCompleteRestrictedImageFault.c)
 *     MiCompleteProtoPteFault @ 0x1402EBD20 (MiCompleteProtoPteFault.c)
 *     MiCreateSharedZeroPages @ 0x1402EED80 (MiCreateSharedZeroPages.c)
 *     MiCombineWithStandbyExisting @ 0x140313D4C (MiCombineWithStandbyExisting.c)
 *     MiCombineInitialInstance @ 0x14036C3E0 (MiCombineInitialInstance.c)
 *     MiHandleForkTransitionPte @ 0x14036D640 (MiHandleForkTransitionPte.c)
 *     MiReleaseInPageRefs @ 0x14036FDF4 (MiReleaseInPageRefs.c)
 *     MiIssueHardFault @ 0x140397B2C (MiIssueHardFault.c)
 *     MiAddSystemPageTableToList @ 0x14039E874 (MiAddSystemPageTableToList.c)
 *     MmFreeIndependentPages @ 0x14039EC60 (MmFreeIndependentPages.c)
 *     MiOutPageSingleKernelStack @ 0x14039F510 (MiOutPageSingleKernelStack.c)
 *     MiDecommitLargePoolVa @ 0x1403A3F50 (MiDecommitLargePoolVa.c)
 *     MiDemoteCombinedPte @ 0x1403FABBC (MiDemoteCombinedPte.c)
 *     MmOutSwapProcess @ 0x14042D50C (MmOutSwapProcess.c)
 *     MiMakeSystemCachePteValid @ 0x14046F7A8 (MiMakeSystemCachePteValid.c)
 *     MiResolveProtoCombine @ 0x140481604 (MiResolveProtoCombine.c)
 *     MiUnmapKernelScp @ 0x14049DF98 (MiUnmapKernelScp.c)
 *     MiMarkBootGuardPage @ 0x14067FECC (MiMarkBootGuardPage.c)
 *     MiOutSwapFreeSoftWslePxe @ 0x140691118 (MiOutSwapFreeSoftWslePxe.c)
 *     MiCaptureSparsePages @ 0x1407FA6FC (MiCaptureSparsePages.c)
 *     MiClearStaleSecurePageMapping @ 0x140C50F58 (MiClearStaleSecurePageMapping.c)
 *     MiInitializeBootShadowStackPage @ 0x140C5712C (MiInitializeBootShadowStackPage.c)
 *     MiFreeBootDriverPages @ 0x140C66B6C (MiFreeBootDriverPages.c)
 * Callees:
 *     MiDecrementShareCountEx @ 0x140220590 (MiDecrementShareCountEx.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiDecreaseUsedPtesInPfn @ 0x14039EEFC (MiDecreaseUsedPtesInPfn.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
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
          && KiCheckVpBackingLongSpinWaitHypercall() )
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

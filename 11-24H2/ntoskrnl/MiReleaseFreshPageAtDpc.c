/*
 * XREFs of MiReleaseFreshPageAtDpc @ 0x140222030
 * Callers:
 *     MiDeleteUltraThreadContext @ 0x14020C870 (MiDeleteUltraThreadContext.c)
 *     MiReleaseFreshPage @ 0x140221FC0 (MiReleaseFreshPage.c)
 *     MiLockCode @ 0x14023D6F0 (MiLockCode.c)
 *     MmCheckCachedPageStates @ 0x140280E90 (MmCheckCachedPageStates.c)
 *     MiDeleteUltraMapContext @ 0x1402D1B78 (MiDeleteUltraMapContext.c)
 *     MiManageUltraSpacePageTable @ 0x1402D1CC4 (MiManageUltraSpacePageTable.c)
 *     MiPrivateFixup @ 0x1402EE4F0 (MiPrivateFixup.c)
 *     MiFinishHardFault @ 0x1402F0070 (MiFinishHardFault.c)
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 *     MiSwapNumaStandbyPage @ 0x14039474C (MiSwapNumaStandbyPage.c)
 *     MiReplaceLockedPage @ 0x14039F10C (MiReplaceLockedPage.c)
 *     MiCompleteSecureProcessFault @ 0x140435C20 (MiCompleteSecureProcessFault.c)
 *     MiMakeDriverPagesPrivate @ 0x140436EA8 (MiMakeDriverPagesPrivate.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140442B00 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiFinalizeImageHeaderPage @ 0x14049EAB8 (MiFinalizeImageHeaderPage.c)
 *     MiSplitDirectMapPage @ 0x1404D14D0 (MiSplitDirectMapPage.c)
 *     MiIdealClusterPage @ 0x1404D205C (MiIdealClusterPage.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068CDFC (MiMakeVaRangePhysicallyContiguous.c)
 *     MiInitializeCacheFlushing @ 0x140C5A2D8 (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiReturnFreeZeroPage @ 0x1402220B0 (MiReturnFreeZeroPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiReleaseFreshPageAtDpc(__int64 a1)
{
  unsigned int v2; // edi
  __int64 result; // rax

  v2 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v2 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
      {
        HvlNotifyLongSpinWait(v2);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  MiReturnFreeZeroPage(a1, 0LL);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}

/*
 * XREFs of MiReleaseFreshPageAtDpc @ 0x140343330
 * Callers:
 *     MiDeleteUltraThreadContext @ 0x140211630 (MiDeleteUltraThreadContext.c)
 *     MiFinishHardFault @ 0x14023BBC0 (MiFinishHardFault.c)
 *     MmCheckCachedPageStates @ 0x14025B020 (MmCheckCachedPageStates.c)
 *     MiReleaseFreshPage @ 0x1403432C0 (MiReleaseFreshPage.c)
 *     MiResolvePageFileFault @ 0x14037AA3C (MiResolvePageFileFault.c)
 *     MiSwapNumaStandbyPage @ 0x1403B905C (MiSwapNumaStandbyPage.c)
 *     MiCompleteSecureProcessFault @ 0x1403F3164 (MiCompleteSecureProcessFault.c)
 *     MiMakeDriverPagesPrivate @ 0x1403F4388 (MiMakeDriverPagesPrivate.c)
 *     MiReplaceLockedPage @ 0x1403FE3AC (MiReplaceLockedPage.c)
 *     MiLockCode @ 0x1403FE950 (MiLockCode.c)
 *     MiPrivateFixup @ 0x140439BB4 (MiPrivateFixup.c)
 *     MiDeleteUltraMapContext @ 0x140450D20 (MiDeleteUltraMapContext.c)
 *     MiManageUltraSpacePageTable @ 0x140450E6C (MiManageUltraSpacePageTable.c)
 *     MiFinalizeImageHeaderPage @ 0x1404A1818 (MiFinalizeImageHeaderPage.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1404C22F8 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiSplitDirectMapPage @ 0x1404D1400 (MiSplitDirectMapPage.c)
 *     MiIdealClusterPage @ 0x1404D210C (MiIdealClusterPage.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068156C (MiMakeVaRangePhysicallyContiguous.c)
 *     MiInitializeCacheFlushing @ 0x140C48FA8 (MiInitializeCacheFlushing.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReturnFreeZeroPage @ 0x1403433B0 (MiReturnFreeZeroPage.c)
 */

__int64 __fastcall MiReleaseFreshPageAtDpc(__int64 a1)
{
  int v2; // edi
  __int64 result; // rax

  v2 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v2 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait();
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

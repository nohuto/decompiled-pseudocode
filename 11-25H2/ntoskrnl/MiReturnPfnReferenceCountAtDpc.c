/*
 * XREFs of MiReturnPfnReferenceCountAtDpc @ 0x14033BC20
 * Callers:
 *     MiFinishHardFault @ 0x14023BBC0 (MiFinishHardFault.c)
 *     MiResolveDemandZeroFault @ 0x140241160 (MiResolveDemandZeroFault.c)
 *     MiPfPutPagesInTransition @ 0x14033A50C (MiPfPutPagesInTransition.c)
 *     MiInitializeNewImageSectionProtos @ 0x1404536FC (MiInitializeNewImageSectionProtos.c)
 *     MiReturnPfnReferenceCount @ 0x14045416C (MiReturnPfnReferenceCount.c)
 *     MiReleasePrefetchGapPages @ 0x1404921E0 (MiReleasePrefetchGapPages.c)
 *     MiIdealClusterPage @ 0x1404D210C (MiIdealClusterPage.c)
 * Callees:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140234CD0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiReturnPfnReferenceCountAtDpc(ULONG_PTR a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int v5; // edi
  __int64 result; // rax

  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) == 0
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
  result = MiRemoveLockedPageChargeAndDecRef(a1, a2, a3, a4);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}

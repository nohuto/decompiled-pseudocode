/*
 * XREFs of MiReturnPfnReferenceCountAtDpc @ 0x140347E90
 * Callers:
 *     MiFinishHardFault @ 0x140255E80 (MiFinishHardFault.c)
 *     MiResolveDemandZeroFault @ 0x140342E30 (MiResolveDemandZeroFault.c)
 *     MiPfPutPagesInTransition @ 0x140347F6C (MiPfPutPagesInTransition.c)
 *     MiReturnPfnReferenceCount @ 0x1403F02E4 (MiReturnPfnReferenceCount.c)
 *     MiInitializeNewImageSectionProtos @ 0x1403F0B48 (MiInitializeNewImageSectionProtos.c)
 *     MiReleasePrefetchGapPages @ 0x14048C0E4 (MiReleasePrefetchGapPages.c)
 *     MiIdealClusterPage @ 0x1404CB218 (MiIdealClusterPage.c)
 * Callees:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14029C130 (MiRemoveLockedPageChargeAndDecRef.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiReturnPfnReferenceCountAtDpc(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
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
        HvlNotifyLongSpinWait(v5);
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

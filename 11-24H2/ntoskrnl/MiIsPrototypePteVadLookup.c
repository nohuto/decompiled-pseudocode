/*
 * XREFs of MiIsPrototypePteVadLookup @ 0x14030D150
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x140202E14 (MiSetReadOnlyOnSectionView.c)
 *     MiCountSharedPages @ 0x1402100F4 (MiCountSharedPages.c)
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MiComputePageCommitment @ 0x140212C0C (MiComputePageCommitment.c)
 *     MiInitializeReadInProgressPfn @ 0x1402558FC (MiInitializeReadInProgressPfn.c)
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 *     MiDecommitHandleProtoFormatPte @ 0x140299180 (MiDecommitHandleProtoFormatPte.c)
 *     MiWalkVaRange @ 0x14029A340 (MiWalkVaRange.c)
 *     MiIsPteEvaluated @ 0x140305E8C (MiIsPteEvaluated.c)
 *     MiSharedVaToPartition @ 0x140307460 (MiSharedVaToPartition.c)
 *     MiGetPageProtection @ 0x14030C130 (MiGetPageProtection.c)
 *     MiIsFaultPteIntact @ 0x14030CD60 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x14030CE60 (MiFindActualFaultingPte.c)
 *     MiGetWorkingSetInfoList @ 0x14030D190 (MiGetWorkingSetInfoList.c)
 *     MiResolveProtoPteFault @ 0x140334760 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140342E30 (MiResolveDemandZeroFault.c)
 *     MiSplitPrivatePage @ 0x1403C7720 (MiSplitPrivatePage.c)
 *     MiTranslatePageForCopy @ 0x1403F3CE0 (MiTranslatePageForCopy.c)
 *     MiIsCfgBitMapPageShared @ 0x14046208C (MiIsCfgBitMapPageShared.c)
 *     MiCheckCommitReleaseFromVad @ 0x14066AA50 (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPrototypePteVadLookup(unsigned __int64 a1)
{
  if ( (a1 & 0x400) == 0 )
    return 0LL;
  if ( qword_140E2DCC0 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140E2DCC0;
  }
  return HIDWORD(a1) == 0xFFFFFFFF;
}

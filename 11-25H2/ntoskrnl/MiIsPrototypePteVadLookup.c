/*
 * XREFs of MiIsPrototypePteVadLookup @ 0x140246860
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x14021CC50 (MiGetWorkingSetInfoList.c)
 *     MiWalkVaRange @ 0x140236150 (MiWalkVaRange.c)
 *     MiSharedVaToPartition @ 0x14023B3F0 (MiSharedVaToPartition.c)
 *     MiInitializeReadInProgressPfn @ 0x14023B62C (MiInitializeReadInProgressPfn.c)
 *     MiResolveProtoPteFault @ 0x140240060 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140241160 (MiResolveDemandZeroFault.c)
 *     MiGetPageProtection @ 0x140245740 (MiGetPageProtection.c)
 *     MiIsFaultPteIntact @ 0x140246470 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x140246570 (MiFindActualFaultingPte.c)
 *     MiIsPteEvaluated @ 0x14024A588 (MiIsPteEvaluated.c)
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 *     MiTranslatePageForCopy @ 0x1403783E0 (MiTranslatePageForCopy.c)
 *     MiSetReadOnlyOnSectionView @ 0x14037D0D8 (MiSetReadOnlyOnSectionView.c)
 *     MiCountSharedPages @ 0x14037DA64 (MiCountSharedPages.c)
 *     MiComputePageCommitment @ 0x14037DDA4 (MiComputePageCommitment.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MiDecommitHandleProtoFormatPte @ 0x140382C60 (MiDecommitHandleProtoFormatPte.c)
 *     MiSplitPrivatePage @ 0x1404672C0 (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x14047031C (MiIsCfgBitMapPageShared.c)
 *     MiCheckCommitReleaseFromVad @ 0x14065DD60 (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPrototypePteVadLookup(unsigned __int64 a1)
{
  if ( (a1 & 0x400) == 0 )
    return 0LL;
  if ( qword_140E2D940 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140E2D940;
  }
  return HIDWORD(a1) == 0xFFFFFFFF;
}

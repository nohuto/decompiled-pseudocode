/*
 * XREFs of MiIsPrototypePteVadLookup @ 0x140303270
 * Callers:
 *     MiIsPteEvaluated @ 0x140212B2C (MiIsPteEvaluated.c)
 *     MiSharedVaToPartition @ 0x140214100 (MiSharedVaToPartition.c)
 *     MiResolveProtoPteFault @ 0x140214BB0 (MiResolveProtoPteFault.c)
 *     MiSetReadOnlyOnSectionView @ 0x140232BB8 (MiSetReadOnlyOnSectionView.c)
 *     MiIsCfgBitMapPageShared @ 0x140234458 (MiIsCfgBitMapPageShared.c)
 *     MiCountSharedPages @ 0x140235F64 (MiCountSharedPages.c)
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MiComputePageCommitment @ 0x140238A7C (MiComputePageCommitment.c)
 *     MiDecommitHandleProtoFormatPte @ 0x140289580 (MiDecommitHandleProtoFormatPte.c)
 *     MiWalkVaRange @ 0x14028A740 (MiWalkVaRange.c)
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MiInitializeReadInProgressPfn @ 0x1402EF9B8 (MiInitializeReadInProgressPfn.c)
 *     MiResolveDemandZeroFault @ 0x1402FC600 (MiResolveDemandZeroFault.c)
 *     MiGetPageProtection @ 0x1403019B0 (MiGetPageProtection.c)
 *     MiIsFaultPteIntact @ 0x140302E80 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x140302F80 (MiFindActualFaultingPte.c)
 *     MiGetWorkingSetInfoList @ 0x1403032B0 (MiGetWorkingSetInfoList.c)
 *     MiTranslatePageForCopy @ 0x1403961F0 (MiTranslatePageForCopy.c)
 *     MiSplitPrivatePage @ 0x1404051C4 (MiSplitPrivatePage.c)
 *     MiCheckCommitReleaseFromVad @ 0x140669880 (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPrototypePteVadLookup(unsigned __int64 a1)
{
  if ( (a1 & 0x400) == 0 )
    return 0LL;
  if ( qword_140E2DB80 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140E2DB80;
  }
  return HIDWORD(a1) == 0xFFFFFFFF;
}

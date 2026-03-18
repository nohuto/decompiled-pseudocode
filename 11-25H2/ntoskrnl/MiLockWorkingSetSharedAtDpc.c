/*
 * XREFs of MiLockWorkingSetSharedAtDpc @ 0x1402FB704
 * Callers:
 *     MiAllocateKernelStackPages @ 0x1402282B8 (MiAllocateKernelStackPages.c)
 *     MiWalkPageTablesRecursively @ 0x1402B2770 (MiWalkPageTablesRecursively.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     MiClearNonPagedPtes @ 0x1402FAC80 (MiClearNonPagedPtes.c)
 *     MiLockPoolCommitWs @ 0x1402FB6B8 (MiLockPoolCommitWs.c)
 *     MiLockProbePacketWorkingSet @ 0x1402FC680 (MiLockProbePacketWorkingSet.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x1403292C0 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiDecommitLockNewPageTable @ 0x140383410 (MiDecommitLockNewPageTable.c)
 *     MiMakeZeroedPageTablesEx @ 0x14038F57C (MiMakeZeroedPageTablesEx.c)
 *     MiMapWithLargePages @ 0x1403900B8 (MiMapWithLargePages.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1403FDF58 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiUnmapMdlCommon @ 0x140412070 (MiUnmapMdlCommon.c)
 *     MiDeleteSystemPageTables @ 0x140465F44 (MiDeleteSystemPageTables.c)
 *     MiJumpStackTarget @ 0x140480160 (MiJumpStackTarget.c)
 *     MiReleaseLargePdeMappings @ 0x140492BE8 (MiReleaseLargePdeMappings.c)
 *     MiDeleteShadowStackPtes @ 0x14049C92C (MiDeleteShadowStackPtes.c)
 *     MiZeroAndFlushGoodCitizen @ 0x1404C5D98 (MiZeroAndFlushGoodCitizen.c)
 *     MiMapMdlWithLargePages @ 0x1404C6BAC (MiMapMdlWithLargePages.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404CBC10 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiMapMdlCommon @ 0x1404ECDC4 (MiMapMdlCommon.c)
 *     MmAddRangeToCrashDump @ 0x14066C040 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x14066C4E8 (MmRemoveSystemCacheFromDump.c)
 *     MmMapDriverTablePage @ 0x14067213C (MmMapDriverTablePage.c)
 *     MiUnmapLegacyAwePage @ 0x1406778CC (MiUnmapLegacyAwePage.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

char __fastcall MiLockWorkingSetSharedAtDpc(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // rax
  _QWORD *v2; // rax
  unsigned int v3; // ebx
  _DWORD *MmInternal; // rcx

  LOBYTE(CurrentPrcb) = *(_DWORD *)(a1 + 184) & 0xF;
  if ( (unsigned __int8)CurrentPrcb <= 5u )
  {
    v2 = &unk_140E38500;
    if ( (*(_DWORD *)(a1 + 184) & 0xF) != 1 )
      v2 = (_QWORD *)(a1 + 192);
    v3 = (KeGetPcr()->Prcb.Number >> 1) & 3;
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(*v2 + ((unsigned __int64)v3 << 6)));
    CurrentPrcb = KeGetCurrentPrcb();
    MmInternal = CurrentPrcb->MmInternal;
    if ( MmInternal )
      MmInternal[81] = v3;
  }
  return (char)CurrentPrcb;
}

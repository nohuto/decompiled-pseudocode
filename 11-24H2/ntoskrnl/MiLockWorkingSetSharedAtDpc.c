/*
 * XREFs of MiLockWorkingSetSharedAtDpc @ 0x1402E3A1C
 * Callers:
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 *     MiDeleteSystemPageTables @ 0x140234368 (MiDeleteSystemPageTables.c)
 *     MiClearNonPagedPtes @ 0x1402346CC (MiClearNonPagedPtes.c)
 *     MiDeleteShadowStackPtes @ 0x140269284 (MiDeleteShadowStackPtes.c)
 *     MiDecommitLockNewPageTable @ 0x140289DC0 (MiDecommitLockNewPageTable.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x14028E960 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiLockProbePacketWorkingSet @ 0x1402C3B90 (MiLockProbePacketWorkingSet.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1402C86D0 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiWalkPageTablesRecursively @ 0x1402DC430 (MiWalkPageTablesRecursively.c)
 *     MiLockPoolCommitWs @ 0x1402E3A94 (MiLockPoolCommitWs.c)
 *     MiAllocateKernelStackPages @ 0x14039F96C (MiAllocateKernelStackPages.c)
 *     MiMakeZeroedPageTablesEx @ 0x1403A62E0 (MiMakeZeroedPageTablesEx.c)
 *     MiMapWithLargePages @ 0x1403A7068 (MiMapWithLargePages.c)
 *     MiUnmapMdlCommon @ 0x14040F900 (MiUnmapMdlCommon.c)
 *     MiJumpStackTarget @ 0x140480E20 (MiJumpStackTarget.c)
 *     MiReleaseLargePdeMappings @ 0x140491DC4 (MiReleaseLargePdeMappings.c)
 *     MiZeroAndFlushGoodCitizen @ 0x1404C6618 (MiZeroAndFlushGoodCitizen.c)
 *     MiMapMdlWithLargePages @ 0x1404C71D0 (MiMapMdlWithLargePages.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404CBB68 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiMapMdlCommon @ 0x1404F0304 (MiMapMdlCommon.c)
 *     MmAddRangeToCrashDump @ 0x140677990 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x140677E38 (MmRemoveSystemCacheFromDump.c)
 *     MmMapDriverTablePage @ 0x14067D94C (MmMapDriverTablePage.c)
 *     MiUnmapLegacyAwePage @ 0x1406830EC (MiUnmapLegacyAwePage.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
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
    v2 = &unk_140E38740;
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

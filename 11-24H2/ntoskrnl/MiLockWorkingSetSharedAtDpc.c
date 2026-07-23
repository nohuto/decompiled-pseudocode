/*
 * XREFs of MiLockWorkingSetSharedAtDpc @ 0x14020BF58
 * Callers:
 *     MiLockProbePacketWorkingSet @ 0x14020AFF0 (MiLockProbePacketWorkingSet.c)
 *     MiLockPoolCommitWs @ 0x14020C760 (MiLockPoolCommitWs.c)
 *     MiClearNonPagedPtes @ 0x14020E660 (MiClearNonPagedPtes.c)
 *     MiAllocateKernelStackPages @ 0x14021639C (MiAllocateKernelStackPages.c)
 *     MiDeleteShadowStackPtes @ 0x14021EA48 (MiDeleteShadowStackPtes.c)
 *     MiWalkPageTablesRecursively @ 0x14023DD10 (MiWalkPageTablesRecursively.c)
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     MiMapWithLargePages @ 0x14026BB00 (MiMapWithLargePages.c)
 *     MiMakeZeroedPageTablesEx @ 0x14026D5D0 (MiMakeZeroedPageTablesEx.c)
 *     MiDecommitLockNewPageTable @ 0x1402999C0 (MiDecommitLockNewPageTable.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x14029E560 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiUnmapMdlCommon @ 0x140433530 (MiUnmapMdlCommon.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x14043A2FC (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiDeleteSystemPageTables @ 0x14045B798 (MiDeleteSystemPageTables.c)
 *     MiJumpStackTarget @ 0x14047B8F0 (MiJumpStackTarget.c)
 *     MiReleaseLargePdeMappings @ 0x14048CC64 (MiReleaseLargePdeMappings.c)
 *     MiZeroAndFlushGoodCitizen @ 0x1404BFA78 (MiZeroAndFlushGoodCitizen.c)
 *     MiMapMdlWithLargePages @ 0x1404C0630 (MiMapMdlWithLargePages.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404C4FE4 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiMapMdlCommon @ 0x1404EDDA4 (MiMapMdlCommon.c)
 *     MmAddRangeToCrashDump @ 0x140678B70 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x140679018 (MmRemoveSystemCacheFromDump.c)
 *     MmMapDriverTablePage @ 0x14067EB4C (MmMapDriverTablePage.c)
 *     MiUnmapLegacyAwePage @ 0x1406842DC (MiUnmapLegacyAwePage.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
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
    v2 = &unk_140E38880;
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

/*
 * XREFs of MiVadPureReserve @ 0x140236380
 * Callers:
 *     MiCommitExistingVad @ 0x140213020 (MiCommitExistingVad.c)
 *     MiSetReadOnlyOnSectionView @ 0x140232BB8 (MiSetReadOnlyOnSectionView.c)
 *     MiComputeVadCharges @ 0x140236208 (MiComputeVadCharges.c)
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MiProbeAndLockPrepare @ 0x140282460 (MiProbeAndLockPrepare.c)
 *     MiDecommitInitializePacket @ 0x1402899B0 (MiDecommitInitializePacket.c)
 *     MiQueryAddressState @ 0x140300420 (MiQueryAddressState.c)
 *     MiInPagePageTable @ 0x1403F2FCC (MiInPagePageTable.c)
 *     NtLockVirtualMemory @ 0x1403FD910 (NtLockVirtualMemory.c)
 *     MiSplitPrivatePage @ 0x1404051C4 (MiSplitPrivatePage.c)
 *     MiDeleteEmptyPageTables @ 0x140405978 (MiDeleteEmptyPageTables.c)
 *     MiCommitPageTablesForVad @ 0x1408E26C0 (MiCommitPageTablesForVad.c)
 *     MiCommitPagefileBackedSection @ 0x1408F7B54 (MiCommitPagefileBackedSection.c)
 *     MiAllocateChildVads @ 0x1409C2580 (MiAllocateChildVads.c)
 *     MiReturnPageTablePageCommitment @ 0x1409DE1C0 (MiReturnPageTablePageCommitment.c)
 *     MiReturnVadQuota @ 0x140A0C0A4 (MiReturnVadQuota.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVadPureReserve(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rax

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x200000) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 48) & 0xF80) == 0xC00 )
    {
      v2 = **(_QWORD **)(a1 + 72);
      if ( !*(_QWORD *)(v2 + 64) )
        return (*(_DWORD *)(v2 + 56) >> 12) & 1;
    }
    return 0LL;
  }
  return (v1 & 0x70) == 0 && (v1 & 0x2000000) == 0;
}

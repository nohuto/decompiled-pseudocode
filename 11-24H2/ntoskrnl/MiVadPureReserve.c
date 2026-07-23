/*
 * XREFs of MiVadPureReserve @ 0x140210510
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x140202E14 (MiSetReadOnlyOnSectionView.c)
 *     MiComputeVadCharges @ 0x140210398 (MiComputeVadCharges.c)
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MiProbeAndLockPrepare @ 0x1402379F0 (MiProbeAndLockPrepare.c)
 *     MiDecommitInitializePacket @ 0x1402995B0 (MiDecommitInitializePacket.c)
 *     MiCommitExistingVad @ 0x140306380 (MiCommitExistingVad.c)
 *     MiQueryAddressState @ 0x14030ABA0 (MiQueryAddressState.c)
 *     MiInPagePageTable @ 0x140391778 (MiInPagePageTable.c)
 *     MiSplitPrivatePage @ 0x1403C7720 (MiSplitPrivatePage.c)
 *     MiDeleteEmptyPageTables @ 0x1403C7ED4 (MiDeleteEmptyPageTables.c)
 *     NtLockVirtualMemory @ 0x1403DBC30 (NtLockVirtualMemory.c)
 *     MiCommitPageTablesForVad @ 0x140919270 (MiCommitPageTablesForVad.c)
 *     MiCommitPagefileBackedSection @ 0x140974DD4 (MiCommitPagefileBackedSection.c)
 *     MiReturnPageTablePageCommitment @ 0x1409D7D90 (MiReturnPageTablePageCommitment.c)
 *     MiReturnVadQuota @ 0x140A0B2E4 (MiReturnVadQuota.c)
 *     MiAllocateChildVads @ 0x140A47718 (MiAllocateChildVads.c)
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

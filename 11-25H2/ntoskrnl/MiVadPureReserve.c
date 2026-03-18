/*
 * XREFs of MiVadPureReserve @ 0x140384DA0
 * Callers:
 *     MiQueryAddressState @ 0x140244320 (MiQueryAddressState.c)
 *     MiProbeAndLockPrepare @ 0x1402CB3C0 (MiProbeAndLockPrepare.c)
 *     MiSetReadOnlyOnSectionView @ 0x14037D0D8 (MiSetReadOnlyOnSectionView.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MiDecommitInitializePacket @ 0x14038308C (MiDecommitInitializePacket.c)
 *     MiCommitExistingVad @ 0x1403840D0 (MiCommitExistingVad.c)
 *     MiComputeVadCharges @ 0x14038505C (MiComputeVadCharges.c)
 *     NtLockVirtualMemory @ 0x140388E00 (NtLockVirtualMemory.c)
 *     MiDeleteEmptyPageTables @ 0x1403D7BA0 (MiDeleteEmptyPageTables.c)
 *     MiInPagePageTable @ 0x1403EBC5C (MiInPagePageTable.c)
 *     MiSplitPrivatePage @ 0x1404672C0 (MiSplitPrivatePage.c)
 *     MiCommitPageTablesForVad @ 0x140900E00 (MiCommitPageTablesForVad.c)
 *     MiReturnPageTablePageCommitment @ 0x1409E3F50 (MiReturnPageTablePageCommitment.c)
 *     MiCommitPagefileBackedSection @ 0x1409FC6A4 (MiCommitPagefileBackedSection.c)
 *     MiReturnVadQuota @ 0x140A0A8D0 (MiReturnVadQuota.c)
 *     MiAllocateChildVads @ 0x140A40978 (MiAllocateChildVads.c)
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

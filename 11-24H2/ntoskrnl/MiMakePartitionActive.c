/*
 * XREFs of MiMakePartitionActive @ 0x14048A21C
 * Callers:
 *     MiInsertPageFileInList @ 0x1407EF2F0 (MiInsertPageFileInList.c)
 *     MiCreateNewSection @ 0x1409433C0 (MiCreateNewSection.c)
 *     MmCreateProcessAddressSpace @ 0x140AE61C8 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiSetSlabAllocatorPolicy @ 0x1406888A4 (MiSetSlabAllocatorPolicy.c)
 *     SmCreatePartition @ 0x140A3ECF4 (SmCreatePartition.c)
 */

__int64 __fastcall MiMakePartitionActive(__int64 a1)
{
  unsigned int v2; // edi
  KIRQL v4; // si

  v2 = 0;
  if ( (int)SmCreatePartition(*(_QWORD *)(a1 + 184)) < 0 )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 4) & 0x10) == 0 )
    return 1LL;
  v4 = ExAcquireSpinLockExclusive(&dword_140E2FF40);
  if ( (*(_DWORD *)(a1 + 4) & 0x10) != 0 )
  {
    if ( (unsigned int)MiChargeCommit(a1, 0xA0uLL, 0) )
    {
      *(_QWORD *)(a1 + 16896) = 160LL;
      if ( (ULONG *)a1 != &MiSystemPartition )
        MiSetSlabAllocatorPolicy(a1);
      _InterlockedAnd((volatile signed __int32 *)(a1 + 4), 0xFFFFFFEF);
      MiReleaseSpinLockExclusive(&dword_140E2FF40, v4);
      MiReturnCommit(a1, 160LL, 0);
      return 1LL;
    }
  }
  else
  {
    v2 = 1;
  }
  MiReleaseSpinLockExclusive(&dword_140E2FF40, v4);
  return v2;
}

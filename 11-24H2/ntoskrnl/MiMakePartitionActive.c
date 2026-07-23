/*
 * XREFs of MiMakePartitionActive @ 0x140485044
 * Callers:
 *     MiInsertPageFileInList @ 0x1407EF8C0 (MiInsertPageFileInList.c)
 *     MiCreateNewSection @ 0x14098D630 (MiCreateNewSection.c)
 *     MmCreateProcessAddressSpace @ 0x140AE7AA8 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiSetSlabAllocatorPolicy @ 0x1406899D4 (MiSetSlabAllocatorPolicy.c)
 *     SmCreatePartition @ 0x140A34664 (SmCreatePartition.c)
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
  v4 = ExAcquireSpinLockExclusive(&dword_140E30080);
  if ( (*(_DWORD *)(a1 + 4) & 0x10) != 0 )
  {
    if ( (unsigned int)MiChargeCommit(a1, 0xA0uLL, 0) )
    {
      *(_QWORD *)(a1 + 16896) = 160LL;
      if ( (ULONG *)a1 != &MiSystemPartition )
        MiSetSlabAllocatorPolicy(a1);
      _InterlockedAnd((volatile signed __int32 *)(a1 + 4), 0xFFFFFFEF);
      MiReleaseSpinLockExclusive(&dword_140E30080, v4);
      MiReturnCommit(a1, 160LL, 0);
      return 1LL;
    }
  }
  else
  {
    v2 = 1;
  }
  MiReleaseSpinLockExclusive(&dword_140E30080, v4);
  return v2;
}

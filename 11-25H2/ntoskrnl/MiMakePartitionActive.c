/*
 * XREFs of MiMakePartitionActive @ 0x14048C0A0
 * Callers:
 *     MiInsertPageFileInList @ 0x1407DF450 (MiInsertPageFileInList.c)
 *     MiCreateNewSection @ 0x14093EAC0 (MiCreateNewSection.c)
 *     MmCreateProcessAddressSpace @ 0x140A47B88 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiSetSlabAllocatorPolicy @ 0x14067D014 (MiSetSlabAllocatorPolicy.c)
 *     SmCreatePartition @ 0x140A3D854 (SmCreatePartition.c)
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
  v4 = ExAcquireSpinLockExclusive(&dword_140E2FD00);
  if ( (*(_DWORD *)(a1 + 4) & 0x10) != 0 )
  {
    if ( (unsigned int)MiChargeCommit(a1, 0xA0uLL, 0) )
    {
      *(_QWORD *)(a1 + 16896) = 160LL;
      if ( (ULONG *)a1 != &MiSystemPartition )
        MiSetSlabAllocatorPolicy(a1);
      _InterlockedAnd((volatile signed __int32 *)(a1 + 4), 0xFFFFFFEF);
      MiReleaseSpinLockExclusive(&dword_140E2FD00, v4);
      MiReturnCommit(a1, 160LL, 0);
      return 1LL;
    }
  }
  else
  {
    v2 = 1;
  }
  MiReleaseSpinLockExclusive(&dword_140E2FD00, v4);
  return v2;
}

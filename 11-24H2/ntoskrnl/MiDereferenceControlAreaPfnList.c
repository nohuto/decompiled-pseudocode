/*
 * XREFs of MiDereferenceControlAreaPfnList @ 0x14021DC9C
 * Callers:
 *     MiDeleteSectionCluster @ 0x140216B54 (MiDeleteSectionCluster.c)
 *     MiReleaseInPageRefs @ 0x14021C2D8 (MiReleaseInPageRefs.c)
 *     MiRestoreTransitionPte @ 0x140226624 (MiRestoreTransitionPte.c)
 *     MiGatherMappedPages @ 0x1402EB8C0 (MiGatherMappedPages.c)
 *     MiSplitDirectMapPage @ 0x1404CA510 (MiSplitDirectMapPage.c)
 * Callees:
 *     MiInsertUnusedSubsection @ 0x140259F70 (MiInsertUnusedSubsection.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiCheckForControlAreaDeletion @ 0x140339580 (MiCheckForControlAreaDeletion.c)
 *     MiRemoveUnusedSubsection @ 0x140441E80 (MiRemoveUnusedSubsection.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B34A4 (MiReturnCrossPartitionSectionCharges.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall MiDereferenceControlAreaPfnList(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 inserted; // rbp
  __int64 v5; // r13
  __int64 v9; // rbx
  BOOL v10; // r15d
  volatile LONG *v11; // rcx
  KIRQL v12; // si
  bool v13; // zf
  __int64 v14; // rdx

  inserted = 0LL;
  v5 = 0LL;
  if ( (*(_DWORD *)(a1 + 56) & 0x20) == 0 && *(_QWORD *)(a1 + 64) )
    v9 = a2;
  else
    v9 = 0LL;
  v10 = *(_QWORD *)(a1 + 64) != 0LL;
  v11 = (volatile LONG *)(a1 + 72);
  if ( (a4 & 2) != 0 )
  {
    v12 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v11);
  }
  else
  {
    v12 = ExAcquireSpinLockExclusive(v11);
  }
  if ( v9 )
  {
    v13 = *(_DWORD *)(v9 + 104) == (_DWORD)a3;
    *(_DWORD *)(v9 + 104) -= a3;
    if ( v13 && !*(_QWORD *)(v9 + 80) && (*(_DWORD *)(a2 + 32) & 0x90000) == 0x80000 )
    {
      MiRemoveUnusedSubsection(v9);
      inserted = MiInsertUnusedSubsection(v9);
    }
  }
  *(_QWORD *)(a1 + 32) -= a3;
  if ( (a4 & 1) != 0 )
    MiCheckForControlAreaDeletion(a1);
  if ( inserted )
    v5 = *((_QWORD *)qword_140E300C8 + (*(_WORD *)(a1 + 60) & 0x3FF));
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  if ( v12 != 17 )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v14) = v12;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
    }
    __writecr8(v12);
  }
  if ( inserted )
    MiReturnCrossPartitionSectionCharges(v5, v10, inserted);
}

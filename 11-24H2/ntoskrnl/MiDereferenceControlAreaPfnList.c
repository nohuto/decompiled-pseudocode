/*
 * XREFs of MiDereferenceControlAreaPfnList @ 0x14036FF5C
 * Callers:
 *     MiRestoreTransitionPte @ 0x140271094 (MiRestoreTransitionPte.c)
 *     MiGatherMappedPages @ 0x140369B20 (MiGatherMappedPages.c)
 *     MiReleaseInPageRefs @ 0x14036FDF4 (MiReleaseInPageRefs.c)
 *     MiDeleteSectionCluster @ 0x1403A0124 (MiDeleteSectionCluster.c)
 *     MiSplitDirectMapPage @ 0x1404D14D0 (MiSplitDirectMapPage.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiCheckForControlAreaDeletion @ 0x140210220 (MiCheckForControlAreaDeletion.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiRemoveUnusedSubsection @ 0x1403700B0 (MiRemoveUnusedSubsection.c)
 *     MiInsertUnusedSubsection @ 0x140371BB0 (MiInsertUnusedSubsection.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B8B54 (MiReturnCrossPartitionSectionCharges.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall MiDereferenceControlAreaPfnList(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 inserted; // rbp
  __int64 v5; // r13
  __int64 v9; // rbx
  BOOL v10; // r15d
  volatile LONG *v11; // rcx
  KIRQL v12; // si
  __int64 v13; // rdx
  __int64 v14; // r8
  bool v15; // zf
  __int64 v16; // rdx

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
    v15 = *(_DWORD *)(v9 + 104) == (_DWORD)a3;
    *(_DWORD *)(v9 + 104) -= a3;
    if ( v15 && !*(_QWORD *)(v9 + 80) && (*(_DWORD *)(a2 + 32) & 0x90000) == 0x80000 )
    {
      MiRemoveUnusedSubsection(v9);
      inserted = MiInsertUnusedSubsection(v9);
    }
  }
  *(_QWORD *)(a1 + 32) -= a3;
  if ( (a4 & 1) != 0 )
    MiCheckForControlAreaDeletion(a1, v13, v14);
  if ( inserted )
    v5 = *((_QWORD *)qword_140E2FF88 + (*(_WORD *)(a1 + 60) & 0x3FF));
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  if ( v12 != 17 )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v16) = v12;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v16);
    }
    __writecr8(v12);
  }
  if ( inserted )
    MiReturnCrossPartitionSectionCharges(v5, v10, inserted);
}

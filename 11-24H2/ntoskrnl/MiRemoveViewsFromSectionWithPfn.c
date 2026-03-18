/*
 * XREFs of MiRemoveViewsFromSectionWithPfn @ 0x140371504
 * Callers:
 *     MiDereferenceDataSubsections @ 0x14068BC60 (MiDereferenceDataSubsections.c)
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 *     MiPfPrepareReadList @ 0x1409557EC (MiPfPrepareReadList.c)
 *     MiReleaseReadListResources @ 0x140956000 (MiReleaseReadListResources.c)
 *     MiPfPrepareSequentialReadList @ 0x140956378 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x14036F2F8 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x14036F3BC (MiComputeCrossPartitionSectionCharges.c)
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x140371780 (MiControlAreaExemptFromCrossPartitionCharges.c)
 *     MiInsertUnusedSubsection @ 0x140371BB0 (MiInsertUnusedSubsection.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B8B54 (MiReturnCrossPartitionSectionCharges.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1404F9F3C (MiUpdateSubsectionCrossPartitionRefs.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __fastcall MiRemoveViewsFromSectionWithPfn(__int64 *BugCheckParameter2, unsigned __int64 a2, char a3)
{
  __int64 v3; // r13
  ULONG_PTR v4; // rbx
  volatile LONG *v7; // r15
  KIRQL v8; // al
  __int64 v9; // r9
  __int64 v10; // rdi
  unsigned __int64 v11; // r14
  __int64 v12; // r12
  ULONG_PTR v13; // r8
  __int64 v14; // r11
  ULONG *v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 SubsectionHoldingCrossPartitionReferences; // rax
  int v20; // r10d
  __int64 *v21; // rcx
  int v22; // r10d
  BOOL v23; // [rsp+70h] [rbp+18h]

  v3 = *BugCheckParameter2;
  v4 = (ULONG_PTR)BugCheckParameter2;
  v7 = (volatile LONG *)(*BugCheckParameter2 + 72);
  v23 = *(_QWORD *)(*BugCheckParameter2 + 64) != 0LL;
  v8 = ExAcquireSpinLockExclusive(v7);
  v9 = *(_QWORD *)v4;
  v10 = 0LL;
  v11 = v8;
  v12 = *(_QWORD *)(*(_QWORD *)v4 + 64LL);
  while ( 1 )
  {
    v13 = v4;
    if ( *(_QWORD *)(v9 + 64)
      && (*(_DWORD *)(v9 + 56) & 0x20) == 0
      && (*(_DWORD *)(v4 + 32) & 0x10000) == 0
      && !*(_QWORD *)(v4 + 80) )
    {
      KeBugCheckEx(0x1Au, 0x42001uLL, v4, 0LL, 0LL);
    }
    v14 = 0LL;
    if ( (a3 & 0xC) == 8 && !(unsigned int)MiControlAreaExemptFromCrossPartitionCharges(v9) )
    {
      if ( (a3 & 0x10) != 0 )
        v15 = 0LL;
      else
        v15 = a3 < 0
            ? &MiSystemPartition
            : (ULONG *)*((_QWORD *)qword_140E2FF88
                       + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
      if ( v15 != *((ULONG **)qword_140E2FF88 + (*(_WORD *)(v9 + 60) & 0x3FF)) )
      {
        SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences(v4);
        v20 = *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences) + 48) & 0x3FFFFFFF;
        if ( v20 != 0x3FFFFFFF )
        {
          MiUpdateSubsectionCrossPartitionRefs(v13, (unsigned int)(v20 - 1));
          if ( v22 == 1 )
            v14 = MiComputeCrossPartitionSectionCharges(v21);
        }
      }
    }
    if ( *(_QWORD *)(v9 + 64) && (*(_DWORD *)(v9 + 56) & 0x20) == 0 && (*(_DWORD *)(v13 + 32) & 0x10000) == 0 )
    {
      v18 = *(_QWORD *)(v13 + 80);
      if ( !v18 )
        KeBugCheckEx(0x1Au, 0x42001uLL, v13, 0LL, 0LL);
      *(_QWORD *)(v13 + 80) = v18 - 1;
    }
    v10 += v14;
    if ( v12 && !*(_QWORD *)(v4 + 80) && (*(_DWORD *)(v4 + 32) & 0x10000) == 0 )
      v10 += MiInsertUnusedSubsection(v4);
    if ( a2 )
    {
      v16 = *(unsigned int *)(v4 + 44);
      if ( a2 <= v16 )
        break;
      a2 -= v16;
    }
    v4 = *(_QWORD *)(v4 + 16);
    if ( !v12 )
      a3 &= ~8u;
    if ( !v4 )
      break;
    v9 = *(_QWORD *)v4;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v7);
  if ( (_BYTE)v11 != 17 )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v17) = v11;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v17);
    }
    __writecr8(v11);
  }
  if ( v10 )
    MiReturnCrossPartitionSectionCharges(*((_QWORD *)qword_140E2FF88 + (*(_WORD *)(v3 + 60) & 0x3FF)), v23, v10);
}

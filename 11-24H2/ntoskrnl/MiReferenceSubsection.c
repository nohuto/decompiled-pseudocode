/*
 * XREFs of MiReferenceSubsection @ 0x14020F750
 * Callers:
 *     MiComputeDataFlushRange @ 0x14022F300 (MiComputeDataFlushRange.c)
 *     MiPreventControlAreaDeletion @ 0x14022F600 (MiPreventControlAreaDeletion.c)
 *     MiTrimSection @ 0x1402B9B70 (MiTrimSection.c)
 *     MiFlushAcquire @ 0x140489CC0 (MiFlushAcquire.c)
 *     MiUpdateActiveSubsection @ 0x140678F84 (MiUpdateActiveSubsection.c)
 * Callees:
 *     MiUnlinkUnusedSubsection @ 0x14020F984 (MiUnlinkUnusedSubsection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x14036F2F8 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1404F9F3C (MiUpdateSubsectionCrossPartitionRefs.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiReferenceSubsection(__int64 *BugCheckParameter2, __int16 a2)
{
  __int64 v2; // rbp
  ULONG_PTR SubsectionHoldingCrossPartitionReferences; // r12
  unsigned int v5; // r13d
  unsigned int v6; // r14d
  __int64 v7; // r15
  int v8; // ebx
  __int64 v9; // rsi
  char v11; // r10
  ULONG *v12; // rax
  int v13; // edx
  char v14; // r8

  v2 = *BugCheckParameter2;
  if ( !BugCheckParameter2[1] )
    return 1LL;
  SubsectionHoldingCrossPartitionReferences = (ULONG_PTR)BugCheckParameter2;
  v5 = 0;
  v6 = 2;
  v7 = *(_QWORD *)(v2 + 64);
  if ( (a2 & 8) != 0 )
  {
    v11 = *(_BYTE *)(v2 + 62);
    if ( (v11 & 0xC) == 0 && (v7 || (*(_DWORD *)(v2 + 92) & 0x10000) == 0) )
    {
      if ( (a2 & 0x80u) != 0 )
        v12 = &MiSystemPartition;
      else
        v12 = (a2 & 0x10) != 0
            ? 0LL
            : (ULONG *)*((_QWORD *)qword_140E2FF88
                       + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
      if ( v12 != *((ULONG **)qword_140E2FF88 + (*(_WORD *)(v2 + 60) & 0x3FF)) )
      {
        if ( (v11 & 1) != 0 && (a2 & 0x100) == 0 )
        {
          ++dword_140E2FF90;
          return v5;
        }
        SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences(BugCheckParameter2);
        v13 = *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences) + 48) & 0x3FFFFFFF;
        if ( v13 != 0x3FFFFFFF )
        {
          if ( !v13 )
          {
            if ( (v14 & 0x20) == 0 )
              return 1;
            v6 = 3;
          }
          MiUpdateSubsectionCrossPartitionRefs(SubsectionHoldingCrossPartitionReferences, (unsigned int)(v13 + 1));
        }
      }
    }
  }
  if ( (*(_DWORD *)(v2 + 56) & 0x20) == 0 && *(_QWORD *)(v2 + 64) )
  {
    v8 = *(_DWORD *)(SubsectionHoldingCrossPartitionReferences + 32);
    if ( (v8 & 0x80000) != 0 )
    {
      v9 = *((_QWORD *)qword_140E2FF88
           + (*(_WORD *)(*(_QWORD *)SubsectionHoldingCrossPartitionReferences + 60LL) & 0x3FF));
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + 1728));
      MiUnlinkUnusedSubsection(SubsectionHoldingCrossPartitionReferences);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 1728));
    }
    if ( (v8 & 0x10000) == 0
      && (++*(_QWORD *)(SubsectionHoldingCrossPartitionReferences + 80) & 0x7FFFFFFFFFFFFFFFLL) == 0 )
    {
      KeBugCheckEx(0x1Au, 0x42000uLL, SubsectionHoldingCrossPartitionReferences, 0LL, 0LL);
    }
  }
  if ( v7 )
  {
    if ( (*(_DWORD *)(v2 + 56) & 0x20) == 0 )
      *((_DWORD *)BugCheckParameter2 + 8) |= 1u;
  }
  return v6;
}

/*
 * XREFs of MiReferenceSubsection @ 0x14031F460
 * Callers:
 *     MiComputeDataFlushRange @ 0x140218970 (MiComputeDataFlushRange.c)
 *     MiPreventControlAreaDeletion @ 0x140218C70 (MiPreventControlAreaDeletion.c)
 *     MiTrimSection @ 0x140320A50 (MiTrimSection.c)
 *     MiFlushAcquire @ 0x14048A490 (MiFlushAcquire.c)
 *     MiUpdateActiveSubsection @ 0x14066D684 (MiUpdateActiveSubsection.c)
 * Callees:
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x1402A6600 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkUnusedSubsection @ 0x14031F694 (MiUnlinkUnusedSubsection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1404F77BC (MiUpdateSubsectionCrossPartitionRefs.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiReferenceSubsection(__int64 BugCheckParameter2, __int16 a2)
{
  __int64 v2; // rbp
  __int64 SubsectionHoldingCrossPartitionReferences; // r12
  unsigned int v5; // r13d
  unsigned int v6; // r14d
  __int64 v7; // r15
  int v8; // ebx
  __int64 v9; // rsi
  char v11; // r10
  ULONG *v12; // rax
  int v13; // edx
  char v14; // r8

  v2 = *(_QWORD *)BugCheckParameter2;
  if ( !*(_QWORD *)(BugCheckParameter2 + 8) )
    return 1LL;
  SubsectionHoldingCrossPartitionReferences = BugCheckParameter2;
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
            : (ULONG *)*((_QWORD *)qword_140E2FD48
                       + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
      if ( v12 != *((ULONG **)qword_140E2FD48 + (*(_WORD *)(v2 + 60) & 0x3FF)) )
      {
        if ( (v11 & 1) != 0 && (a2 & 0x100) == 0 )
        {
          ++dword_140E2FD50;
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
      v9 = *((_QWORD *)qword_140E2FD48
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
      *(_DWORD *)(BugCheckParameter2 + 32) |= 1u;
  }
  return v6;
}

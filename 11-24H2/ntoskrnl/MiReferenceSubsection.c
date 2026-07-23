/*
 * XREFs of MiReferenceSubsection @ 0x140338AB0
 * Callers:
 *     MiComputeDataFlushRange @ 0x140302C10 (MiComputeDataFlushRange.c)
 *     MiPreventControlAreaDeletion @ 0x140302F10 (MiPreventControlAreaDeletion.c)
 *     MiTrimSection @ 0x1403612B0 (MiTrimSection.c)
 *     MiFlushAcquire @ 0x140484FBC (MiFlushAcquire.c)
 *     MiUpdateActiveSubsection @ 0x14067A164 (MiUpdateActiveSubsection.c)
 * Callees:
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x14026B278 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     MiUnlinkUnusedSubsection @ 0x140338CE4 (MiUnlinkUnusedSubsection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1404F781C (MiUpdateSubsectionCrossPartitionRefs.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
            : (ULONG *)*((_QWORD *)qword_140E300C8
                       + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
      if ( v12 != *((ULONG **)qword_140E300C8 + (*(_WORD *)(v2 + 60) & 0x3FF)) )
      {
        if ( (v11 & 1) != 0 && (a2 & 0x100) == 0 )
        {
          ++dword_140E300D0;
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
      v9 = *((_QWORD *)qword_140E300C8
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

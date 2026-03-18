/*
 * XREFs of MiDecrementSubsectionViewCount @ 0x14033F740
 * Callers:
 *     MiAppendSubsectionChain @ 0x1402A6358 (MiAppendSubsectionChain.c)
 *     MiCreatePrototypePtes @ 0x1402A6EE0 (MiCreatePrototypePtes.c)
 *     MmPurgeSection @ 0x1402C5AB8 (MmPurgeSection.c)
 *     MiFlushSection @ 0x14033E540 (MiFlushSection.c)
 *     MiDecrementSubsection @ 0x14033F61C (MiDecrementSubsection.c)
 *     MiDeleteCachedSubsection @ 0x14033F8B4 (MiDeleteCachedSubsection.c)
 *     MiDeleteControlArea @ 0x14043A3F8 (MiDeleteControlArea.c)
 *     MiDeleteSubsectionPages @ 0x14044A8C4 (MiDeleteSubsectionPages.c)
 *     MiUpControlAreaRefs @ 0x1404B95EC (MiUpControlAreaRefs.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1404CBB78 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiExtendSection @ 0x14093B140 (MiExtendSection.c)
 * Callees:
 *     MiComputeCrossPartitionSectionCharges @ 0x1402158E0 (MiComputeCrossPartitionSectionCharges.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x1402A6600 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1404F77BC (MiUpdateSubsectionCrossPartitionRefs.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDecrementSubsectionViewCount(__int64 *BugCheckParameter2, char a2)
{
  __int64 v2; // r8
  ULONG_PTR v3; // r10
  __int64 v4; // r9
  __int64 v5; // rax
  ULONG *v7; // rax
  __int64 SubsectionHoldingCrossPartitionReferences; // rax
  int v9; // r11d
  __int64 *v10; // rcx
  int v11; // r11d

  v2 = *BugCheckParameter2;
  v3 = (ULONG_PTR)BugCheckParameter2;
  if ( *(_QWORD *)(*BugCheckParameter2 + 64)
    && (*(_DWORD *)(v2 + 56) & 0x20) == 0
    && (BugCheckParameter2[4] & 0x10000) == 0
    && !BugCheckParameter2[10] )
  {
    KeBugCheckEx(0x1Au, 0x42001uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  }
  v4 = 0LL;
  if ( (a2 & 4) == 0
    && (a2 & 8) != 0
    && (*(_BYTE *)(v2 + 62) & 0xC) == 0
    && (*(_QWORD *)(v2 + 64) || (*(_DWORD *)(v2 + 92) & 0x10000) == 0) )
  {
    if ( (a2 & 0x10) != 0 )
      v7 = 0LL;
    else
      v7 = a2 < 0
         ? &MiSystemPartition
         : (ULONG *)*((_QWORD *)qword_140E2FD48
                    + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
    if ( v7 != *((ULONG **)qword_140E2FD48 + (*(_WORD *)(v2 + 60) & 0x3FF)) )
    {
      SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences((__int64)BugCheckParameter2);
      v9 = *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences) + 48) & 0x3FFFFFFF;
      if ( v9 != 0x3FFFFFFF )
      {
        MiUpdateSubsectionCrossPartitionRefs(v3, (unsigned int)(v9 - 1));
        if ( v11 == 1 )
          v4 = MiComputeCrossPartitionSectionCharges(v10);
      }
    }
  }
  if ( *(_QWORD *)(v2 + 64) && (*(_DWORD *)(v2 + 56) & 0x20) == 0 && (*(_DWORD *)(v3 + 32) & 0x10000) == 0 )
  {
    v5 = *(_QWORD *)(v3 + 80);
    if ( !v5 )
      KeBugCheckEx(0x1Au, 0x42001uLL, v3, 0LL, 0LL);
    *(_QWORD *)(v3 + 80) = v5 - 1;
  }
  return v4;
}

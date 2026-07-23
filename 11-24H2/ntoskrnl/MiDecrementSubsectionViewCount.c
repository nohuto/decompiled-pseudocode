/*
 * XREFs of MiDecrementSubsectionViewCount @ 0x14025A760
 * Callers:
 *     MiDeleteSubsectionPages @ 0x140203EB8 (MiDeleteSubsectionPages.c)
 *     MiDeleteCachedSubsection @ 0x140204084 (MiDeleteCachedSubsection.c)
 *     MiDecrementSubsection @ 0x14025A644 (MiDecrementSubsection.c)
 *     MiFlushSection @ 0x140272630 (MiFlushSection.c)
 *     MiCreatePrototypePtes @ 0x1402751A4 (MiCreatePrototypePtes.c)
 *     MmPurgeSection @ 0x1403F06F0 (MmPurgeSection.c)
 *     MiDeleteControlArea @ 0x14043F354 (MiDeleteControlArea.c)
 *     MiAppendSubsectionChain @ 0x140470BE4 (MiAppendSubsectionChain.c)
 *     MiUpControlAreaRefs @ 0x1404B355C (MiUpControlAreaRefs.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1404C4F4C (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiExtendSection @ 0x14098A4D8 (MiExtendSection.c)
 * Callees:
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x14026B278 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x1404C8FF8 (MiComputeCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1404F781C (MiUpdateSubsectionCrossPartitionRefs.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
  int v10; // r11d

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
         : (ULONG *)*((_QWORD *)qword_140E300C8
                    + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
    if ( v7 != *((ULONG **)qword_140E300C8 + (*(_WORD *)(v2 + 60) & 0x3FF)) )
    {
      SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences(BugCheckParameter2);
      v9 = *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences) + 48) & 0x3FFFFFFF;
      if ( v9 != 0x3FFFFFFF )
      {
        MiUpdateSubsectionCrossPartitionRefs(v3, (unsigned int)(v9 - 1));
        if ( v10 == 1 )
          v4 = MiComputeCrossPartitionSectionCharges();
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

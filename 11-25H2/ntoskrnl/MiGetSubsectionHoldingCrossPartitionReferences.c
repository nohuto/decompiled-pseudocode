/*
 * XREFs of MiGetSubsectionHoldingCrossPartitionReferences @ 0x1402A6600
 * Callers:
 *     MiReferenceActiveSubsection @ 0x1402140B0 (MiReferenceActiveSubsection.c)
 *     MiUnmapViewSubsections @ 0x14022EE90 (MiUnmapViewSubsections.c)
 *     MiUpdateControlAreaCommitCount @ 0x1402A6504 (MiUpdateControlAreaCommitCount.c)
 *     MiGetSubsectionCrossPartitionReferences @ 0x1402A65E0 (MiGetSubsectionCrossPartitionReferences.c)
 *     MiIncrementSubsectionViewCount @ 0x1402A7470 (MiIncrementSubsectionViewCount.c)
 *     MiReferenceSubsection @ 0x14031F460 (MiReferenceSubsection.c)
 *     MiTrimSection @ 0x140320A50 (MiTrimSection.c)
 *     MiRemoveViewsFromSection @ 0x140322A00 (MiRemoveViewsFromSection.c)
 *     MiDecrementSubsections @ 0x140322C00 (MiDecrementSubsections.c)
 *     MiDecrementSubsectionViewCount @ 0x14033F740 (MiDecrementSubsectionViewCount.c)
 *     MiFlushRelease @ 0x14035A870 (MiFlushRelease.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14035AC94 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiUpdateLastSubsectionSize @ 0x140487254 (MiUpdateLastSubsectionSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionHoldingCrossPartitionReferences(__int64 a1)
{
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0xA0) != 0x80 )
    return *(_QWORD *)a1 + 128LL;
  return a1;
}

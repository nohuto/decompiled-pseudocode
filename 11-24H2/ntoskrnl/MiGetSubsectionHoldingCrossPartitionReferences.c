/*
 * XREFs of MiGetSubsectionHoldingCrossPartitionReferences @ 0x14036F2F8
 * Callers:
 *     MiReferenceActiveSubsection @ 0x14020E140 (MiReferenceActiveSubsection.c)
 *     MiUnmapViewSubsections @ 0x14020EC50 (MiUnmapViewSubsections.c)
 *     MiReferenceSubsection @ 0x14020F750 (MiReferenceSubsection.c)
 *     MiIncrementSubsectionViewCount @ 0x1402624F0 (MiIncrementSubsectionViewCount.c)
 *     MiTrimSection @ 0x1402B9B70 (MiTrimSection.c)
 *     MiUpdateLastSubsectionSize @ 0x14036F080 (MiUpdateLastSubsectionSize.c)
 *     MiUpdateControlAreaCommitCount @ 0x14036F1FC (MiUpdateControlAreaCommitCount.c)
 *     MiGetSubsectionCrossPartitionReferences @ 0x14036F2D8 (MiGetSubsectionCrossPartitionReferences.c)
 *     MiFlushRelease @ 0x1403710F0 (MiFlushRelease.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x140371504 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiRemoveViewsFromSection @ 0x1403717B0 (MiRemoveViewsFromSection.c)
 *     MiDecrementSubsections @ 0x1403719B0 (MiDecrementSubsections.c)
 *     MiDecrementSubsectionViewCount @ 0x140371EA0 (MiDecrementSubsectionViewCount.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionHoldingCrossPartitionReferences(__int64 a1)
{
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0xA0) != 0x80 )
    return *(_QWORD *)a1 + 128LL;
  return a1;
}

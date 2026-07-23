/*
 * XREFs of MiGetSubsectionHoldingCrossPartitionReferences @ 0x14026B278
 * Callers:
 *     MiFlushRelease @ 0x1402594B0 (MiFlushRelease.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x1402598C4 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiRemoveViewsFromSection @ 0x140259B70 (MiRemoveViewsFromSection.c)
 *     MiDecrementSubsections @ 0x140259D70 (MiDecrementSubsections.c)
 *     MiDecrementSubsectionViewCount @ 0x14025A760 (MiDecrementSubsectionViewCount.c)
 *     MiUpdateLastSubsectionSize @ 0x14026B000 (MiUpdateLastSubsectionSize.c)
 *     MiUpdateControlAreaCommitCount @ 0x14026B17C (MiUpdateControlAreaCommitCount.c)
 *     MiGetSubsectionCrossPartitionReferences @ 0x14026B258 (MiGetSubsectionCrossPartitionReferences.c)
 *     MiIncrementSubsectionViewCount @ 0x1402743B0 (MiIncrementSubsectionViewCount.c)
 *     MiReferenceActiveSubsection @ 0x1403374A0 (MiReferenceActiveSubsection.c)
 *     MiUnmapViewSubsections @ 0x140337FB0 (MiUnmapViewSubsections.c)
 *     MiReferenceSubsection @ 0x140338AB0 (MiReferenceSubsection.c)
 *     MiTrimSection @ 0x1403612B0 (MiTrimSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionHoldingCrossPartitionReferences(__int64 a1)
{
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0xA0) != 0x80 )
    return *(_QWORD *)a1 + 128LL;
  return a1;
}

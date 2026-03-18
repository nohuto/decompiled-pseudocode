/*
 * XREFs of MiComputeCrossPartitionSectionCharges @ 0x1402158E0
 * Callers:
 *     MiReferenceActiveSubsection @ 0x1402140B0 (MiReferenceActiveSubsection.c)
 *     MiUnmapViewSubsections @ 0x14022EE90 (MiUnmapViewSubsections.c)
 *     MiTrimSection @ 0x140320A50 (MiTrimSection.c)
 *     MiRemoveViewsFromSection @ 0x140322A00 (MiRemoveViewsFromSection.c)
 *     MiDecrementSubsections @ 0x140322C00 (MiDecrementSubsections.c)
 *     MiDecrementSubsectionViewCount @ 0x14033F740 (MiDecrementSubsectionViewCount.c)
 *     MiFlushRelease @ 0x14035A870 (MiFlushRelease.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14035AC94 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiReleaseControlAreaCharges @ 0x14041965C (MiReleaseControlAreaCharges.c)
 * Callees:
 *     MiGetCommittedPages @ 0x140215A04 (MiGetCommittedPages.c)
 */

__int64 __fastcall MiComputeCrossPartitionSectionCharges(__int64 *a1)
{
  __int64 v2; // rcx
  int v3; // edx

  v2 = *a1;
  v3 = *(_DWORD *)(v2 + 56);
  if ( (v3 & 0x20) != 0 )
    return *(_QWORD *)(v2 + 120);
  if ( (v3 & 0x80u) != 0 )
    return *((_DWORD *)a1 + 11) - (*((_DWORD *)a1 + 13) & 0x3FFFFFFFu);
  return MiGetCommittedPages(v2);
}

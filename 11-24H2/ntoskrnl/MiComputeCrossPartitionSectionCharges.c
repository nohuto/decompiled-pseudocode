/*
 * XREFs of MiComputeCrossPartitionSectionCharges @ 0x14036F3BC
 * Callers:
 *     MiReferenceActiveSubsection @ 0x14020E140 (MiReferenceActiveSubsection.c)
 *     MiUnmapViewSubsections @ 0x14020EC50 (MiUnmapViewSubsections.c)
 *     MiTrimSection @ 0x1402B9B70 (MiTrimSection.c)
 *     MiReleaseControlAreaCharges @ 0x14037024C (MiReleaseControlAreaCharges.c)
 *     MiFlushRelease @ 0x1403710F0 (MiFlushRelease.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x140371504 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiRemoveViewsFromSection @ 0x1403717B0 (MiRemoveViewsFromSection.c)
 *     MiDecrementSubsections @ 0x1403719B0 (MiDecrementSubsections.c)
 *     MiDecrementSubsectionViewCount @ 0x140371EA0 (MiDecrementSubsectionViewCount.c)
 * Callees:
 *     MiGetCommittedPages @ 0x140370A88 (MiGetCommittedPages.c)
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

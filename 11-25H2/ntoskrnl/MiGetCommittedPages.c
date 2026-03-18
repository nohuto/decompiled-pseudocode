/*
 * XREFs of MiGetCommittedPages @ 0x140215A04
 * Callers:
 *     MiReferenceActiveSubsection @ 0x1402140B0 (MiReferenceActiveSubsection.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x1402158E0 (MiComputeCrossPartitionSectionCharges.c)
 *     MiCreatePrototypePtes @ 0x1402A6EE0 (MiCreatePrototypePtes.c)
 *     MiDeleteSegmentPages @ 0x14044A758 (MiDeleteSegmentPages.c)
 *     MiSetPagesModified @ 0x140493EB0 (MiSetPagesModified.c)
 *     MiInitializeImageExtents @ 0x1407E04B8 (MiInitializeImageExtents.c)
 *     MiRemoveSharedCommitNode @ 0x1408B5520 (MiRemoveSharedCommitNode.c)
 *     MiMapViewOfDataSection @ 0x1408FEC20 (MiMapViewOfDataSection.c)
 *     MiInsertSharedCommitNode @ 0x140900A50 (MiInsertSharedCommitNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetCommittedPages(_QWORD *a1)
{
  if ( a1[8] )
    return *(_QWORD *)(*a1 + 16LL);
  else
    return a1[15] & 0xFFFFFFFFFLL;
}

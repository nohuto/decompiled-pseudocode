/*
 * XREFs of MiGetCommittedPages @ 0x140370A88
 * Callers:
 *     MiReferenceActiveSubsection @ 0x14020E140 (MiReferenceActiveSubsection.c)
 *     MiCreatePrototypePtes @ 0x140261F58 (MiCreatePrototypePtes.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x14036F3BC (MiComputeCrossPartitionSectionCharges.c)
 *     MiDeleteSegmentPages @ 0x1403707BC (MiDeleteSegmentPages.c)
 *     MiSetPagesModified @ 0x140492C90 (MiSetPagesModified.c)
 *     MiInitializeImageExtents @ 0x1407F0358 (MiInitializeImageExtents.c)
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 *     MiInsertSharedCommitNode @ 0x1408E2BF0 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x1408E5960 (MiRemoveSharedCommitNode.c)
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

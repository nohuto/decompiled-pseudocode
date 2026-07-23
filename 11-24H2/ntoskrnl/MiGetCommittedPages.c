/*
 * XREFs of MiGetCommittedPages @ 0x140204018
 * Callers:
 *     MiDeleteSegmentPages @ 0x140203D4C (MiDeleteSegmentPages.c)
 *     MiCreatePrototypePtes @ 0x1402751A4 (MiCreatePrototypePtes.c)
 *     MiReferenceActiveSubsection @ 0x1403374A0 (MiReferenceActiveSubsection.c)
 *     MiSetPagesModified @ 0x1403DA5EC (MiSetPagesModified.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x1404C8FF8 (MiComputeCrossPartitionSectionCharges.c)
 *     MiInitializeImageExtents @ 0x1407F0928 (MiInitializeImageExtents.c)
 *     MiRemoveSharedCommitNode @ 0x140895560 (MiRemoveSharedCommitNode.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 *     MiInsertSharedCommitNode @ 0x1409197A0 (MiInsertSharedCommitNode.c)
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

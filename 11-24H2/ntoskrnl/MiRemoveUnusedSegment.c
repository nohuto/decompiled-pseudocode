/*
 * XREFs of MiRemoveUnusedSegment @ 0x14030303C
 * Callers:
 *     MiEntireSubsectionIsPurged @ 0x1402043F4 (MiEntireSubsectionIsPurged.c)
 *     MiPrepareSegmentForDeletion @ 0x1402703FC (MiPrepareSegmentForDeletion.c)
 *     MiReferenceControlArea @ 0x140271068 (MiReferenceControlArea.c)
 *     MiReferenceExistingControlArea @ 0x1402BE814 (MiReferenceExistingControlArea.c)
 *     MiReferencePfBackedSection @ 0x140302908 (MiReferencePfBackedSection.c)
 *     MiComputeDataFlushRange @ 0x140302C10 (MiComputeDataFlushRange.c)
 *     MiPreventControlAreaDeletion @ 0x140302F10 (MiPreventControlAreaDeletion.c)
 *     MiAttemptSectionDelete @ 0x1403F25B4 (MiAttemptSectionDelete.c)
 *     MmGetImageFileSignatureInformation @ 0x140446860 (MmGetImageFileSignatureInformation.c)
 *     MiSetDeleteOnClose @ 0x1404CCD3C (MiSetDeleteOnClose.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkUnusedControlArea @ 0x140432D38 (MiUnlinkUnusedControlArea.c)
 */

void __fastcall MiRemoveUnusedSegment(__int64 a1)
{
  __int64 v2; // rbx

  if ( (*(_DWORD *)(a1 + 56) & 0x10000000) != 0 )
  {
    v2 = *((_QWORD *)qword_140E300C8 + (*(_WORD *)(a1 + 60) & 0x3FF));
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 1728));
    MiUnlinkUnusedControlArea(a1);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1728));
  }
}

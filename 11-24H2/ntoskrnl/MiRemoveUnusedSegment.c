/*
 * XREFs of MiRemoveUnusedSegment @ 0x14022F72C
 * Callers:
 *     MiReferencePfBackedSection @ 0x14022EFF8 (MiReferencePfBackedSection.c)
 *     MiComputeDataFlushRange @ 0x14022F300 (MiComputeDataFlushRange.c)
 *     MiPreventControlAreaDeletion @ 0x14022F600 (MiPreventControlAreaDeletion.c)
 *     MiEntireSubsectionIsPurged @ 0x14023C6CC (MiEntireSubsectionIsPurged.c)
 *     MiAttemptSectionDelete @ 0x140314F64 (MiAttemptSectionDelete.c)
 *     MiReferenceExistingControlArea @ 0x140315C60 (MiReferenceExistingControlArea.c)
 *     MiReferenceControlArea @ 0x140415208 (MiReferenceControlArea.c)
 *     MiPrepareSegmentForDeletion @ 0x140416EDC (MiPrepareSegmentForDeletion.c)
 *     MmGetImageFileSignatureInformation @ 0x1404514B0 (MmGetImageFileSignatureInformation.c)
 *     MiSetDeleteOnClose @ 0x1404D3B38 (MiSetDeleteOnClose.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkUnusedControlArea @ 0x14036FCB8 (MiUnlinkUnusedControlArea.c)
 */

void __fastcall MiRemoveUnusedSegment(__int64 a1)
{
  __int64 v2; // rbx

  if ( (*(_DWORD *)(a1 + 56) & 0x10000000) != 0 )
  {
    v2 = *((_QWORD *)qword_140E2FF88 + (*(_WORD *)(a1 + 60) & 0x3FF));
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 1728));
    MiUnlinkUnusedControlArea(a1);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1728));
  }
}

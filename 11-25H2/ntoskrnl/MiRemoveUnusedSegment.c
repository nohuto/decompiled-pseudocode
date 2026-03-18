/*
 * XREFs of MiRemoveUnusedSegment @ 0x140218D9C
 * Callers:
 *     MiReferencePfBackedSection @ 0x1402185B4 (MiReferencePfBackedSection.c)
 *     MiComputeDataFlushRange @ 0x140218970 (MiComputeDataFlushRange.c)
 *     MiPreventControlAreaDeletion @ 0x140218C70 (MiPreventControlAreaDeletion.c)
 *     MiReferenceControlArea @ 0x140219CEC (MiReferenceControlArea.c)
 *     MiEntireSubsectionIsPurged @ 0x14033FC28 (MiEntireSubsectionIsPurged.c)
 *     MiReferenceExistingControlArea @ 0x14034DAEC (MiReferenceExistingControlArea.c)
 *     MiAttemptSectionDelete @ 0x14034E3B8 (MiAttemptSectionDelete.c)
 *     MiPrepareSegmentForDeletion @ 0x140418F34 (MiPrepareSegmentForDeletion.c)
 *     MmGetImageFileSignatureInformation @ 0x14044FBE0 (MmGetImageFileSignatureInformation.c)
 *     MiSetDeleteOnClose @ 0x1404D3D60 (MiSetDeleteOnClose.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlinkUnusedControlArea @ 0x140419C98 (MiUnlinkUnusedControlArea.c)
 */

void __fastcall MiRemoveUnusedSegment(__int64 a1)
{
  __int64 v2; // rbx

  if ( (*(_DWORD *)(a1 + 56) & 0x10000000) != 0 )
  {
    v2 = *((_QWORD *)qword_140E2FD48 + (*(_WORD *)(a1 + 60) & 0x3FF));
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 1728));
    MiUnlinkUnusedControlArea(a1);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1728));
  }
}

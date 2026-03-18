/*
 * XREFs of MiGetControlAreaPartition @ 0x1404378D0
 * Callers:
 *     MiCreateFileOnlyPfns @ 0x1407F0124 (MiCreateFileOnlyPfns.c)
 *     MiAllocateVirtualMemory @ 0x1408DF540 (MiAllocateVirtualMemory.c)
 *     MiMapImageInSystemSpace @ 0x1408F5378 (MiMapImageInSystemSpace.c)
 *     MiChargeSegmentCommit @ 0x1408F7C78 (MiChargeSegmentCommit.c)
 *     MiCreateImageOrDataSection @ 0x140941B00 (MiCreateImageOrDataSection.c)
 *     MiExtendSection @ 0x1409463BC (MiExtendSection.c)
 *     MiPfPrepareReadList @ 0x1409557EC (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140956378 (MiPfPrepareSequentialReadList.c)
 *     MmQueryVirtualMemory @ 0x140986420 (MmQueryVirtualMemory.c)
 *     MiSegmentDelete @ 0x140A131E4 (MiSegmentDelete.c)
 *     MiAllocatePerSessionProtos @ 0x140A4FFC0 (MiAllocatePerSessionProtos.c)
 *     MiCreateFileOnlyImageFixupList @ 0x140AB861C (MiCreateFileOnlyImageFixupList.c)
 *     MiFreeInitializationCode @ 0x140AE67EC (MiFreeInitializationCode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetControlAreaPartition(__int64 a1)
{
  return *((_QWORD *)qword_140E2FF88 + (*(_WORD *)(a1 + 60) & 0x3FF));
}

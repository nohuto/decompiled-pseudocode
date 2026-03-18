/*
 * XREFs of MiGetControlAreaPartition @ 0x14043B7F0
 * Callers:
 *     MiCreateFileOnlyPfns @ 0x1407E0284 (MiCreateFileOnlyPfns.c)
 *     MiAllocateVirtualMemory @ 0x1408FE2C0 (MiAllocateVirtualMemory.c)
 *     MiExtendSection @ 0x14093B140 (MiExtendSection.c)
 *     MiCreateImageOrDataSection @ 0x14093D200 (MiCreateImageOrDataSection.c)
 *     MiMapImageInSystemSpace @ 0x140943ED0 (MiMapImageInSystemSpace.c)
 *     MiPfPrepareReadList @ 0x1409C90BC (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1409C9C58 (MiPfPrepareSequentialReadList.c)
 *     MmQueryVirtualMemory @ 0x1409D0670 (MmQueryVirtualMemory.c)
 *     MiChargeSegmentCommit @ 0x1409FC7C8 (MiChargeSegmentCommit.c)
 *     MiSegmentDelete @ 0x140A095FC (MiSegmentDelete.c)
 *     MiAllocatePerSessionProtos @ 0x140A58B44 (MiAllocatePerSessionProtos.c)
 *     MiCreateFileOnlyImageFixupList @ 0x140AB4254 (MiCreateFileOnlyImageFixupList.c)
 *     MiFreeInitializationCode @ 0x140AD58A0 (MiFreeInitializationCode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetControlAreaPartition(__int64 a1)
{
  return *((_QWORD *)qword_140E2FD48 + (*(_WORD *)(a1 + 60) & 0x3FF));
}

/*
 * XREFs of MmSizeOfMdl @ 0x140457EF0
 * Callers:
 *     VslObtainHotPatchUndoTable @ 0x140703DE0 (VslObtainHotPatchUndoTable.c)
 *     SmProcessStatsRequest @ 0x1407892C8 (SmProcessStatsRequest.c)
 *     ExInitializeLeapSecondData @ 0x1407A6790 (ExInitializeLeapSecondData.c)
 *     NtStartProfile @ 0x1407B2640 (NtStartProfile.c)
 *     ExLockUserBuffer @ 0x140823168 (ExLockUserBuffer.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1409CBB80 (MiLoadDataIntoVsmEnclave.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1409D1E28 (MiQueryMemoryPhysicalContiguity.c)
 *     MiRotateToFrameBuffer @ 0x140A28F1C (MiRotateToFrameBuffer.c)
 *     VslValidateDynamicCodePages @ 0x140A42148 (VslValidateDynamicCodePages.c)
 *     VslCreateSecureSection @ 0x140A58800 (VslCreateSecureSection.c)
 *     MiReplaceRotateWithDemandZero @ 0x140A62AD8 (MiReplaceRotateWithDemandZero.c)
 *     PspCreateSecureThread @ 0x140A6FD5C (PspCreateSecureThread.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall MmSizeOfMdl(PVOID Base, SIZE_T Length)
{
  return 8 * ((((unsigned __int16)Base & 0xFFF) + Length + 4095) >> 12) + 48;
}

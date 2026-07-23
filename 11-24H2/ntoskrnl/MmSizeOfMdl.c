/*
 * XREFs of MmSizeOfMdl @ 0x14044DA00
 * Callers:
 *     VslObtainHotPatchUndoTable @ 0x14070D850 (VslObtainHotPatchUndoTable.c)
 *     SmProcessStatsRequest @ 0x1407987A8 (SmProcessStatsRequest.c)
 *     ExInitializeLeapSecondData @ 0x1407B6080 (ExInitializeLeapSecondData.c)
 *     NtStartProfile @ 0x1407C2260 (NtStartProfile.c)
 *     ExLockUserBuffer @ 0x14094F5B8 (ExLockUserBuffer.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140970318 (MiQueryMemoryPhysicalContiguity.c)
 *     MiRotateToFrameBuffer @ 0x140A233E4 (MiRotateToFrameBuffer.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140A2A630 (MiLoadDataIntoVsmEnclave.c)
 *     VslValidateDynamicCodePages @ 0x140A3BD6C (VslValidateDynamicCodePages.c)
 *     VslCreateSecureSection @ 0x140A52D90 (VslCreateSecureSection.c)
 *     MiReplaceRotateWithDemandZero @ 0x140A5D478 (MiReplaceRotateWithDemandZero.c)
 *     PspCreateSecureThread @ 0x140A6BAE8 (PspCreateSecureThread.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall MmSizeOfMdl(PVOID Base, SIZE_T Length)
{
  return 8 * ((((unsigned __int16)Base & 0xFFF) + Length + 4095) >> 12) + 48;
}

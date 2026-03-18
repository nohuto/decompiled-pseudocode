/*
 * XREFs of WheaRecoveryBugCheck @ 0x14065BBD0
 * Callers:
 *     WheaReportHwError @ 0x14042E300 (WheaReportHwError.c)
 *     KiMcheckAlternateReturn @ 0x1405C9C80 (KiMcheckAlternateReturn.c)
 * Callees:
 *     WheapCompressErrorRecord @ 0x140478138 (WheapCompressErrorRecord.c)
 *     WheapAddToDumpFile @ 0x14065BCBC (WheapAddToDumpFile.c)
 *     WheapPersistPageForMemoryError @ 0x14065BE48 (WheapPersistPageForMemoryError.c)
 */

__int64 __fastcall WheaRecoveryBugCheck(__int64 a1, __int64 a2)
{
  WheapCompressErrorRecord(3, a1);
  WheapPersistPageForMemoryError(a1);
  PshedWriteErrorRecord(0LL, *(unsigned int *)(a1 + 20), a1);
  WheapAddToDumpFile(a1, *(unsigned int *)(a1 + 20));
  return PshedBugCheckSystem(a2, a1);
}

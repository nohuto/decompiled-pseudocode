/*
 * XREFs of WheaRecoveryBugCheck @ 0x14065A2F0
 * Callers:
 *     WheaReportHwError @ 0x140420030 (WheaReportHwError.c)
 *     KiMcheckAlternateReturn @ 0x1405C73B0 (KiMcheckAlternateReturn.c)
 * Callees:
 *     WheapCompressErrorRecord @ 0x140474738 (WheapCompressErrorRecord.c)
 *     WheapAddToDumpFile @ 0x14065A3DC (WheapAddToDumpFile.c)
 *     WheapPersistPageForMemoryError @ 0x14065A568 (WheapPersistPageForMemoryError.c)
 */

__int64 __fastcall WheaRecoveryBugCheck(__int64 a1, __int64 a2)
{
  WheapCompressErrorRecord(3, a1);
  WheapPersistPageForMemoryError(a1);
  PshedWriteErrorRecord(0LL, *(unsigned int *)(a1 + 20), a1);
  WheapAddToDumpFile(a1, *(unsigned int *)(a1 + 20));
  return PshedBugCheckSystem(a2, a1);
}

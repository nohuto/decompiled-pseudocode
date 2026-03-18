/*
 * XREFs of FsRtlAddBaseMcbEntry @ 0x1403DFD50
 * Callers:
 *     FsRtlAddLargeMcbEntry @ 0x1403DF6B0 (FsRtlAddLargeMcbEntry.c)
 * Callees:
 *     FsRtlAddBaseMcbEntryEx @ 0x1403DFD70 (FsRtlAddBaseMcbEntryEx.c)
 */

BOOLEAN __stdcall FsRtlAddBaseMcbEntry(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  return FsRtlAddBaseMcbEntryEx(Mcb, Vbn, Lbn, SectorCount) >= 0;
}

/*
 * XREFs of FsRtlAddBaseMcbEntry @ 0x1403D28C0
 * Callers:
 *     FsRtlAddLargeMcbEntry @ 0x1403D2220 (FsRtlAddLargeMcbEntry.c)
 * Callees:
 *     FsRtlAddBaseMcbEntryEx @ 0x1403D28E0 (FsRtlAddBaseMcbEntryEx.c)
 */

BOOLEAN __stdcall FsRtlAddBaseMcbEntry(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  return FsRtlAddBaseMcbEntryEx(Mcb, Vbn, Lbn, SectorCount) >= 0;
}

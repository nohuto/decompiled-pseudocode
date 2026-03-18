/*
 * XREFs of FsRtlAddLargeMcbEntry @ 0x1403D2220
 * Callers:
 *     FsRtlAddMcbEntry @ 0x14057C710 (FsRtlAddMcbEntry.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     FsRtlAddBaseMcbEntry @ 0x1403D28C0 (FsRtlAddBaseMcbEntry.c)
 */

BOOLEAN __stdcall FsRtlAddLargeMcbEntry(PLARGE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(SectorCount) = FsRtlAddBaseMcbEntry(&Mcb->BaseMcb, Vbn, Lbn, SectorCount);
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
  return SectorCount;
}

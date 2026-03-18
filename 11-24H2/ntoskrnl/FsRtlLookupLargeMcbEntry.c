/*
 * XREFs of FsRtlLookupLargeMcbEntry @ 0x1404031D0
 * Callers:
 *     FsRtlLookupMcbEntry @ 0x14057FBB0 (FsRtlLookupMcbEntry.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     FsRtlLookupBaseMcbEntry @ 0x140403260 (FsRtlLookupBaseMcbEntry.c)
 */

BOOLEAN __stdcall FsRtlLookupLargeMcbEntry(
        PLARGE_MCB Mcb,
        LONGLONG Vbn,
        PLONGLONG Lbn,
        PLONGLONG SectorCountFromLbn,
        PLONGLONG StartingLbn,
        PLONGLONG SectorCountFromStartingLbn,
        PULONG Index)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(SectorCountFromLbn) = FsRtlLookupBaseMcbEntry(
                                 &Mcb->BaseMcb,
                                 Vbn,
                                 Lbn,
                                 SectorCountFromLbn,
                                 StartingLbn,
                                 SectorCountFromStartingLbn,
                                 Index);
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
  return (unsigned __int8)SectorCountFromLbn;
}

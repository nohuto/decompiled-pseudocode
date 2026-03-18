/*
 * XREFs of FsRtlLookupLastLargeMcbEntry @ 0x14057C7D0
 * Callers:
 *     FsRtlLookupLastMcbEntry @ 0x14057C830 (FsRtlLookupLastMcbEntry.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     FsRtlLookupLastBaseMcbEntry @ 0x140441AB0 (FsRtlLookupLastBaseMcbEntry.c)
 */

BOOLEAN __stdcall FsRtlLookupLastLargeMcbEntry(PLARGE_MCB Mcb, PLONGLONG Vbn, PLONGLONG Lbn)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(Lbn) = FsRtlLookupLastBaseMcbEntry(&Mcb->BaseMcb, Vbn, Lbn);
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
  return (unsigned __int8)Lbn;
}

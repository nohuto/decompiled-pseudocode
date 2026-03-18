/*
 * XREFs of FsRtlRemoveLargeMcbEntry @ 0x1403DF500
 * Callers:
 *     FsRtlRemoveMcbEntry @ 0x14057FC60 (FsRtlRemoveMcbEntry.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     FsRtlRemoveBaseMcbEntry @ 0x1403DF870 (FsRtlRemoveBaseMcbEntry.c)
 */

void __stdcall FsRtlRemoveLargeMcbEntry(PLARGE_MCB Mcb, LONGLONG Vbn, LONGLONG SectorCount)
{
  unsigned int v3; // edi
  unsigned int v4; // esi

  v3 = SectorCount;
  v4 = Vbn;
  ExAcquireFastMutex(Mcb->GuardedMutex);
  FsRtlRemoveBaseMcbEntry(&Mcb->BaseMcb, v4, v3);
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
}

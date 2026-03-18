/*
 * XREFs of FsRtlUninitializeLargeMcb @ 0x1404408B0
 * Callers:
 *     FsRtlUninitializeMcb @ 0x14070A890 (FsRtlUninitializeMcb.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14024A9C0 (ExFreeToNPagedLookasideList.c)
 *     FsRtlUninitializeBaseMcb @ 0x1404408F0 (FsRtlUninitializeBaseMcb.c)
 */

void __stdcall FsRtlUninitializeLargeMcb(PLARGE_MCB Mcb)
{
  if ( Mcb->GuardedMutex )
  {
    ExFreeToNPagedLookasideList(&FsRtlFastMutexLookasideList, Mcb->GuardedMutex);
    Mcb->GuardedMutex = 0LL;
    FsRtlUninitializeBaseMcb(&Mcb->BaseMcb);
  }
}

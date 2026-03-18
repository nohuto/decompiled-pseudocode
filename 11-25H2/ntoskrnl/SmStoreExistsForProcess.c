/*
 * XREFs of SmStoreExistsForProcess @ 0x140324354
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1403D8E1C (MmOutSwapWorkingSet.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1404D5BE8 (MiReleaseOutSwappedProcessCommit.c)
 *     SmProcessProcessStoreInfoRequest @ 0x140788FA8 (SmProcessProcessStoreInfoRequest.c)
 *     VmpPauseResumeNotify @ 0x14078FE78 (VmpPauseResumeNotify.c)
 *     PfpPrivSourceEnum @ 0x1408DED60 (PfpPrivSourceEnum.c)
 * Callees:
 *     SmpKeyedStoreEntryGet @ 0x1403243B0 (SmpKeyedStoreEntryGet.c)
 */

_BOOL8 __fastcall SmStoreExistsForProcess(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 1880) + 24LL);
  return a1 != *(_QWORD *)(v1 + 2168) && SmpKeyedStoreEntryGet(v1 + 2232) != 0;
}

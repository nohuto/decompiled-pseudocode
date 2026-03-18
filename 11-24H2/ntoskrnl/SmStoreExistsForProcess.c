/*
 * XREFs of SmStoreExistsForProcess @ 0x140245744
 * Callers:
 *     MmOutSwapWorkingSet @ 0x140404630 (MmOutSwapWorkingSet.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14042D608 (MiReleaseOutSwappedProcessCommit.c)
 *     SmProcessProcessStoreInfoRequest @ 0x140798378 (SmProcessProcessStoreInfoRequest.c)
 *     VmpPauseResumeNotify @ 0x14079F238 (VmpPauseResumeNotify.c)
 *     PfpPrivSourceEnum @ 0x1408EE170 (PfpPrivSourceEnum.c)
 * Callees:
 *     SmpKeyedStoreEntryGet @ 0x1402457A0 (SmpKeyedStoreEntryGet.c)
 */

_BOOL8 __fastcall SmStoreExistsForProcess(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 1880) + 24LL);
  return a1 != *(_QWORD *)(v1 + 2168) && SmpKeyedStoreEntryGet(v1 + 2232) != 0;
}

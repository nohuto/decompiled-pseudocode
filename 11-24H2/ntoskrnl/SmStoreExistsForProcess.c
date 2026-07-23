/*
 * XREFs of SmStoreExistsForProcess @ 0x14020DF24
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1403C6F10 (MmOutSwapWorkingSet.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140424B70 (MiReleaseOutSwappedProcessCommit.c)
 *     SmProcessProcessStoreInfoRequest @ 0x140798488 (SmProcessProcessStoreInfoRequest.c)
 *     VmpPauseResumeNotify @ 0x14079F348 (VmpPauseResumeNotify.c)
 *     PfpPrivSourceEnum @ 0x14085F9A0 (PfpPrivSourceEnum.c)
 * Callees:
 *     SmpKeyedStoreEntryGet @ 0x14020DF80 (SmpKeyedStoreEntryGet.c)
 */

_BOOL8 __fastcall SmStoreExistsForProcess(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 1880) + 24LL);
  return a1 != *(_QWORD *)(v1 + 2168) && SmpKeyedStoreEntryGet(v1 + 2232) != 0;
}

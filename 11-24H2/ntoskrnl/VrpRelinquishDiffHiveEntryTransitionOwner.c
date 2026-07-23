/*
 * XREFs of VrpRelinquishDiffHiveEntryTransitionOwner @ 0x14092CB90
 * Callers:
 *     VrpLoadDifferencingHive @ 0x14092C6BC (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x14092CC8C (VrpUnloadDifferencingHive.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     KeWakeWaitChain @ 0x1402F15F0 (KeWakeWaitChain.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

void __fastcall VrpRelinquishDiffHiveEntryTransitionOwner(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 40;
  *(_QWORD *)(a1 + 40) = 0LL;
  KeWakeWaitChain((_QWORD *)(a1 + 48), 0, 0);
  KeAbPostRelease(v1);
  KeLeaveCriticalRegion();
}

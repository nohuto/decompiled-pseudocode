/*
 * XREFs of VrpRelinquishDiffHiveEntryTransitionOwner @ 0x14092AA50
 * Callers:
 *     VrpLoadDifferencingHive @ 0x14092A57C (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x14092AB4C (VrpUnloadDifferencingHive.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeWakeWaitChain @ 0x1403D7B10 (KeWakeWaitChain.c)
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

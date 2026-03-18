/*
 * XREFs of MiZeroInParallel @ 0x1404155D0
 * Callers:
 *     MiProcessPageGroupInfo @ 0x1403A2E30 (MiProcessPageGroupInfo.c)
 *     MiChangePageAttributeAndZeroBatch @ 0x140414984 (MiChangePageAttributeAndZeroBatch.c)
 *     MiGroupZeroHugeRange @ 0x140685AB4 (MiGroupZeroHugeRange.c)
 * Callees:
 *     MiWaitForZeroWorkers @ 0x14041561C (MiWaitForZeroWorkers.c)
 *     MiInitializeZeroGroup @ 0x140415664 (MiInitializeZeroGroup.c)
 *     MiLaunchZeroParent @ 0x140415C50 (MiLaunchZeroParent.c)
 *     MiLaunchZeroWorkers @ 0x140416850 (MiLaunchZeroWorkers.c)
 */

__int64 __fastcall MiZeroInParallel(__int64 a1)
{
  MiInitializeZeroGroup();
  if ( *(_DWORD *)(a1 + 32) )
    MiLaunchZeroWorkers(a1);
  if ( (*(_DWORD *)(a1 + 16) & 0x40) != 0 || !*(_DWORD *)(a1 + 32) )
    MiLaunchZeroParent(a1);
  return MiWaitForZeroWorkers(a1);
}

/*
 * XREFs of MiZeroInParallel @ 0x140271430
 * Callers:
 *     MiChangePageAttributeAndZeroBatch @ 0x1402708E0 (MiChangePageAttributeAndZeroBatch.c)
 *     MiProcessPageGroupInfo @ 0x1402709E8 (MiProcessPageGroupInfo.c)
 *     MiGroupZeroHugeRange @ 0x140686BE4 (MiGroupZeroHugeRange.c)
 * Callees:
 *     MiWaitForZeroWorkers @ 0x14027147C (MiWaitForZeroWorkers.c)
 *     MiInitializeZeroGroup @ 0x1402714C4 (MiInitializeZeroGroup.c)
 *     MiLaunchZeroParent @ 0x140271AB0 (MiLaunchZeroParent.c)
 *     MiLaunchZeroWorkers @ 0x140271D90 (MiLaunchZeroWorkers.c)
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

/*
 * XREFs of MiZeroInParallel @ 0x140418028
 * Callers:
 *     MiProcessPageGroupInfo @ 0x14038D61C (MiProcessPageGroupInfo.c)
 *     MiChangePageAttributeAndZeroBatch @ 0x140417430 (MiChangePageAttributeAndZeroBatch.c)
 *     MiGroupZeroHugeRange @ 0x14067A224 (MiGroupZeroHugeRange.c)
 * Callees:
 *     MiWaitForZeroWorkers @ 0x140418074 (MiWaitForZeroWorkers.c)
 *     MiInitializeZeroGroup @ 0x1404180BC (MiInitializeZeroGroup.c)
 *     MiLaunchZeroParent @ 0x1404186A8 (MiLaunchZeroParent.c)
 *     MiLaunchZeroWorkers @ 0x14041898C (MiLaunchZeroWorkers.c)
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

/*
 * XREFs of IopWarmEjectDevice @ 0x14073639C
 * Callers:
 *     PnpProcessCompletedEject @ 0x140723BF0 (PnpProcessCompletedEject.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PnpSetPowerVetoEvent @ 0x14072E0B4 (PnpSetPowerVetoEvent.c)
 *     NtInitiatePowerAction @ 0x140754BF0 (NtInitiatePowerAction.c)
 *     PpDevNodeLockTree @ 0x140A08C10 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A145FC (PpDevNodeUnlockTree.c)
 */

__int64 __fastcall IopWarmEjectDevice(_QWORD *a1, unsigned int a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // r8

  KeWaitForSingleObject(&IopWarmEjectLock, Executive, 0, 0, 0LL);
  PpDevNodeLockTree(1LL);
  IopWarmEjectPdo = (__int64)a1;
  PpDevNodeUnlockTree(1LL);
  v5 = NtInitiatePowerAction(7LL, a2, 3LL);
  if ( v5 == -1073741727 )
    PnpSetPowerVetoEvent(7, v4, v6, a1, 12, 0LL);
  PpDevNodeLockTree(1LL);
  if ( IopWarmEjectPdo )
  {
    if ( v5 >= 0 )
      v5 = -1073741823;
    IopWarmEjectPdo = 0LL;
  }
  PpDevNodeUnlockTree(1LL);
  KeSetEvent(&IopWarmEjectLock, 0, 0);
  return (unsigned int)v5;
}

/*
 * XREFs of IopWarmEjectDevice @ 0x14072A10C
 * Callers:
 *     PnpProcessCompletedEject @ 0x140717AF0 (PnpProcessCompletedEject.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     PnpSetPowerVetoEvent @ 0x140722134 (PnpSetPowerVetoEvent.c)
 *     NtInitiatePowerAction @ 0x140748B20 (NtInitiatePowerAction.c)
 *     PpDevNodeLockTree @ 0x140A060F0 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A0AA84 (PpDevNodeUnlockTree.c)
 */

__int64 __fastcall IopWarmEjectDevice(_QWORD *a1, SYSTEM_POWER_STATE a2)
{
  __int64 v4; // rdx
  NTSTATUS v5; // ebx
  __int64 v6; // r8

  KeWaitForSingleObject(&IopWarmEjectLock, Executive, 0, 0, 0LL);
  PpDevNodeLockTree(1LL);
  IopWarmEjectPdo = (__int64)a1;
  PpDevNodeUnlockTree(1LL);
  v5 = NtInitiatePowerAction(PowerActionWarmEject, a2, 3u, 0);
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

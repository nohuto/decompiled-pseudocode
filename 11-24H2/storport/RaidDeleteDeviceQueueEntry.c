/*
 * XREFs of RaidDeleteDeviceQueueEntry @ 0x140026BC8
 * Callers:
 *     RaidUnitProcessBusyRequest @ 0x140031200 (RaidUnitProcessBusyRequest.c)
 *     RaUnitStartIo @ 0x14004E6F0 (RaUnitStartIo.c)
 *     RaidAdapterCheckWaitTimeout @ 0x140058F80 (RaidAdapterCheckWaitTimeout.c)
 * Callees:
 *     RiDeleteDeviceQueueEntry @ 0x140026C4C (RiDeleteDeviceQueueEntry.c)
 *     RiDisableDeviceQueueFastPath @ 0x140026CB0 (RiDisableDeviceQueueFastPath.c)
 *     RaUnitUnlockForwardIo @ 0x14002B180 (RaUnitUnlockForwardIo.c)
 */

void __fastcall RaidDeleteDeviceQueueEntry(__int64 a1, unsigned int a2)
{
  KIRQL v4; // al
  __int64 v5; // rdx
  KIRQL v6; // bl

  if ( a2 )
    RaUnitUnlockForwardIo(a1 - 720, 0LL);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  LOBYTE(v5) = 1;
  v6 = v4;
  RiDisableDeviceQueueFastPath(a1, v5);
  RiDeleteDeviceQueueEntry(a1, a2);
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v6);
}

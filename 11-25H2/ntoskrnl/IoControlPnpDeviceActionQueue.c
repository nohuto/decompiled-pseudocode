/*
 * XREFs of IoControlPnpDeviceActionQueue @ 0x140498FE0
 * Callers:
 *     WmipRegistrationWorker @ 0x1409B8D80 (WmipRegistrationWorker.c)
 *     PopDirectedDripsInitializeBroadcast @ 0x140A3B9D4 (PopDirectedDripsInitializeBroadcast.c)
 *     IoDiagTraceDevicesRundown @ 0x140A40030 (IoDiagTraceDevicesRundown.c)
 * Callees:
 *     PnpUnlockDeviceActionQueue @ 0x140499000 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x140499094 (PnpLockDeviceActionQueue.c)
 */

__int64 __fastcall IoControlPnpDeviceActionQueue(char a1)
{
  if ( a1 )
    return PnpLockDeviceActionQueue();
  else
    return PnpUnlockDeviceActionQueue();
}

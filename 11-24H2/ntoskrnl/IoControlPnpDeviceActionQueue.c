/*
 * XREFs of IoControlPnpDeviceActionQueue @ 0x140498E44
 * Callers:
 *     WmipRegistrationWorker @ 0x1409D10C0 (WmipRegistrationWorker.c)
 *     PopDirectedDripsInitializeBroadcast @ 0x140A401F4 (PopDirectedDripsInitializeBroadcast.c)
 *     IoDiagTraceDevicesRundown @ 0x140A44A50 (IoDiagTraceDevicesRundown.c)
 * Callees:
 *     PnpUnlockDeviceActionQueue @ 0x140498E64 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x140498EF8 (PnpLockDeviceActionQueue.c)
 */

__int64 __fastcall IoControlPnpDeviceActionQueue(char a1)
{
  if ( a1 )
    return PnpLockDeviceActionQueue();
  else
    return PnpUnlockDeviceActionQueue();
}

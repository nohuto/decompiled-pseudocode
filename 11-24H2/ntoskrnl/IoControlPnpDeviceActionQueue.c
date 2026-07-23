/*
 * XREFs of IoControlPnpDeviceActionQueue @ 0x140493724
 * Callers:
 *     WmipRegistrationWorker @ 0x1409AFCD0 (WmipRegistrationWorker.c)
 *     PopDirectedDripsInitializeBroadcast @ 0x140A35AD4 (PopDirectedDripsInitializeBroadcast.c)
 *     IoDiagTraceDevicesRundown @ 0x140A3A2E0 (IoDiagTraceDevicesRundown.c)
 * Callees:
 *     PnpUnlockDeviceActionQueue @ 0x140493744 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x1404937D8 (PnpLockDeviceActionQueue.c)
 */

__int64 __fastcall IoControlPnpDeviceActionQueue(char a1)
{
  if ( a1 )
    return PnpLockDeviceActionQueue();
  else
    return PnpUnlockDeviceActionQueue();
}

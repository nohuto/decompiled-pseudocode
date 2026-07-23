/*
 * XREFs of PnpDiagnosticTraceObject @ 0x1402F0484
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x1402F0310 (PnpDeviceCompletionRoutine.c)
 *     PnpRebalance @ 0x1407331E8 (PnpRebalance.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x1408B079C (PnpQueueQueryAndRemoveEvent.c)
 *     PipEnumerateDevice @ 0x1408B895C (PipEnumerateDevice.c)
 *     IopLoadDriver @ 0x1409B6EEC (IopLoadDriver.c)
 *     PnpStartDeviceNode @ 0x1409BEB50 (PnpStartDeviceNode.c)
 *     PiDevCfgProcessDevice @ 0x1409C9598 (PiDevCfgProcessDevice.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140A73830 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140A92DE0 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     IopUnloadDriver @ 0x140AA4068 (IopUnloadDriver.c)
 *     PnpEarlyLaunchImageNotificationPostProcess @ 0x140C24A60 (PnpEarlyLaunchImageNotificationPostProcess.c)
 *     PnpEarlyLaunchImageNotificationPreProcess @ 0x140C24B30 (PnpEarlyLaunchImageNotificationPreProcess.c)
 *     PnpInitializeBootStartDriver @ 0x140C68294 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PnpDiagnosticTraceObject(PCEVENT_DESCRIPTOR EventDescriptor, unsigned __int16 *a2)
{
  int v4; // ecx
  __int16 v6; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  __int64 v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  if ( !PnpEtwHandle || !EtwEventEnabled(PnpEtwHandle, EventDescriptor) )
    return 0;
  v4 = *a2;
  UserData.Reserved = 0;
  v10 = 0;
  v6 = (unsigned __int16)v4 >> 1;
  UserData.Ptr = (ULONGLONG)&v6;
  v8 = *((_QWORD *)a2 + 1);
  UserData.Size = 2;
  v9 = v4;
  return EtwWriteEx(PnpEtwHandle, EventDescriptor, 0LL, 0, 0LL, 0LL, 2u, &UserData);
}

/*
 * XREFs of PnpDiagnosticTraceObject @ 0x140463B34
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x1404639C0 (PnpDeviceCompletionRoutine.c)
 *     PnpRebalance @ 0x140729028 (PnpRebalance.c)
 *     PipEnumerateDevice @ 0x1408353E4 (PipEnumerateDevice.c)
 *     PiDevCfgProcessDevice @ 0x1408906D0 (PiDevCfgProcessDevice.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14096B044 (PnpQueueQueryAndRemoveEvent.c)
 *     PnpStartDeviceNode @ 0x1409A168C (PnpStartDeviceNode.c)
 *     IopLoadDriver @ 0x1409B0D50 (IopLoadDriver.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140A776C0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140A92360 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     IopUnloadDriver @ 0x140AA3F28 (IopUnloadDriver.c)
 *     PnpEarlyLaunchImageNotificationPostProcess @ 0x140C11950 (PnpEarlyLaunchImageNotificationPostProcess.c)
 *     PnpEarlyLaunchImageNotificationPreProcess @ 0x140C11A20 (PnpEarlyLaunchImageNotificationPreProcess.c)
 *     PnpInitializeBootStartDriver @ 0x140C5421C (PnpInitializeBootStartDriver.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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

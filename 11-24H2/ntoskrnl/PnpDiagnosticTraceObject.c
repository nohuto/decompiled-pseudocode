/*
 * XREFs of PnpDiagnosticTraceObject @ 0x14043B204
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x14043B090 (PnpDeviceCompletionRoutine.c)
 *     PnpRebalance @ 0x1407352B8 (PnpRebalance.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x1408B2EAC (PnpQueueQueryAndRemoveEvent.c)
 *     PipEnumerateDevice @ 0x1408BAFAC (PipEnumerateDevice.c)
 *     PiDevCfgProcessDevice @ 0x140996E44 (PiDevCfgProcessDevice.c)
 *     IopLoadDriver @ 0x1409C90C0 (IopLoadDriver.c)
 *     PnpStartDeviceNode @ 0x140A10740 (PnpStartDeviceNode.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140A79530 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140A965B0 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     IopUnloadDriver @ 0x140AA8FB8 (IopUnloadDriver.c)
 *     PnpEarlyLaunchImageNotificationPostProcess @ 0x140C22A30 (PnpEarlyLaunchImageNotificationPostProcess.c)
 *     PnpEarlyLaunchImageNotificationPreProcess @ 0x140C22B00 (PnpEarlyLaunchImageNotificationPreProcess.c)
 *     PnpInitializeBootStartDriver @ 0x140C66118 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
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

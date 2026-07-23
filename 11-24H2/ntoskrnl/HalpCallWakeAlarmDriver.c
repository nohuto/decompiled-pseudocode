/*
 * XREFs of HalpCallWakeAlarmDriver @ 0x140A93F30
 * Callers:
 *     HalpArmAcpiWakeAlarm @ 0x140A7BC50 (HalpArmAcpiWakeAlarm.c)
 * Callees:
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IoBuildDeviceIoControlRequest @ 0x14025EEA0 (IoBuildDeviceIoControlRequest.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 */

NTSTATUS __fastcall HalpCallWakeAlarmDriver(PDEVICE_OBJECT DeviceObject, char a2, char a3, int a4)
{
  IRP *v6; // rax
  NTSTATUS result; // eax
  _DWORD InputBuffer[2]; // [rsp+50h] [rbp-38h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-30h] BYREF
  struct _KEVENT Object; // [rsp+68h] [rbp-20h] BYREF

  memset(&Object, 0, sizeof(Object));
  InputBuffer[0] = a2 == 0;
  InputBuffer[1] = a4;
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  v6 = IoBuildDeviceIoControlRequest(
         a3 != 0 ? 2720256 : 2720260,
         DeviceObject,
         InputBuffer,
         8u,
         0LL,
         0,
         0,
         &Object,
         &IoStatusBlock);
  if ( !v6 )
    return -1073741670;
  result = IofCallDriver(DeviceObject, v6);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Object, Suspended, 0, 0, 0LL);
    return IoStatusBlock.Status;
  }
  return result;
}

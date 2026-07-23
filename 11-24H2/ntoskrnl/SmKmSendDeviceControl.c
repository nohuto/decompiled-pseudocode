/*
 * XREFs of SmKmSendDeviceControl @ 0x14079A6C8
 * Callers:
 *     SmKmVolumeQueryUniqueId @ 0x14079B92C (SmKmVolumeQueryUniqueId.c)
 * Callees:
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IoBuildDeviceIoControlRequest @ 0x14025EEA0 (IoBuildDeviceIoControlRequest.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 */

NTSTATUS __fastcall SmKmSendDeviceControl(
        __int64 a1,
        struct _DEVICE_OBJECT *a2,
        __int64 a3,
        __int64 a4,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  IRP *v7; // rax
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v7 = IoBuildDeviceIoControlRequest(0x4D0000u, a2, 0LL, 0, OutputBuffer, OutputBufferLength, 0, &Event, &IoStatusBlock);
  if ( !v7 )
    return -1073741670;
  result = IofCallDriver(a2, v7);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    return IoStatusBlock.Status;
  }
  return result;
}

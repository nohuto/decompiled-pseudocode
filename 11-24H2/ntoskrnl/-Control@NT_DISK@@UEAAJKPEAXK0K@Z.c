/*
 * XREFs of ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x14070B8D0
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IoBuildDeviceIoControlRequest @ 0x14025EEA0 (IoBuildDeviceIoControlRequest.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 */

int __fastcall NT_DISK::Control(
        PDEVICE_OBJECT *this,
        ULONG a2,
        void *a3,
        ULONG a4,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  IRP *v10; // rax
  int result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v10 = IoBuildDeviceIoControlRequest(a2, this[49], a3, a4, OutputBuffer, OutputBufferLength, 0, &Event, &IoStatusBlock);
  if ( !v10 )
    return -1073741670;
  result = IofCallDriver(this[49], v10);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    return IoStatusBlock.Status;
  }
  return result;
}

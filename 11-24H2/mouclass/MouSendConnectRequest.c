/*
 * XREFs of MouSendConnectRequest @ 0x1C00101F0
 * Callers:
 *     MouseAddDeviceEx @ 0x1C000FF40 (MouseAddDeviceEx.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002770 (WPP_RECORDER_SF_.c)
 */

NTSTATUS __fastcall MouSendConnectRequest(__int64 a1, __int64 a2)
{
  struct _DEVICE_OBJECT *v3; // rdx
  IRP *v4; // rax
  __int64 v5; // rdx
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  _QWORD InputBuffer[2]; // [rsp+60h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-28h] BYREF

  IoStatusBlock = 0LL;
  memset(&Event, 0, sizeof(Event));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 2LL);
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v3 = *(struct _DEVICE_OBJECT **)(a1 + 16);
  InputBuffer[0] = *(_QWORD *)(a1 + 8);
  InputBuffer[1] = MouseClassServiceCallback;
  v4 = IoBuildDeviceIoControlRequest(0xF0203u, v3, InputBuffer, 0x10u, 0LL, 0, 1u, &Event, &IoStatusBlock);
  if ( v4 )
  {
    result = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 16), v4);
    if ( result == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      result = IoStatusBlock.Status;
      goto LABEL_9;
    }
  }
  else
  {
    result = -1073741670;
  }
  IoStatusBlock.Status = result;
LABEL_9:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v5) = 5;
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v5, 2LL);
      return IoStatusBlock.Status;
    }
  }
  return result;
}

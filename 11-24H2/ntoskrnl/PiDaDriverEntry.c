/*
 * XREFs of PiDaDriverEntry @ 0x140C255C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     IoCreateDevice @ 0x1409A3530 (IoCreateDevice.c)
 */

__int64 __fastcall PiDaDriverEntry(PDRIVER_OBJECT DriverObject)
{
  NTSTATUS v2; // ebx
  UNICODE_STRING DeviceName; // [rsp+40h] [rbp-18h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp+8h] BYREF

  DeviceObject = 0LL;
  *(_DWORD *)(&DeviceName.MaximumLength + 1) = 0;
  DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)PiDaDispatch;
  DriverObject->MajorFunction[18] = (PDRIVER_DISPATCH)PiDaDispatch;
  DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)PiDaDispatch;
  DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)PiDaDispatch;
  memset_0(&FastIoDispatch, 0, 0xE0uLL);
  FastIoDispatch = 224;
  qword_140F89C50 = (__int64)PiDaFastIoDispatch;
  DriverObject->FastIoDispatch = (PFAST_IO_DISPATCH)&FastIoDispatch;
  DeviceName.Buffer = L"\\Device\\DeviceApi";
  *(_DWORD *)&DeviceName.Length = 2359330;
  v2 = IoCreateDevice(DriverObject, 0, &DeviceName, 0x22u, 0x20000u, 0, &DeviceObject);
  if ( v2 < 0 )
  {
    if ( DeviceObject )
      ObfDereferenceObjectWithTag(DeviceObject, 0x746C6644u);
  }
  else
  {
    DeviceObject->Flags &= ~0x80u;
  }
  return (unsigned int)v2;
}

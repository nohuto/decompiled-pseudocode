/*
 * XREFs of ViDdiDriverEntry @ 0x140B86750
 * Callers:
 *     <none>
 * Callees:
 *     IoDeleteDevice @ 0x1403E5820 (IoDeleteDevice.c)
 *     IoCreateDevice @ 0x1408ABEC0 (IoCreateDevice.c)
 *     IoWMIRegistrationControl @ 0x140A49C40 (IoWMIRegistrationControl.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall ViDdiDriverEntry(PDRIVER_OBJECT DriverObject)
{
  NTSTATUS result; // eax
  __int64 i; // rbx
  PDEVICE_OBJECT v4; // rcx
  __int64 j; // rbx
  struct _DEVICE_OBJECT *v6; // rdi
  NTSTATUS v7; // esi
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp+8h] BYREF

  DeviceObject = 0LL;
  DriverObject->MajorFunction[23] = (PDRIVER_DISPATCH)ViDdiDispatchWmi;
  ViDdiDeviceObjectArray = ExAllocatePool2(0x40uLL, 8uLL, 0x61446656uLL);
  if ( !ViDdiDeviceObjectArray )
    return -1073741670;
  for ( i = 0LL; !(_DWORD)i; i = 1LL )
  {
    result = IoCreateDevice(DriverObject, 4u, 0LL, 0x22u, 0x180u, 0, &DeviceObject);
    if ( result < 0 )
      return result;
    v4 = DeviceObject;
    *(_QWORD *)(ViDdiDeviceObjectArray + 8 * i) = DeviceObject;
    *(_DWORD *)v4->DeviceExtension = 0;
  }
  for ( j = 0LL; !(_DWORD)j; j = 1LL )
  {
    v6 = *(struct _DEVICE_OBJECT **)(ViDdiDeviceObjectArray + 8 * j);
    v6->Flags &= ~0x80u;
    v7 = IoWMIRegistrationControl(v6, 1u);
    if ( v7 < 0 )
    {
      IoDeleteDevice(v6);
      return v7;
    }
  }
  return 0;
}

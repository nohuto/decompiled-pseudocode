/*
 * XREFs of GetPointerDeviceKey @ 0x140217E30
 * Callers:
 *     RetrieveCalibrationData @ 0x140217DC0 (RetrieveCalibrationData.c)
 *     _SetCalibrationData @ 0x14027280C (_SetCalibrationData.c)
 * Callees:
 *     GetDeviceObjectPointer @ 0x140217F20 (GetDeviceObjectPointer.c)
 *     GetPointerDevicePDO @ 0x140218058 (GetPointerDevicePDO.c)
 */

_BOOL8 __fastcall GetPointerDeviceKey(int a1, void **a2, int a3)
{
  NTSTATUS DeviceObjectPointer; // ebx
  PVOID v6; // [rsp+30h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-8h] BYREF
  PVOID Object; // [rsp+60h] [rbp+20h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp+28h]

  DeviceObject = 0LL;
  Object = 0LL;
  v6 = 0LL;
  Handle = 0LL;
  DeviceObjectPointer = GetDeviceObjectPointer(
                          a1,
                          (_DWORD)a2,
                          a3,
                          (unsigned int)&Handle,
                          (__int64)&v6,
                          (__int64)&Object);
  if ( DeviceObjectPointer >= 0 )
  {
    ObfReferenceObject(Object);
    DeviceObjectPointer = GetPointerDevicePDO((PDEVICE_OBJECT)Object);
    if ( DeviceObjectPointer >= 0 )
      DeviceObjectPointer = IoOpenDeviceRegistryKey(DeviceObject, 1u, 0x20006u, a2);
    ObfDereferenceObject(Object);
    ObfDereferenceObject(v6);
    ObfDereferenceObject(DeviceObject);
    ZwClose(Handle);
  }
  return DeviceObjectPointer >= 0;
}

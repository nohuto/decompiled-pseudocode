/*
 * XREFs of GetPointerDeviceKey @ 0x1C01A971C
 * Callers:
 *     RetrieveCalibrationData @ 0x1C01A4FE0 (RetrieveCalibrationData.c)
 *     _SetCalibrationData @ 0x1C01A9FAC (_SetCalibrationData.c)
 * Callees:
 *     GetDeviceObjectPointer @ 0x1C01A95E4 (GetDeviceObjectPointer.c)
 *     GetPointerDevicePDO @ 0x1C01C2858 (GetPointerDevicePDO.c)
 */

_BOOL8 __fastcall GetPointerDeviceKey(struct _UNICODE_STRING *a1, void **a2, __int64 a3)
{
  int DeviceObjectPointer; // ebx
  PVOID v6; // [rsp+30h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-8h] BYREF
  PVOID Object; // [rsp+60h] [rbp+20h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp+28h]

  DeviceObject = 0LL;
  Object = 0LL;
  v6 = 0LL;
  Handle = 0LL;
  DeviceObjectPointer = GetDeviceObjectPointer(a1, (__int64)a2, a3, &Handle, &v6, (PDEVICE_OBJECT *)&Object);
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

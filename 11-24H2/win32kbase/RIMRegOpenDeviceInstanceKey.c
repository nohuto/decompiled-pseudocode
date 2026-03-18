/*
 * XREFs of RIMRegOpenDeviceInstanceKey @ 0x1400A7A48
 * Callers:
 *     RIMPopulateExtendedKeyboardDeviceProperties @ 0x1401E8AB8 (RIMPopulateExtendedKeyboardDeviceProperties.c)
 *     RIMPopulateExtendedMouseDeviceProperties @ 0x1401E8B38 (RIMPopulateExtendedMouseDeviceProperties.c)
 *     RIMPopulateExtendedPointerDeviceProperties @ 0x1401E8BF0 (RIMPopulateExtendedPointerDeviceProperties.c)
 * Callees:
 *     RIMGetPointerDevicePDO @ 0x1400A8474 (RIMGetPointerDevicePDO.c)
 *     RIMGetDeviceObjectPointer @ 0x1400B1270 (RIMGetDeviceObjectPointer.c)
 */

void *__fastcall RIMRegOpenDeviceInstanceKey(int a1, int a2, int a3)
{
  PVOID v4[2]; // [rsp+30h] [rbp-10h] BYREF
  PVOID Object; // [rsp+50h] [rbp+10h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp+18h]
  void *DeviceRegKey; // [rsp+60h] [rbp+20h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+28h] BYREF

  DeviceRegKey = 0LL;
  Object = 0LL;
  v4[0] = 0LL;
  Handle = 0LL;
  DeviceObject = 0LL;
  if ( (int)RIMGetDeviceObjectPointer(a1 + 192, a2, a3, (unsigned int)&Handle, (__int64)v4, (__int64)&Object) >= 0 )
  {
    ObfReferenceObject(Object);
    if ( (int)RIMGetPointerDevicePDO((PDEVICE_OBJECT)Object) >= 0 )
    {
      if ( IoOpenDeviceRegistryKey(DeviceObject, 1u, 0x20019u, &DeviceRegKey) < 0 )
        DeviceRegKey = 0LL;
      ObfDereferenceObject(DeviceObject);
    }
    ZwClose(Handle);
    ObfDereferenceObject(v4[0]);
    ObfDereferenceObject(Object);
  }
  return DeviceRegKey;
}

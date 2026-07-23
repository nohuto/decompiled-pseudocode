/*
 * XREFs of IoWMIHandleToInstanceName @ 0x140A93D30
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x140A697E0 (IoWMIDeviceObjectToInstanceName.c)
 *     WmipGetFilePDO @ 0x140A93DA4 (WmipGetFilePDO.c)
 */

NTSTATUS __stdcall IoWMIHandleToInstanceName(PVOID DataBlockObject, HANDLE FileHandle, PUNICODE_STRING InstanceName)
{
  NTSTATUS FilePDO; // ebx
  UNICODE_STRING *v6; // r8
  PDEVICE_OBJECT v7; // rdi
  NTSTATUS v8; // eax
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp+20h] BYREF

  DeviceObject = 0LL;
  FilePDO = WmipGetFilePDO(FileHandle, 0LL, &DeviceObject);
  if ( FilePDO >= 0 )
  {
    v6 = InstanceName;
    v7 = DeviceObject;
    v8 = IoWMIDeviceObjectToInstanceName(DataBlockObject, DeviceObject, v6);
    FilePDO = 0;
    if ( v8 < 0 )
      FilePDO = v8;
    if ( v7 )
      ObfDereferenceObject(v7);
  }
  return FilePDO;
}

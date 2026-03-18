/*
 * XREFs of IopQueryDeviceHardwareIdForPdcTask @ 0x14096BCBC
 * Callers:
 *     IopProcessInvalidateBusRelationsRequest @ 0x14096C15C (IopProcessInvalidateBusRelationsRequest.c)
 * Callees:
 *     IoGetDeviceProperty @ 0x140834450 (IoGetDeviceProperty.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void *__fastcall IopQueryDeviceHardwareIdForPdcTask(PDEVICE_OBJECT DeviceObject)
{
  void *Pool2; // rbx
  ULONG BufferLength; // [rsp+48h] [rbp+10h] BYREF

  BufferLength = 0;
  Pool2 = 0LL;
  if ( IoGetDeviceProperty(DeviceObject, DevicePropertyHardwareID, 0, 0LL, &BufferLength) == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      if ( IoGetDeviceProperty(DeviceObject, DevicePropertyHardwareID, BufferLength, Pool2, &BufferLength) < 0 )
      {
        ExFreePoolWithTag(Pool2, 0);
        return 0LL;
      }
    }
  }
  return Pool2;
}

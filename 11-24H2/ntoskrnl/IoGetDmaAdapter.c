/*
 * XREFs of IoGetDmaAdapter @ 0x14071DB60
 * Callers:
 *     DifIoGetDmaAdapterWrapper @ 0x1406272D0 (DifIoGetDmaAdapterWrapper.c)
 *     VfGetDmaAdapter @ 0x140B88940 (VfGetDmaAdapter.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x14071DE54 (PiGetDmaAdapterFromBusInterface.c)
 *     IoGetDeviceProperty @ 0x1408BA410 (IoGetDeviceProperty.c)
 */

struct _DMA_ADAPTER *__stdcall IoGetDmaAdapter(
        PDEVICE_OBJECT PhysicalDeviceObject,
        struct _DEVICE_DESCRIPTION *DeviceDescription,
        PULONG NumberOfMapRegisters)
{
  struct _DMA_ADAPTER *DmaAdapterFromBusInterface; // rdi
  _DWORD *DeviceNode; // rax
  size_t v7; // r8
  NTSTATUS DeviceProperty; // eax
  int v9; // edx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v13; // rcx
  unsigned __int16 *v14; // rsi
  _WORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  ULONG ResultLength[4]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v19[20]; // [rsp+40h] [rbp-78h] BYREF
  int PropertyBuffer[11]; // [rsp+54h] [rbp-64h] BYREF

  memset_0(v19, 0, 0x40uLL);
  DmaAdapterFromBusInterface = 0LL;
  ResultLength[0] = 0;
  if ( PhysicalDeviceObject )
  {
    DeviceNode = PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
    if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
    {
      IoAddTriageDumpDataBlock((ULONG)PhysicalDeviceObject, (PVOID)PhysicalDeviceObject->Size);
      DriverObject = PhysicalDeviceObject->DriverObject;
      if ( DriverObject )
      {
        IoAddTriageDumpDataBlock((ULONG)DriverObject, (PVOID)(unsigned int)DriverObject->Size);
        p_DriverName = &PhysicalDeviceObject->DriverObject->DriverName;
        if ( p_DriverName->Length )
        {
          IoAddTriageDumpDataBlock((ULONG)p_DriverName, (PVOID)2);
          IoAddTriageDumpDataBlock(
            (ULONG)PhysicalDeviceObject->DriverObject->DriverName.Buffer,
            (PVOID)PhysicalDeviceObject->DriverObject->DriverName.Length);
        }
      }
      v13 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
      if ( v13 )
      {
        v14 = (unsigned __int16 *)(v13 + 40);
        IoAddTriageDumpDataBlock((ULONG)v13, (PVOID)0x388);
        if ( *v14 )
        {
          IoAddTriageDumpDataBlock((ULONG)v14, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v14 + 1), (PVOID)*v14);
        }
        v15 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 56;
        if ( *v15 )
        {
          IoAddTriageDumpDataBlock((ULONG)v15, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 8),
            (PVOID)*((unsigned __int16 *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 28));
        }
        v16 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
        if ( v16 && *(_WORD *)(v16 + 56) )
        {
          IoAddTriageDumpDataBlock(v16 + 56, (PVOID)2);
          v17 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v17 + 64), (PVOID)*(unsigned __int16 *)(v17 + 56));
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)PhysicalDeviceObject, 0LL, 0LL);
    }
    guard_dispatch_icall_no_overrides(KeGetCurrentThread(), PhysicalDeviceObject);
    if ( ((DeviceDescription->InterfaceType + 1) & 0xFFFFFFEF) == 0 )
    {
      if ( DeviceDescription->Version >= 3 )
      {
        v7 = 0LL;
        if ( DeviceDescription->Version == 3 )
          v7 = 64LL;
      }
      else
      {
        v7 = 40LL;
      }
      memmove(v19, DeviceDescription, v7);
      DeviceProperty = IoGetDeviceProperty(
                         PhysicalDeviceObject,
                         DevicePropertyLegacyBusType,
                         4u,
                         PropertyBuffer,
                         ResultLength);
      v9 = PropertyBuffer[0];
      if ( DeviceProperty < 0 )
        v9 = 1;
      PropertyBuffer[0] = v9;
    }
    DmaAdapterFromBusInterface = (struct _DMA_ADAPTER *)PiGetDmaAdapterFromBusInterface((ULONG)PhysicalDeviceObject);
    guard_dispatch_icall_no_overrides(KeGetCurrentThread(), 0LL);
  }
  return DmaAdapterFromBusInterface;
}

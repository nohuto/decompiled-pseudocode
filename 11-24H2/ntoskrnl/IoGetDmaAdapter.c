/*
 * XREFs of IoGetDmaAdapter @ 0x14071FFD0
 * Callers:
 *     DifIoGetDmaAdapterWrapper @ 0x140628D10 (DifIoGetDmaAdapterWrapper.c)
 *     VfGetDmaAdapter @ 0x140B86940 (VfGetDmaAdapter.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403F2880 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x1407202C4 (PiGetDmaAdapterFromBusInterface.c)
 *     IoGetDeviceProperty @ 0x1408BCAC0 (IoGetDeviceProperty.c)
 */

struct _DMA_ADAPTER *__stdcall IoGetDmaAdapter(
        PDEVICE_OBJECT PhysicalDeviceObject,
        struct _DEVICE_DESCRIPTION *DeviceDescription,
        PULONG NumberOfMapRegisters)
{
  __int64 v5; // r8
  __int64 v6; // r9
  struct _DMA_ADAPTER *DmaAdapterFromBusInterface; // rdi
  _DWORD *DeviceNode; // rax
  size_t v9; // r8
  NTSTATUS DeviceProperty; // eax
  int v11; // edx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v17; // rcx
  unsigned __int16 *v18; // rsi
  _WORD *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  ULONG ResultLength[4]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v23[20]; // [rsp+40h] [rbp-78h] BYREF
  int PropertyBuffer[11]; // [rsp+54h] [rbp-64h] BYREF

  memset_0(v23, 0, 0x40uLL);
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
      v17 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
      if ( v17 )
      {
        v18 = (unsigned __int16 *)(v17 + 40);
        IoAddTriageDumpDataBlock((ULONG)v17, (PVOID)0x388);
        if ( *v18 )
        {
          IoAddTriageDumpDataBlock((ULONG)v18, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v18 + 1), (PVOID)*v18);
        }
        v19 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 56;
        if ( *v19 )
        {
          IoAddTriageDumpDataBlock((ULONG)v19, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 8),
            (PVOID)*((unsigned __int16 *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 28));
        }
        v20 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
        if ( v20 && *(_WORD *)(v20 + 56) )
        {
          IoAddTriageDumpDataBlock(v20 + 56, (PVOID)2);
          v21 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v21 + 64), (PVOID)*(unsigned __int16 *)(v21 + 56));
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)PhysicalDeviceObject, 0LL, 0LL);
    }
    guard_dispatch_icall_no_overrides(KeGetCurrentThread(), PhysicalDeviceObject, v5, v6);
    if ( ((DeviceDescription->InterfaceType + 1) & 0xFFFFFFEF) == 0 )
    {
      if ( DeviceDescription->Version >= 3 )
      {
        v9 = 0LL;
        if ( DeviceDescription->Version == 3 )
          v9 = 64LL;
      }
      else
      {
        v9 = 40LL;
      }
      memmove(v23, DeviceDescription, v9);
      DeviceProperty = IoGetDeviceProperty(
                         PhysicalDeviceObject,
                         DevicePropertyLegacyBusType,
                         4u,
                         PropertyBuffer,
                         ResultLength);
      v11 = PropertyBuffer[0];
      if ( DeviceProperty < 0 )
        v11 = 1;
      PropertyBuffer[0] = v11;
    }
    DmaAdapterFromBusInterface = (struct _DMA_ADAPTER *)PiGetDmaAdapterFromBusInterface((ULONG)PhysicalDeviceObject);
    guard_dispatch_icall_no_overrides(KeGetCurrentThread(), 0LL, v12, v13);
  }
  return DmaAdapterFromBusInterface;
}

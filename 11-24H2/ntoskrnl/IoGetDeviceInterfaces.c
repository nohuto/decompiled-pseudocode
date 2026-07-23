/*
 * XREFs of IoGetDeviceInterfaces @ 0x14094F7D0
 * Callers:
 *     PnprIsMemoryDevice @ 0x14072DAD0 (PnprIsMemoryDevice.c)
 *     PnprIsProcessorDevice @ 0x14072DB88 (PnprIsProcessorDevice.c)
 *     IopOpenSystemVariableDevice @ 0x14094FBB0 (IopOpenSystemVariableDevice.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1409549CC (PfSnOpenVolumesForPrefetch.c)
 *     IoRegisterPlugPlayNotification @ 0x1409EB2A0 (IoRegisterPlugPlayNotification.c)
 *     IopFetchConfigurationInformation @ 0x140C1E838 (IopFetchConfigurationInformation.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     IopGetDeviceInterfaces @ 0x1408C5EA0 (IopGetDeviceInterfaces.c)
 */

NTSTATUS __stdcall IoGetDeviceInterfaces(
        const GUID *InterfaceClassGuid,
        PDEVICE_OBJECT PhysicalDeviceObject,
        ULONG Flags,
        PZZWSTR *SymbolicLinkList)
{
  const UNICODE_STRING *v5; // rdx
  char *DeviceNode; // rdx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v10; // rcx
  unsigned __int16 *v11; // rdi
  _WORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx

  v5 = 0LL;
  if ( PhysicalDeviceObject )
  {
    DeviceNode = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
    if ( !DeviceNode || (*((_DWORD *)DeviceNode + 99) & 0x20000) != 0 )
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
      v10 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
      if ( v10 )
      {
        v11 = (unsigned __int16 *)(v10 + 40);
        IoAddTriageDumpDataBlock((ULONG)v10, (PVOID)0x388);
        if ( *v11 )
        {
          IoAddTriageDumpDataBlock((ULONG)v11, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v11 + 1), (PVOID)*v11);
        }
        v12 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 56;
        if ( *v12 )
        {
          IoAddTriageDumpDataBlock((ULONG)v12, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 8),
            (PVOID)*((unsigned __int16 *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 28));
        }
        v13 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
        if ( v13 && *(_WORD *)(v13 + 56) )
        {
          IoAddTriageDumpDataBlock(v13 + 56, (PVOID)2);
          v14 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v14 + 64), (PVOID)*(unsigned __int16 *)(v14 + 56));
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)PhysicalDeviceObject, 0LL, 0LL);
    }
    v5 = (const UNICODE_STRING *)(DeviceNode + 40);
  }
  return IopGetDeviceInterfaces((int *)InterfaceClassGuid, v5, Flags, 0, SymbolicLinkList, 0LL);
}

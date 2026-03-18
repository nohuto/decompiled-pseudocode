/*
 * XREFs of IoGetDeviceInterfaces @ 0x140956550
 * Callers:
 *     PnprIsMemoryDevice @ 0x140723B40 (PnprIsMemoryDevice.c)
 *     PnprIsProcessorDevice @ 0x140723BF8 (PnprIsProcessorDevice.c)
 *     VhdiMountVhdFile @ 0x14081A2D0 (VhdiMountVhdFile.c)
 *     IopOpenSystemVariableDevice @ 0x140822688 (IopOpenSystemVariableDevice.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1408ECD5C (PfSnOpenVolumesForPrefetch.c)
 *     IoRegisterPlugPlayNotification @ 0x14096BD60 (IoRegisterPlugPlayNotification.c)
 *     IopFetchConfigurationInformation @ 0x140C0B624 (IopFetchConfigurationInformation.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14041F7F0 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     IopGetDeviceInterfaces @ 0x1409572B8 (IopGetDeviceInterfaces.c)
 */

NTSTATUS __stdcall IoGetDeviceInterfaces(
        const GUID *InterfaceClassGuid,
        PDEVICE_OBJECT PhysicalDeviceObject,
        ULONG Flags,
        PZZWSTR *SymbolicLinkList)
{
  char *v5; // rdx
  _DWORD *DeviceNode; // rdx
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
    v5 = (char *)(DeviceNode + 10);
  }
  return IopGetDeviceInterfaces(InterfaceClassGuid, v5, Flags, 0LL, SymbolicLinkList, 0LL);
}

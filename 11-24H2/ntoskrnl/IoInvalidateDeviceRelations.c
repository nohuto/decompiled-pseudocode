/*
 * XREFs of IoInvalidateDeviceRelations @ 0x14048DB00
 * Callers:
 *     PiProfileUpdateDeviceTreeCallback @ 0x14072B310 (PiProfileUpdateDeviceTreeCallback.c)
 *     PiSwProcessParentStartIrp @ 0x1409BFAA8 (PiSwProcessParentStartIrp.c)
 *     PiSwIrpStartCreateWorker @ 0x1409F13D4 (PiSwIrpStartCreateWorker.c)
 *     PiSwProcessRemove @ 0x1409F3978 (PiSwProcessRemove.c)
 *     IopPnPDispatch @ 0x140A55010 (IopPnPDispatch.c)
 *     PiSwCloseDevice @ 0x140A90544 (PiSwCloseDevice.c)
 *     PiSwGetChildPdo @ 0x140AC1360 (PiSwGetChildPdo.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     PnpRequestDeviceAction @ 0x140467508 (PnpRequestDeviceAction.c)
 *     IopQueueInvalidateBusRelationsRequest @ 0x14048DC2C (IopQueueInvalidateBusRelationsRequest.c)
 *     Feature_PdcClientPnpActionQueue__private_ReportDeviceUsage @ 0x14048DDF4 (Feature_PdcClientPnpActionQueue__private_ReportDeviceUsage.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __stdcall IoInvalidateDeviceRelations(PDEVICE_OBJECT DeviceObject, DEVICE_RELATION_TYPE Type)
{
  _DWORD *DeviceNode; // rax
  __int64 v4; // rcx
  unsigned int v5; // edx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v8; // rcx
  unsigned __int16 *v9; // rdi
  _WORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx

  if ( !DeviceObject )
    goto LABEL_11;
  DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock((ULONG)DeviceObject, (PVOID)DeviceObject->Size);
    DriverObject = DeviceObject->DriverObject;
    if ( DriverObject )
    {
      IoAddTriageDumpDataBlock((ULONG)DriverObject, (PVOID)(unsigned int)DriverObject->Size);
      p_DriverName = &DeviceObject->DriverObject->DriverName;
      if ( p_DriverName->Length )
      {
        IoAddTriageDumpDataBlock((ULONG)p_DriverName, (PVOID)2);
        IoAddTriageDumpDataBlock(
          (ULONG)DeviceObject->DriverObject->DriverName.Buffer,
          (PVOID)DeviceObject->DriverObject->DriverName.Length);
      }
    }
    v8 = (char *)DeviceObject->DeviceObjectExtension->DeviceNode;
    if ( v8 )
    {
      v9 = (unsigned __int16 *)(v8 + 40);
      IoAddTriageDumpDataBlock((ULONG)v8, (PVOID)0x388);
      if ( *v9 )
      {
        IoAddTriageDumpDataBlock((ULONG)v9, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v9 + 1), (PVOID)*v9);
      }
      v10 = (char *)DeviceObject->DeviceObjectExtension->DeviceNode + 56;
      if ( *v10 )
      {
        IoAddTriageDumpDataBlock((ULONG)v10, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 8),
          (PVOID)*((unsigned __int16 *)DeviceObject->DeviceObjectExtension->DeviceNode + 28));
      }
      v11 = *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 2);
      if ( v11 )
      {
        if ( *(_WORD *)(v11 + 56) )
        {
          IoAddTriageDumpDataBlock(v11 + 56, (PVOID)2);
          v12 = *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 2);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v12 + 64), (PVOID)*(unsigned __int16 *)(v12 + 56));
        }
      }
    }
LABEL_11:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)DeviceObject, 0LL, 0LL);
  }
  v4 = (unsigned int)Type;
  switch ( Type )
  {
    case BusRelations:
      goto LABEL_10;
    case EjectionRelations:
      v5 = 20;
      goto LABEL_14;
    case PowerRelations:
      v5 = 5;
      goto LABEL_14;
  }
  v4 = (unsigned int)(Type - 5);
  if ( Type == SingleBusRelations )
  {
LABEL_10:
    Feature_PdcClientPnpActionQueue__private_ReportDeviceUsage(v4);
    IopQueueInvalidateBusRelationsRequest(DeviceObject);
    return;
  }
  if ( Type == TransportRelations )
  {
    v5 = 19;
LABEL_14:
    PnpRequestDeviceAction(DeviceObject, v5, 0, 0LL, 0LL, 0LL, 0LL);
  }
}

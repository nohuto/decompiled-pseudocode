/*
 * XREFs of ACPIFilterIrpQueryCapabilities @ 0x1400B01E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     AcpiGetDriverProxyEndpoint @ 0x1400441B8 (AcpiGetDriverProxyEndpoint.c)
 */

__int64 __fastcall ACPIFilterIrpQueryCapabilities(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  __int64 DeviceExtension; // rbp
  _QWORD *Pool2; // rbx
  PIO_WORKITEM WorkItem; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v8; // rcx
  unsigned int v9; // ebx
  int (__fastcall *v11)(_DEVICE_OBJECT *, _IRP *, void *); // [rsp+40h] [rbp+18h] BYREF

  v11 = 0LL;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 48LL, 1232102209LL);
  if ( !Pool2 )
    goto LABEL_6;
  WorkItem = IoAllocateWorkItem(DeviceObject);
  if ( !WorkItem )
  {
    ExFreePoolWithTag(Pool2, 0);
LABEL_6:
    v9 = -1073741670;
    Irp->IoStatus.Status = -1073741670;
    IofCompleteRequest(Irp, 0);
    return v9;
  }
  Pool2[5] = 0LL;
  Pool2[2] = ACPIBusAndFilterIrpQueryCapabilities;
  *Pool2 = DeviceObject;
  *((_DWORD *)Pool2 + 6) = 257;
  Pool2[1] = Irp;
  Pool2[4] = WorkItem;
  _InterlockedIncrement((volatile signed __int32 *)(DeviceExtension + 728));
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  AcpiGetDriverProxyEndpoint(&v11, (__int64)ACPIIrpGenericFilterCompletionHandler);
  v8 = Irp->Tail.Overlay.CurrentStackLocation;
  v8[-1].CompletionRoutine = v11;
  v8[-1].Context = Pool2;
  v8[-1].Control = -32;
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 776), Irp);
  return 259;
}

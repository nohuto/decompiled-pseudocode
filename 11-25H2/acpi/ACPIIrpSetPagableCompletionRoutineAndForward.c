/*
 * XREFs of ACPIIrpSetPagableCompletionRoutineAndForward @ 0x1400B108C
 * Callers:
 *     ACPIFilterIrpEject @ 0x14009E690 (ACPIFilterIrpEject.c)
 *     ACPIFilterIrpSetLock @ 0x14009E8E0 (ACPIFilterIrpSetLock.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1400AC190 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIFilterIrpQueryInterface @ 0x1400B0590 (ACPIFilterIrpQueryInterface.c)
 *     ACPIFilterIrpQueryPnpDeviceState @ 0x1400B1060 (ACPIFilterIrpQueryPnpDeviceState.c)
 *     ACPIFilterIrpQueryId @ 0x1400BCBE0 (ACPIFilterIrpQueryId.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     AcpiGetDriverProxyEndpoint @ 0x1400441B8 (AcpiGetDriverProxyEndpoint.c)
 */

__int64 __fastcall ACPIIrpSetPagableCompletionRoutineAndForward(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7)
{
  __int64 DeviceExtension; // rbp
  _QWORD *Pool2; // rbx
  PIO_WORKITEM WorkItem; // rcx
  char v13; // al
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v15; // rcx
  int (__fastcall *v17)(_DEVICE_OBJECT *, _IRP *, void *); // [rsp+58h] [rbp+20h] BYREF

  v17 = 0LL;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 48LL, 1232102209LL);
  if ( Pool2 )
  {
    WorkItem = IoAllocateWorkItem(DeviceObject);
    if ( WorkItem )
    {
      v13 = a5;
      Pool2[5] = 0LL;
      *((_BYTE *)Pool2 + 24) = v13;
      *((_BYTE *)Pool2 + 25) = a6;
      *((_BYTE *)Pool2 + 26) = a7;
      Pool2[2] = a3;
      *Pool2 = DeviceObject;
      *((_BYTE *)Pool2 + 27) = 0;
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
      AcpiGetDriverProxyEndpoint(&v17, (__int64)ACPIIrpGenericFilterCompletionHandler);
      v15 = Irp->Tail.Overlay.CurrentStackLocation;
      v15[-1].CompletionRoutine = v17;
      v15[-1].Context = Pool2;
      v15[-1].Control = -32;
      Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 776), Irp);
      return 259LL;
    }
    ExFreePoolWithTag(Pool2, 0);
  }
  Irp->IoStatus.Status = -1073741670;
  IofCompleteRequest(Irp, 0);
  return 3221225626LL;
}

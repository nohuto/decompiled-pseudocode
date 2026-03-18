/*
 * XREFs of ACPIRootIrpStartDevice @ 0x1400C7AE0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1400307B0 (WPP_RECORDER_SF_qsLqss.c)
 *     WPP_RECORDER_SF_qqss @ 0x140033134 (WPP_RECORDER_SF_qqss.c)
 *     ACPIRegisterForDeviceNotifications @ 0x14004FA40 (ACPIRegisterForDeviceNotifications.c)
 *     ACPIInitShutdownNotification @ 0x1400A6704 (ACPIInitShutdownNotification.c)
 *     ACPIInitStartACPI @ 0x1400C715C (ACPIInitStartACPI.c)
 *     RtlDuplicateCmResourceList @ 0x1400C7D74 (RtlDuplicateCmResourceList.c)
 */

__int64 __fastcall ACPIRootIrpStartDevice(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  __int64 DeviceExtension; // rax
  const char *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rbx
  const char *v8; // r8
  const char *v9; // rcx
  __int64 v10; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v12; // rax
  NTSTATUS Status; // edi
  _IO_STACK_LOCATION *v14; // rdx
  unsigned int MinorFunction; // r15d
  __int64 v16; // rax
  __int64 v17; // rax
  const char *v18; // rcx
  __int64 v19; // rax
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  DeviceExtension = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  v5 = byte_1400753E8;
  LOBYTE(v6) = 0;
  v7 = DeviceExtension;
  v8 = byte_1400753E8;
  v9 = byte_1400753E8;
  if ( DeviceExtension )
  {
    v6 = DeviceExtension;
    v10 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v8 = *(const char **)(v6 + 608);
      if ( (v10 & 0x400000000000LL) != 0 )
        v9 = *(const char **)(v6 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x19u,
      (__int64)&WPP_407264dfc63035306de6021495d93ce2_Traceguids,
      (char)Irp,
      v6,
      v8,
      v9);
  _InterlockedOr64((volatile signed __int64 *)(v7 + 8), 0x200uLL);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v12 = Irp->Tail.Overlay.CurrentStackLocation;
  v12[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIRootIrpCompleteRoutine;
  v12[-1].Context = &Event;
  v12[-1].Control = -32;
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(v7 + 776), Irp);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = Irp->IoStatus.Status;
  }
  v14 = Irp->Tail.Overlay.CurrentStackLocation;
  MinorFunction = v14->MinorFunction;
  if ( Status >= 0 )
  {
    if ( v14->Parameters.WMI.ProviderId )
      v16 = RtlDuplicateCmResourceList();
    else
      v16 = 0LL;
    *(_QWORD *)(v7 + 680) = 0LL;
    *(_QWORD *)(v7 + 672) = v16;
    Status = ACPIInitStartACPI(BugCheckParameter3);
    if ( Status >= 0 )
      *(_DWORD *)(v7 + 368) = 2;
    ACPIRegisterForDeviceNotifications(BugCheckParameter3, (__int64)ACPIRootEvent, BugCheckParameter3);
    ACPIInitShutdownNotification();
  }
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  v17 = *(_QWORD *)(v7 + 8);
  v18 = byte_1400753E8;
  if ( (v17 & 0x200000000000LL) != 0 )
  {
    v5 = *(const char **)(v7 + 608);
    if ( (v17 & 0x400000000000LL) != 0 )
      v18 = *(const char **)(v7 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = MinorFunction;
    if ( MinorFunction >= 0x1A )
      v19 = 26LL;
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x1Au,
      (__int64)&WPP_407264dfc63035306de6021495d93ce2_Traceguids,
      (char)Irp,
      ACPIDispatchPnpTableNames[v19],
      Status,
      v7,
      v5,
      v18);
  }
  return (unsigned int)Status;
}

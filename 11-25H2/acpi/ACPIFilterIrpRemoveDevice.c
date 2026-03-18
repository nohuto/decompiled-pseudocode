/*
 * XREFs of ACPIFilterIrpRemoveDevice @ 0x14003C610
 * Callers:
 *     ACPIDispatchIrpDepFilterRemoveDevice @ 0x1400609B0 (ACPIDispatchIrpDepFilterRemoveDevice.c)
 * Callees:
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1400174E8 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIInitReferenceDeviceExtension @ 0x140017C58 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1400307B0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInitDeleteChildDeviceList @ 0x14003C9AC (ACPIInitDeleteChildDeviceList.c)
 *     ACPIWakeDisconnectWakeInterrupts @ 0x14003DE58 (ACPIWakeDisconnectWakeInterrupts.c)
 *     ACPIInitStopDevice @ 0x1400B439C (ACPIInitStopDevice.c)
 *     IsPciBusExtension @ 0x1400B468C (IsPciBusExtension.c)
 *     EnableDisableRegions @ 0x1400B46CC (EnableDisableRegions.c)
 *     AcpiDeletePciBusInterface @ 0x1400BD010 (AcpiDeletePciBusInterface.c)
 */

__int64 __fastcall ACPIFilterIrpRemoveDevice(ULONG_PTR a1, IRP *a2)
{
  $0DFD2FDF994C6E300166ACC59832B319 *v2; // rdi
  unsigned int MinorFunction; // r13d
  __int64 DeviceExtension; // rbx
  __int64 v6; // rdx
  char v7; // r15
  char v8; // bp
  __int64 v9; // r14
  bool v10; // r12
  __int64 v11; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v13; // rax
  NTSTATUS Status; // edi
  __int64 v15; // rax
  const char *v16; // rcx
  const char *v17; // rdx
  __int64 v18; // rax
  void *v19; // rcx
  unsigned int v20; // ebx
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF

  v2 = &a2->Tail.Overlay.64;
  memset(&Event, 0, sizeof(Event));
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  ACPIInitDeleteChildDeviceList(DeviceExtension, v6);
  v7 = 0;
  if ( *(_QWORD *)(DeviceExtension + 368) )
  {
    v8 = 0;
    if ( *(_DWORD *)(DeviceExtension + 368) == 5 )
    {
LABEL_10:
      v8 = 1;
      goto LABEL_11;
    }
  }
  else
  {
    v7 = 1;
    v2 = &a2->Tail.Overlay.64;
    v8 = 0;
  }
  if ( *(char *)(DeviceExtension + 8) < 0 )
    goto LABEL_10;
  if ( v7 )
    goto LABEL_11;
  v9 = *(_QWORD *)(DeviceExtension + 1120) & 0x8000LL;
  v10 = (*(_QWORD *)(DeviceExtension + 1120) & 0x8000) != 0;
  if ( !(unsigned __int8)IsPciBusExtension(DeviceExtension) )
  {
    if ( !v9 )
      goto LABEL_11;
    v2 = &a2->Tail.Overlay.64;
  }
  LOBYTE(v11) = v10;
  EnableDisableRegions(*(_QWORD *)(DeviceExtension + 760), 0LL, v11);
LABEL_11:
  AcpiDeletePciBusInterface(DeviceExtension);
  ACPIInitReferenceDeviceExtension(DeviceExtension);
  if ( *(_DWORD *)(DeviceExtension + 368) != 5 )
    _InterlockedOr64((volatile signed __int64 *)(DeviceExtension + 8), 0x800uLL);
  *(_DWORD *)(DeviceExtension + 368) = 0;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v13 = v2->CurrentStackLocation;
  v13[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIRootIrpCompleteRoutine;
  v13[-1].Context = &Event;
  v13[-1].Control = -32;
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 776), a2);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = a2->IoStatus.Status;
  }
  v15 = *(_QWORD *)(DeviceExtension + 8);
  v16 = byte_140075488;
  v17 = byte_140075488;
  if ( (v15 & 0x200000000000LL) != 0 )
  {
    v16 = *(const char **)(DeviceExtension + 608);
    if ( (v15 & 0x400000000000LL) != 0 )
      v17 = *(const char **)(DeviceExtension + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = MinorFunction;
    if ( MinorFunction >= 0x1A )
      v18 = 26LL;
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xCu,
      0x17u,
      (__int64)&WPP_9d2f517172373c998ff4f5e88626c58e_Traceguids,
      (char)a2,
      ACPIDispatchPnpTableNames[v18],
      Status,
      DeviceExtension,
      v16,
      v17);
  }
  if ( Status >= 0 )
  {
    if ( !v8 && !v7 )
    {
      LOBYTE(v17) = 1;
      ACPIInitStopDevice(DeviceExtension, v17);
    }
    ACPIWakeDisconnectWakeInterrupts(DeviceExtension, v17);
    v19 = *(void **)(DeviceExtension + 112);
    if ( v19 )
    {
      ExFreePoolWithTag(v19, 0);
      *(_QWORD *)(DeviceExtension + 112) = 0LL;
    }
    ACPIInitDereferenceDeviceExtensionUnlocked(DeviceExtension);
  }
  v20 = a2->IoStatus.Status;
  IofCompleteRequest(a2, 0);
  return v20;
}

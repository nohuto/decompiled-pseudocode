/*
 * XREFs of IopSynchronousCall @ 0x1408BBC08
 * Callers:
 *     PnpGetRelatedTargetDevice @ 0x1403750B4 (PnpGetRelatedTargetDevice.c)
 *     PnpSendIrp @ 0x14037529C (PnpSendIrp.c)
 *     PnpIrpDeviceEnumerated @ 0x1404ACFD8 (PnpIrpDeviceEnumerated.c)
 *     IopQueryDockRemovalInterface @ 0x140733C7C (IopQueryDockRemovalInterface.c)
 *     IopQueryReconfiguration @ 0x140733D7C (IopQueryReconfiguration.c)
 *     PiProcessQueryDeviceState @ 0x1408BB868 (PiProcessQueryDeviceState.c)
 *     PpIrpQueryCapabilities @ 0x1408BBB7C (PpIrpQueryCapabilities.c)
 *     IopQueryDeviceResources @ 0x14098DEA4 (IopQueryDeviceResources.c)
 *     PpIrpQueryResourceRequirements @ 0x14098E6E8 (PpIrpQueryResourceRequirements.c)
 *     IopQueryLegacyBusInformation @ 0x1409C53AC (IopQueryLegacyBusInformation.c)
 *     PnpQueryDeviceText @ 0x1409C75AC (PnpQueryDeviceText.c)
 *     IopRemoveDevice @ 0x140A10084 (IopRemoveDevice.c)
 *     PnpIrpQueryID @ 0x140A34274 (PnpIrpQueryID.c)
 *     IopQueryDeviceState @ 0x140A61FEC (IopQueryDeviceState.c)
 *     IopQueryResourceHandlerInterface @ 0x140A6C444 (IopQueryResourceHandlerInterface.c)
 *     PpIrpQueryBusInformation @ 0x140A73980 (PpIrpQueryBusInformation.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x140253C60 (IopQueueThreadIrp.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1402D6794 (IoGetAttachedDeviceReferenceWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     IoAllocateIrp @ 0x1403724A0 (IoAllocateIrp.c)
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x140464EEC (IoGetLowerDeviceObjectWithTag.c)
 *     IovUtilWatermarkIrp @ 0x140482F44 (IovUtilWatermarkIrp.c)
 */

__int64 __fastcall IopSynchronousCall(_QWORD *a1, __int64 a2, NTSTATUS a3, ULONG_PTR a4, _QWORD *a5)
{
  struct _DEVICE_OBJECT *AttachedDeviceReferenceWithTag; // rax
  struct _DEVICE_OBJECT *v9; // rbx
  PIRP Irp; // rax
  IRP *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  unsigned int v18; // edi
  struct _DEVICE_OBJECT *LowerDeviceObjectWithTag; // rdi
  __int128 v21; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  v21 = 0LL;
  AttachedDeviceReferenceWithTag = (struct _DEVICE_OBJECT *)IoGetAttachedDeviceReferenceWithTag(a1, 0x69706E50u);
  v9 = AttachedDeviceReferenceWithTag;
  if ( (AttachedDeviceReferenceWithTag->Flags & 0x80u) != 0 )
  {
    LowerDeviceObjectWithTag = (struct _DEVICE_OBJECT *)IoGetLowerDeviceObjectWithTag(
                                                          (__int64)AttachedDeviceReferenceWithTag,
                                                          0x69706E50u);
    if ( !LowerDeviceObjectWithTag )
    {
      v18 = -1073741436;
      goto LABEL_7;
    }
    ObfDereferenceObjectWithTag(v9, 0x69706E50u);
    v9 = LowerDeviceObjectWithTag;
  }
  Irp = IoAllocateIrp(v9->StackSize, 0);
  v11 = Irp;
  if ( Irp )
  {
    IovUtilWatermarkIrp((__int64)Irp, 1LL);
    LODWORD(v21) = a3;
    v11->IoStatus.Status = a3;
    *((_QWORD *)&v21 + 1) = a4;
    v11->IoStatus.Information = a4;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v11->UserIosb = (PIO_STATUS_BLOCK)&v21;
    v11->UserEvent = &Event;
    v11->Tail.Overlay.Thread = KeGetCurrentThread();
    IopQueueThreadIrp((__int64)v11, v12, v13);
    CurrentStackLocation = v11->Tail.Overlay.CurrentStackLocation;
    v15 = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)a2;
    v16 = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = v15;
    v17 = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = v16;
    *(_QWORD *)&v16 = *(_QWORD *)(a2 + 64);
    *(_OWORD *)&CurrentStackLocation[-1].FileObject = v17;
    CurrentStackLocation[-1].Context = (PVOID)v16;
    v18 = IofCallDriver(v9, v11);
    if ( v18 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v18 = v21;
    }
    if ( a5 )
      *a5 = *((_QWORD *)&v21 + 1);
  }
  else
  {
    v18 = -1073741670;
  }
LABEL_7:
  ObfDereferenceObjectWithTag(v9, 0x69706E50u);
  return v18;
}

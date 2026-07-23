/*
 * XREFs of IopSynchronousCall @ 0x1408B9564
 * Callers:
 *     PnpGetRelatedTargetDevice @ 0x14025D974 (PnpGetRelatedTargetDevice.c)
 *     PnpSendIrp @ 0x14025DB5C (PnpSendIrp.c)
 *     PnpIrpDeviceEnumerated @ 0x1404A76BC (PnpIrpDeviceEnumerated.c)
 *     IopQueryDockRemovalInterface @ 0x140731BB0 (IopQueryDockRemovalInterface.c)
 *     IopQueryReconfiguration @ 0x140731CB0 (IopQueryReconfiguration.c)
 *     PiProcessQueryDeviceState @ 0x1408B91C4 (PiProcessQueryDeviceState.c)
 *     PpIrpQueryCapabilities @ 0x1408B94D8 (PpIrpQueryCapabilities.c)
 *     IopQueryDeviceResources @ 0x140978EDC (IopQueryDeviceResources.c)
 *     PpIrpQueryResourceRequirements @ 0x140979720 (PpIrpQueryResourceRequirements.c)
 *     IopQueryLegacyBusInformation @ 0x140981D7C (IopQueryLegacyBusInformation.c)
 *     PnpQueryDeviceText @ 0x1409B91CC (PnpQueryDeviceText.c)
 *     IopRemoveDevice @ 0x1409BE494 (IopRemoveDevice.c)
 *     PnpIrpQueryID @ 0x140A28284 (PnpIrpQueryID.c)
 *     IopQueryDeviceState @ 0x140A5A8EC (IopQueryDeviceState.c)
 *     IopQueryResourceHandlerInterface @ 0x140A659A4 (IopQueryResourceHandlerInterface.c)
 *     PpIrpQueryBusInformation @ 0x140A6CFA0 (PpIrpQueryBusInformation.c)
 * Callees:
 *     IoAllocateIrp @ 0x14025AD60 (IoAllocateIrp.c)
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x140284270 (IopQueueThreadIrp.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140357A14 (IoGetAttachedDeviceReferenceWithTag.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x14045B61C (IoGetLowerDeviceObjectWithTag.c)
 *     IovUtilWatermarkIrp @ 0x14047E134 (IovUtilWatermarkIrp.c)
 */

__int64 __fastcall IopSynchronousCall(_QWORD *a1, __int64 a2, NTSTATUS a3, ULONG_PTR a4, _QWORD *a5)
{
  struct _DEVICE_OBJECT *AttachedDeviceReferenceWithTag; // rax
  struct _DEVICE_OBJECT *v9; // rbx
  PIRP Irp; // rax
  IRP *v11; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  unsigned int v16; // edi
  struct _DEVICE_OBJECT *LowerDeviceObjectWithTag; // rdi
  __int128 v19; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  v19 = 0LL;
  AttachedDeviceReferenceWithTag = (struct _DEVICE_OBJECT *)IoGetAttachedDeviceReferenceWithTag(a1, 0x69706E50u);
  v9 = AttachedDeviceReferenceWithTag;
  if ( (AttachedDeviceReferenceWithTag->Flags & 0x80u) != 0 )
  {
    LowerDeviceObjectWithTag = (struct _DEVICE_OBJECT *)IoGetLowerDeviceObjectWithTag(
                                                          (__int64)AttachedDeviceReferenceWithTag,
                                                          0x69706E50u);
    if ( !LowerDeviceObjectWithTag )
    {
      v16 = -1073741436;
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
    LODWORD(v19) = a3;
    v11->IoStatus.Status = a3;
    *((_QWORD *)&v19 + 1) = a4;
    v11->IoStatus.Information = a4;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v11->UserIosb = (PIO_STATUS_BLOCK)&v19;
    v11->UserEvent = &Event;
    v11->Tail.Overlay.Thread = KeGetCurrentThread();
    IopQueueThreadIrp((__int64)v11);
    CurrentStackLocation = v11->Tail.Overlay.CurrentStackLocation;
    v13 = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)a2;
    v14 = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = v13;
    v15 = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = v14;
    *(_QWORD *)&v14 = *(_QWORD *)(a2 + 64);
    *(_OWORD *)&CurrentStackLocation[-1].FileObject = v15;
    CurrentStackLocation[-1].Context = (PVOID)v14;
    v16 = IofCallDriver(v9, v11);
    if ( v16 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v16 = v19;
    }
    if ( a5 )
      *a5 = *((_QWORD *)&v19 + 1);
  }
  else
  {
    v16 = -1073741670;
  }
LABEL_7:
  ObfDereferenceObjectWithTag(v9, 0x69706E50u);
  return v16;
}

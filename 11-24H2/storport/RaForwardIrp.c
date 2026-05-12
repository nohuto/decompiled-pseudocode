/*
 * XREFs of RaForwardIrp @ 0x1400177F0
 * Callers:
 *     RaidAdapterPnpIrp @ 0x140015724 (RaidAdapterPnpIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x140016D40 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterDeviceControlIrp @ 0x14002B3B0 (RaidAdapterDeviceControlIrp.c)
 *     NvmeAdapterQueryIdIrp @ 0x14005D484 (NvmeAdapterQueryIdIrp.c)
 *     RaidAdapterQueryInterfaceIrp @ 0x14005D518 (RaidAdapterQueryInterfaceIrp.c)
 *     RaForwardPowerIrp @ 0x140089E84 (RaForwardPowerIrp.c)
 *     NvmeAdapterDeviceControlIrpFromNamespace @ 0x1400CE6CC (NvmeAdapterDeviceControlIrpFromNamespace.c)
 *     NvmeAdapterPnpIrp @ 0x1400D4884 (NvmeAdapterPnpIrp.c)
 *     NvmeAdapterQueryDeviceRelationsIrp @ 0x1400D59E8 (NvmeAdapterQueryDeviceRelationsIrp.c)
 *     NvmeAdapterQueryInterfaceIrp @ 0x1400D5F3C (NvmeAdapterQueryInterfaceIrp.c)
 *     RaidAdapterCancelRemoveDeviceIrp @ 0x140181370 (RaidAdapterCancelRemoveDeviceIrp.c)
 *     RaidAdapterQueryRemoveDeviceIrp @ 0x140182B38 (RaidAdapterQueryRemoveDeviceIrp.c)
 *     RaidAdapterQueryStopDeviceIrp @ 0x140182BD8 (RaidAdapterQueryStopDeviceIrp.c)
 *     RaidAdapterStopDeviceIrp @ 0x140183020 (RaidAdapterStopDeviceIrp.c)
 *     NvmeAdapterCancelRemoveDeviceIrp @ 0x140193C38 (NvmeAdapterCancelRemoveDeviceIrp.c)
 *     NvmeAdapterDeviceControlIrp @ 0x140195438 (NvmeAdapterDeviceControlIrp.c)
 *     NvmeAdapterQueryPnpDeviceStateIrp @ 0x14019AEE4 (NvmeAdapterQueryPnpDeviceStateIrp.c)
 *     NvmeAdapterQueryRemoveDeviceIrp @ 0x14019AF8C (NvmeAdapterQueryRemoveDeviceIrp.c)
 *     NvmeAdapterQueryStopDeviceIrp @ 0x14019B02C (NvmeAdapterQueryStopDeviceIrp.c)
 *     NvmeAdapterStopDeviceIrp @ 0x14019C384 (NvmeAdapterStopDeviceIrp.c)
 *     NvmeAdapterSurpriseRemovalIrp @ 0x14019DCB8 (NvmeAdapterSurpriseRemovalIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1401BB518 (RaidAdapterSurpriseRemovalIrp.c)
 *     RaidAdapterQueryPnpDeviceStateIrp @ 0x1401BC204 (RaidAdapterQueryPnpDeviceStateIrp.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RaForwardIrp(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  return IofCallDriver(a1, a2);
}

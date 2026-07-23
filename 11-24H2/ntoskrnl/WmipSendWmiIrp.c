/*
 * XREFs of WmipSendWmiIrp @ 0x1409B2964
 * Callers:
 *     WmipSendEnableDisableRequest @ 0x1409AF934 (WmipSendEnableDisableRequest.c)
 *     WmipRegisterOrUpdateDS @ 0x1409AFF54 (WmipRegisterOrUpdateDS.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1409B0E04 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipEnableCollectionForNewGuid @ 0x1409B20EC (WmipEnableCollectionForNewGuid.c)
 *     WmipQuerySetExecuteSI @ 0x1409B2A54 (WmipQuerySetExecuteSI.c)
 *     WmipQueryAllData @ 0x1409B2D4C (WmipQueryAllData.c)
 *     WmipProcessLegacyEtwCallback @ 0x140A8AC08 (WmipProcessLegacyEtwCallback.c)
 *     WmipDeliverWnodeToDS @ 0x140A92B18 (WmipDeliverWnodeToDS.c)
 * Callees:
 *     IoAllocateIrp @ 0x14025AD60 (IoAllocateIrp.c)
 *     IoFreeIrp @ 0x1402C30B0 (IoFreeIrp.c)
 *     WmipForwardWmiIrp @ 0x1409B3294 (WmipForwardWmiIrp.c)
 */

__int64 __fastcall WmipSendWmiIrp(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, _OWORD *a6)
{
  PIRP Irp; // rax
  PIRP v8; // rbx
  unsigned int v9; // edi

  while ( 1 )
  {
    Irp = IoAllocateIrp(WmipServiceDeviceObject->StackSize + 1, 0);
    v8 = Irp;
    if ( !Irp )
      break;
    --Irp->Tail.Overlay.CurrentStackLocation;
    --Irp->CurrentLocation;
    Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = WmipServiceDeviceObject;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    Irp->AssociatedIrp.MasterIrp = (struct _IRP *)a5;
    v9 = WmipForwardWmiIrp(Irp, a4, a5);
    *a6 = *(_OWORD *)&v8->IoStatus.Status;
    IoFreeIrp(v8);
    if ( v9 != -1073741160 )
      return v9;
  }
  return 3221225626LL;
}

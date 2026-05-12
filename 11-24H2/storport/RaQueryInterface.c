/*
 * XREFs of RaQueryInterface @ 0x14003C01C
 * Callers:
 *     RaidQueryPciMsixTableConfigurationInterface @ 0x14008DD04 (RaidQueryPciMsixTableConfigurationInterface.c)
 *     GetNvmeIceInterface @ 0x1401839B0 (GetNvmeIceInterface.c)
 *     RaInitializeBus @ 0x1401BC2BC (RaInitializeBus.c)
 * Callees:
 *     RaSendIrpSynchronous @ 0x140015550 (RaSendIrpSynchronous.c)
 */

__int64 __fastcall RaQueryInterface(
        PDEVICE_OBJECT DeviceObject,
        unsigned __int64 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        __int64 a5)
{
  PIRP Irp; // rax
  IRP *v10; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  NTSTATUS Status; // edi

  Irp = IoAllocateIrp(DeviceObject->StackSize, 0);
  v10 = Irp;
  if ( !Irp )
    return 3221225626LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->IoStatus.Status = -1073741637;
  CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
  *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2075;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = a2;
  CurrentStackLocation[-1].Parameters.QueryInterface.Size = a3;
  CurrentStackLocation[-1].Parameters.QueryInterface.Version = a4;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = a5;
  Status = RaSendIrpSynchronous(DeviceObject, Irp);
  if ( Status >= 0 )
    Status = v10->IoStatus.Status;
  IoFreeIrp(v10);
  return (unsigned int)Status;
}

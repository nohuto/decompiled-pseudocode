/*
 * XREFs of UsbhPdoPnp_QueryDeviceRelations @ 0x1C0022670
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryDeviceRelations(PVOID Object, PIRP Irp)
{
  unsigned int Status; // ebx
  unsigned __int64 Pool2; // rsi

  PdoExt((__int64)Object);
  Status = Irp->IoStatus.Status;
  if ( Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length == 4 )
  {
    Status = 0;
    Pool2 = ExAllocatePool2(256LL, 16LL, 1112885333LL);
    if ( Pool2 )
    {
      ObfReferenceObject(Object);
      *(_DWORD *)Pool2 = 1;
      *(_QWORD *)(Pool2 + 8) = Object;
    }
    else
    {
      Status = -1073741670;
    }
    Irp->IoStatus.Information = Pool2;
  }
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return Status;
}

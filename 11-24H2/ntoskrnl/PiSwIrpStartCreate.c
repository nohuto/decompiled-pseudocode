/*
 * XREFs of PiSwIrpStartCreate @ 0x1409F0D04
 * Callers:
 *     PiSwDispatch @ 0x14072E770 (PiSwDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     McTemplateK0d_EtwWriteTransfer @ 0x14047CDE4 (McTemplateK0d_EtwWriteTransfer.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x140592BF4 (McTemplateK0_EtwWriteTransfer.c)
 *     PiSwIrpStartCreateWorker @ 0x1409F13D4 (PiSwIrpStartCreateWorker.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwIrpStartCreate(PIRP Irp, __int64 a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  PIRP v5; // rdi
  struct _IRP *MasterIrp; // rcx
  int Worker; // ebx
  __int64 v8; // rcx
  PVOID P; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  PIRP v12; // [rsp+68h] [rbp+20h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v11 = 0LL;
  P = 0LL;
  v5 = Irp;
  v12 = Irp;
  if ( (byte_140EEFF64 & 0x40) != 0 )
    McTemplateK0_EtwWriteTransfer(
      MS_KernelPnP_Provider_Context,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_IrpCreate_Start);
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( MasterIrp )
  {
    if ( CurrentStackLocation->Parameters.Read.Length < 0xC8 )
    {
      Worker = -1073741789;
    }
    else
    {
      Worker = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v11);
      if ( Worker >= 0 )
      {
        NdrMesTypeDecode3(v11, "TP 3\a", &off_140B3D1E0, &off_140E06FF0, 0, &P);
        Worker = PiSwIrpStartCreateWorker(P, Irp);
        v5 = 0LL;
      }
    }
  }
  else
  {
    Worker = -1073741811;
  }
  if ( v5 )
  {
    v5->IoStatus.Status = Worker;
    v5->IoStatus.Information = 0LL;
    IofCompleteRequest(v5, 0);
  }
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  v8 = v11;
  if ( v11 )
    MesHandleFree();
  if ( (byte_140EEFF64 & 0x40) != 0 )
    McTemplateK0d_EtwWriteTransfer(v8, (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_IrpCreate_Stop, a3, Worker);
  return (unsigned int)Worker;
}

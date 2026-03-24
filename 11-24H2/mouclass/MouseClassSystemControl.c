/*
 * XREFs of MouseClassSystemControl @ 0x1C0010760
 * Callers:
 *     <none>
 * Callees:
 *     MouseClassPassThrough @ 0x1C000E660 (MouseClassPassThrough.c)
 */

__int64 __fastcall MouseClassSystemControl(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  char *DeviceExtension; // r14
  int v5; // eax
  unsigned int v6; // edi
  _SYSCTL_IRP_DISPOSITION IrpDisposition; // [rsp+50h] [rbp+8h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  IrpDisposition = IrpProcessed;
  v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 1, Irp, File, 1u, 0x20u);
  v6 = v5;
  if ( v5 < 0 )
  {
    Irp->IoStatus.Status = v5;
    Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(Irp, 0);
  }
  else
  {
    v6 = WmiSystemControl((PWMILIB_CONTEXT)(DeviceExtension + 184), DeviceObject, Irp, &IrpDisposition);
    if ( IrpDisposition == IrpNotCompleted )
    {
      IofCompleteRequest(Irp, 0);
    }
    else if ( IrpDisposition )
    {
      v6 = MouseClassPassThrough((__int64)DeviceObject, Irp);
    }
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 1, Irp, 0x20u);
  }
  return v6;
}

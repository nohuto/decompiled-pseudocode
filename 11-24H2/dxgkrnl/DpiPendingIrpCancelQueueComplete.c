/*
 * XREFs of DpiPendingIrpCancelQueueComplete @ 0x14007DB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DpiPendingIrpCancelQueueComplete(PIO_CSQ Csq, PIRP Irp)
{
  Irp->IoStatus.Information = 0LL;
  Irp->IoStatus.Status = -1073741536;
  IofCompleteRequest(Irp, 0);
}

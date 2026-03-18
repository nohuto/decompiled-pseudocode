/*
 * XREFs of UsbhCompleteCanceledPdoIdleIrp @ 0x14001EF70
 * Callers:
 *     <none>
 * Callees:
 *     UsbhIdleIrp_Event @ 0x14001EFA4 (UsbhIdleIrp_Event.c)
 */

void __fastcall UsbhCompleteCanceledPdoIdleIrp(PIO_CSQ Csq, PIRP Irp)
{
  UsbhIdleIrp_Event(Csq[-5].CsqReleaseLock, Csq[-10].CsqRemoveIrp, Irp, 6LL, 0);
}

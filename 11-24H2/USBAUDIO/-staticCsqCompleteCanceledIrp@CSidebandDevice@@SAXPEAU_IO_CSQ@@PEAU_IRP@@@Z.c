/*
 * XREFs of ?staticCsqCompleteCanceledIrp@CSidebandDevice@@SAXPEAU_IO_CSQ@@PEAU_IRP@@@Z @ 0x1400141F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CsqCompleteCanceledIrp@CSidebandDevice@@AEAAXPEAU_IO_CSQ@@PEAU_IRP@@@Z @ 0x14000F5A4 (-CsqCompleteCanceledIrp@CSidebandDevice@@AEAAXPEAU_IO_CSQ@@PEAU_IRP@@@Z.c)
 */

void __fastcall CSidebandDevice::staticCsqCompleteCanceledIrp(CSidebandDevice *Csq, struct _IO_CSQ *Irp)
{
  CSidebandDevice::CsqCompleteCanceledIrp(Csq, Irp, (struct _IRP *)Irp);
}

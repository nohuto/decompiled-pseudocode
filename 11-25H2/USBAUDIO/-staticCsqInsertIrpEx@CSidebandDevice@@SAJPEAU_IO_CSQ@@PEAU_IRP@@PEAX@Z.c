/*
 * XREFs of ?staticCsqInsertIrpEx@CSidebandDevice@@SAJPEAU_IO_CSQ@@PEAU_IRP@@PEAX@Z @ 0x14000B9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?CsqInsertIrpEx@CSidebandDevice@@AEAAJPEAU_IO_CSQ@@PEAU_IRP@@PEAX@Z @ 0x14000BA00 (-CsqInsertIrpEx@CSidebandDevice@@AEAAJPEAU_IO_CSQ@@PEAU_IRP@@PEAX@Z.c)
 */

__int64 __fastcall CSidebandDevice::staticCsqInsertIrpEx(struct _IO_CSQ *Csq, struct _IO_CSQ *Irp, PVOID InsertContext)
{
  return CSidebandDevice::CsqInsertIrpEx(
           (CSidebandDevice *)Csq[-1].ReservePointer,
           Irp,
           (struct _IRP *)Irp,
           InsertContext);
}

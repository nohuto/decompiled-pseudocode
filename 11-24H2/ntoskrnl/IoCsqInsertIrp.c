/*
 * XREFs of IoCsqInsertIrp @ 0x14043D180
 * Callers:
 *     <none>
 * Callees:
 *     IoCsqInsertIrpEx @ 0x14043D1A0 (IoCsqInsertIrpEx.c)
 */

void __stdcall IoCsqInsertIrp(PIO_CSQ Csq, PIRP Irp, PIO_CSQ_IRP_CONTEXT Context)
{
  IoCsqInsertIrpEx(Csq, Irp, Context, 0LL);
}

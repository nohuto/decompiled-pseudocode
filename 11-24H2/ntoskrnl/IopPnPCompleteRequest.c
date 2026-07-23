/*
 * XREFs of IopPnPCompleteRequest @ 0x1403CB8F4
 * Callers:
 *     IopPnPDispatch @ 0x140A55010 (IopPnPDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 */

void __fastcall IopPnPCompleteRequest(IRP *a1, NTSTATUS a2, ULONG_PTR a3)
{
  a1->IoStatus.Status = a2;
  a1->IoStatus.Information = a3;
  IofCompleteRequest(a1, 0);
}

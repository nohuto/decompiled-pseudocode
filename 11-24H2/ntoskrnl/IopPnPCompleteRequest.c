/*
 * XREFs of IopPnPCompleteRequest @ 0x1403DC8B4
 * Callers:
 *     IopPnPDispatch @ 0x140A5D2E0 (IopPnPDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x1403DBAD0 (IofCompleteRequest.c)
 */

void __fastcall IopPnPCompleteRequest(IRP *a1, NTSTATUS a2, ULONG_PTR a3)
{
  a1->IoStatus.Status = a2;
  a1->IoStatus.Information = a3;
  IofCompleteRequest(a1, 0);
}

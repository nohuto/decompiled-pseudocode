/*
 * XREFs of WmipOpenCloseCleanup @ 0x140A8AFB0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 */

__int64 __fastcall WmipOpenCloseCleanup(__int64 a1, IRP *a2)
{
  a2->IoStatus.Status = 0;
  a2->IoStatus.Information = 0LL;
  IofCompleteRequest(a2, 0);
  return 0LL;
}

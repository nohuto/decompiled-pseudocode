/*
 * XREFs of FsRtlpNotifyOplockBreakComplete @ 0x14070B5C0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1403DBAD0 (IofCompleteRequest.c)
 */

void __fastcall FsRtlpNotifyOplockBreakComplete(__int64 a1, IRP *a2)
{
  IofCompleteRequest(a2, 1);
}

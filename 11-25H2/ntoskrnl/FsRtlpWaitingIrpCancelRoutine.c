/*
 * XREFs of FsRtlpWaitingIrpCancelRoutine @ 0x14057E040
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpCancelWaitingIrp @ 0x140429024 (FsRtlpCancelWaitingIrp.c)
 */

void __fastcall FsRtlpWaitingIrpCancelRoutine(__int64 a1, __int64 a2)
{
  FsRtlpCancelWaitingIrp(a2, 0);
}

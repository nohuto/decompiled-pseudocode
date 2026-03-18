/*
 * XREFs of FsRtlpExclusiveIrpCancelRoutine @ 0x14057D940
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpCancelExclusiveIrp @ 0x1404E18C8 (FsRtlpCancelExclusiveIrp.c)
 */

void __fastcall FsRtlpExclusiveIrpCancelRoutine(__int64 a1, __int64 a2)
{
  FsRtlpCancelExclusiveIrp(a2, 0, 1);
}

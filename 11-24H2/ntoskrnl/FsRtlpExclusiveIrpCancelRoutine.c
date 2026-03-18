/*
 * XREFs of FsRtlpExclusiveIrpCancelRoutine @ 0x140580D60
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpCancelExclusiveIrp @ 0x140580A94 (FsRtlpCancelExclusiveIrp.c)
 */

void __fastcall FsRtlpExclusiveIrpCancelRoutine(__int64 a1, __int64 a2)
{
  FsRtlpCancelExclusiveIrp(a2, 0, 1);
}

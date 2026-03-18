/*
 * XREFs of FsRtlpReadOnlyOplockIrpCancelRoutine @ 0x140581770
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x140580BC0 (FsRtlpCancelReadOnlyOplockIrp.c)
 */

void __fastcall FsRtlpReadOnlyOplockIrpCancelRoutine(__int64 a1, __int64 a2)
{
  FsRtlpCancelReadOnlyOplockIrp(a2, 0);
}

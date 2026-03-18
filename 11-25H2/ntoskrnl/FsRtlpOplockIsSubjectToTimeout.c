/*
 * XREFs of FsRtlpOplockIsSubjectToTimeout @ 0x14057DFAC
 * Callers:
 *     FsRtlpOplockPerfSendData @ 0x1406FFED4 (FsRtlpOplockPerfSendData.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140700570 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     FsRtlpOplockTryStartBreakAckTimeout @ 0x140700750 (FsRtlpOplockTryStartBreakAckTimeout.c)
 * Callees:
 *     <none>
 */

bool __fastcall FsRtlpOplockIsSubjectToTimeout(__int64 a1)
{
  return (*(_DWORD *)(a1 + 8) & 6) == 0;
}

/*
 * XREFs of FsRtlpOplockIsSubjectToTimeout @ 0x140581758
 * Callers:
 *     FsRtlpOplockPerfSendData @ 0x14070BDB4 (FsRtlpOplockPerfSendData.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x14070C450 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     FsRtlpOplockTryStartBreakAckTimeout @ 0x14070C630 (FsRtlpOplockTryStartBreakAckTimeout.c)
 * Callees:
 *     <none>
 */

bool __fastcall FsRtlpOplockIsSubjectToTimeout(__int64 a1)
{
  return (*(_DWORD *)(a1 + 8) & 6) == 0;
}

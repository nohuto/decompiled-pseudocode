/*
 * XREFs of FsRtlpOplockIsSubjectToTimeout @ 0x14057EADC
 * Callers:
 *     FsRtlpOplockPerfSendData @ 0x140709948 (FsRtlpOplockPerfSendData.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140709FE4 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     FsRtlpOplockTryStartBreakAckTimeout @ 0x14070A1C4 (FsRtlpOplockTryStartBreakAckTimeout.c)
 * Callees:
 *     <none>
 */

bool __fastcall FsRtlpOplockIsSubjectToTimeout(__int64 a1)
{
  return (*(_DWORD *)(a1 + 8) & 6) == 0;
}

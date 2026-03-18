/*
 * XREFs of EtwpCovSampCaptureApcRundown @ 0x1407A2BB0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpCovSampCaptureApcRelease @ 0x140348884 (EtwpCovSampCaptureApcRelease.c)
 */

char __fastcall EtwpCovSampCaptureApcRundown(__int64 a1)
{
  return EtwpCovSampCaptureApcRelease((PSLIST_ENTRY)(a1 - 56));
}

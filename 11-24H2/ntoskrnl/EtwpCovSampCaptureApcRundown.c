/*
 * XREFs of EtwpCovSampCaptureApcRundown @ 0x1407B1F80
 * Callers:
 *     <none>
 * Callees:
 *     EtwpCovSampCaptureApcRelease @ 0x14043E5C4 (EtwpCovSampCaptureApcRelease.c)
 */

char __fastcall EtwpCovSampCaptureApcRundown(__int64 a1)
{
  return EtwpCovSampCaptureApcRelease((PSLIST_ENTRY)(a1 - 56));
}

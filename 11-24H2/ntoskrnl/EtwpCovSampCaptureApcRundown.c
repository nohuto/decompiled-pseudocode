/*
 * XREFs of EtwpCovSampCaptureApcRundown @ 0x1407B23D0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpCovSampCaptureApcRelease @ 0x1404341E4 (EtwpCovSampCaptureApcRelease.c)
 */

char __fastcall EtwpCovSampCaptureApcRundown(__int64 a1)
{
  return EtwpCovSampCaptureApcRelease((PSLIST_ENTRY)(a1 - 56));
}

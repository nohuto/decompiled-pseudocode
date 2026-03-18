/*
 * XREFs of PsGetProcessSilo @ 0x14041A260
 * Callers:
 *     PsIsProcessInAppSilo @ 0x140762800 (PsIsProcessInAppSilo.c)
 *     NtSetInformationThread @ 0x1408B7970 (NtSetInformationThread.c)
 * Callees:
 *     PspGetJobSilo @ 0x14041A350 (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetProcessSilo(__int64 a1)
{
  return PspGetJobSilo(*(_QWORD *)(a1 + 672));
}

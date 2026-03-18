/*
 * XREFs of PsGetProcessSilo @ 0x14040EEC0
 * Callers:
 *     PsIsProcessInAppSilo @ 0x1407721C0 (PsIsProcessInAppSilo.c)
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
 * Callees:
 *     PspGetJobSilo @ 0x14040EFB0 (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetProcessSilo(__int64 a1)
{
  return PspGetJobSilo(*(_QWORD *)(a1 + 672));
}

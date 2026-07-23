/*
 * XREFs of PsGetProcessSilo @ 0x1404070C0
 * Callers:
 *     PsIsProcessInAppSilo @ 0x1407723E0 (PsIsProcessInAppSilo.c)
 *     NtSetInformationThread @ 0x1408E8B60 (NtSetInformationThread.c)
 * Callees:
 *     PspGetJobSilo @ 0x1404071B0 (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetProcessSilo(__int64 a1)
{
  return PspGetJobSilo(*(_QWORD *)(a1 + 672));
}

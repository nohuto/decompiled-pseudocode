/*
 * XREFs of KiTpCompletionContextSize @ 0x14073209C
 * Callers:
 *     KeMarkDynamicTracingHiberPhase @ 0x1405C4EB4 (KeMarkDynamicTracingHiberPhase.c)
 *     KeSetTracepoint @ 0x140731680 (KeSetTracepoint.c)
 * Callees:
 *     RtlIcCompletionContextSize @ 0x140BA70D8 (RtlIcCompletionContextSize.c)
 */

__int64 KiTpCompletionContextSize()
{
  return RtlIcCompletionContextSize();
}

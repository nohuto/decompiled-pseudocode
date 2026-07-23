/*
 * XREFs of KiTpCompletionContextSize @ 0x14073BFEC
 * Callers:
 *     KeMarkDynamicTracingHiberPhase @ 0x1405C6C10 (KeMarkDynamicTracingHiberPhase.c)
 *     KeSetTracepoint @ 0x14073B5D0 (KeSetTracepoint.c)
 * Callees:
 *     RtlIcCompletionContextSize @ 0x140BB90D8 (RtlIcCompletionContextSize.c)
 */

__int64 KiTpCompletionContextSize()
{
  return RtlIcCompletionContextSize();
}

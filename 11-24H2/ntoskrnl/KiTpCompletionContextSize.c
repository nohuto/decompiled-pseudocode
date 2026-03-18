/*
 * XREFs of KiTpCompletionContextSize @ 0x14073E0BC
 * Callers:
 *     KeMarkDynamicTracingHiberPhase @ 0x1405C94E0 (KeMarkDynamicTracingHiberPhase.c)
 *     KeSetTracepoint @ 0x14073D6A0 (KeSetTracepoint.c)
 * Callees:
 *     RtlIcCompletionContextSize @ 0x140BB70D8 (RtlIcCompletionContextSize.c)
 */

__int64 KiTpCompletionContextSize()
{
  return RtlIcCompletionContextSize();
}

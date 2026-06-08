/*
 * XREFs of ProcLibGetProcessorNumber @ 0x140004C28
 * Callers:
 *     ProcLibTracePerfConstraintChange @ 0x14002C164 (ProcLibTracePerfConstraintChange.c)
 *     ProcLibTraceQueryCapabilities @ 0x14004209C (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTracePepPerfCapabilities @ 0x140043298 (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1400435B0 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTraceProcessorIds @ 0x14004597C (ProcLibTraceProcessorIds.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ProcLibGetProcessorNumber(__int64 a1, struct _PROCESSOR_NUMBER *a2)
{
  return KeGetProcessorNumberFromIndex(*(ULONG *)(a1 + 56), a2);
}

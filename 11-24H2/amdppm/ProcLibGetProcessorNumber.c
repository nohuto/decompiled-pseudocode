/*
 * XREFs of ProcLibGetProcessorNumber @ 0x140002B8C
 * Callers:
 *     ProcLibTracePerfConstraintChange @ 0x140024794 (ProcLibTracePerfConstraintChange.c)
 *     ProcLibTraceQueryCapabilities @ 0x14003EEFC (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTracePepPerfCapabilities @ 0x140040108 (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x140040420 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTraceProcessorIds @ 0x1400408C8 (ProcLibTraceProcessorIds.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ProcLibGetProcessorNumber(__int64 a1, struct _PROCESSOR_NUMBER *a2)
{
  return KeGetProcessorNumberFromIndex(*(ULONG *)(a1 + 56), a2);
}

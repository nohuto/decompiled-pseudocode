/*
 * XREFs of ProcLibGetProcessorNumber @ 0x140002B8C
 * Callers:
 *     ProcLibTracePerfConstraintChange @ 0x140023648 (ProcLibTracePerfConstraintChange.c)
 *     ProcLibTraceQueryCapabilities @ 0x14003DCAC (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTracePepPerfCapabilities @ 0x14003EEB8 (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x14003F1D0 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTraceProcessorIds @ 0x14003F678 (ProcLibTraceProcessorIds.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ProcLibGetProcessorNumber(__int64 a1, struct _PROCESSOR_NUMBER *a2)
{
  return KeGetProcessorNumberFromIndex(*(ULONG *)(a1 + 56), a2);
}

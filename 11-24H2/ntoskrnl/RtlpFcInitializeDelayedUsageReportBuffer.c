/*
 * XREFs of RtlpFcInitializeDelayedUsageReportBuffer @ 0x14078D16C
 * Callers:
 *     CmFcManagerStartRuntimePhase @ 0x140C4D180 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void *__fastcall RtlpFcInitializeDelayedUsageReportBuffer(void *a1)
{
  return memset_0(a1, 0, 0x310uLL);
}

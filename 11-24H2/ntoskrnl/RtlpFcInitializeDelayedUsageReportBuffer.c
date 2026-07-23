/*
 * XREFs of RtlpFcInitializeDelayedUsageReportBuffer @ 0x14078D09C
 * Callers:
 *     CmFcManagerStartRuntimePhase @ 0x140C4F31C (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void *__fastcall RtlpFcInitializeDelayedUsageReportBuffer(void *a1)
{
  return memset_0(a1, 0, 0x310uLL);
}

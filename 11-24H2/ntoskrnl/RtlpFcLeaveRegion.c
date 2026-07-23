/*
 * XREFs of RtlpFcLeaveRegion @ 0x140A765D0
 * Callers:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x140496128 (RtlpFcBufferManagerDereferenceBuffers.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 */

void RtlpFcLeaveRegion()
{
  KeLeaveCriticalRegion();
}

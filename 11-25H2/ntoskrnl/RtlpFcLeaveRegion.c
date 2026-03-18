/*
 * XREFs of RtlpFcLeaveRegion @ 0x140A7A560
 * Callers:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1403B8688 (RtlpFcBufferManagerDereferenceBuffers.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 */

void RtlpFcLeaveRegion()
{
  KeLeaveCriticalRegion();
}

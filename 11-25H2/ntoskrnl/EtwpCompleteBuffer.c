/*
 * XREFs of EtwpCompleteBuffer @ 0x140ACF21C
 * Callers:
 *     EtwpCompressPendingBuffers @ 0x14064501C (EtwpCompressPendingBuffers.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x1403E49BC (EtwpEnqueueAvailableBuffer.c)
 */

void __fastcall EtwpCompleteBuffer(__int64 a1, __int64 a2)
{
  *(_WORD *)(a2 + 52) = 0;
  EtwpEnqueueAvailableBuffer(a1, (unsigned int *)a2, 0);
}

/*
 * XREFs of EtwpCompleteBuffer @ 0x140ADB650
 * Callers:
 *     EtwpCompressPendingBuffers @ 0x14064F724 (EtwpCompressPendingBuffers.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x14027D7F0 (EtwpEnqueueAvailableBuffer.c)
 */

void __fastcall EtwpCompleteBuffer(__int64 a1, __int64 a2)
{
  *(_WORD *)(a2 + 52) = 0;
  EtwpEnqueueAvailableBuffer(a1, (unsigned int *)a2, 0);
}

/*
 * XREFs of EtwpCompleteBuffer @ 0x140AD9E0C
 * Callers:
 *     EtwpCompressPendingBuffers @ 0x14065101C (EtwpCompressPendingBuffers.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x14024D1E0 (EtwpEnqueueAvailableBuffer.c)
 */

void __fastcall EtwpCompleteBuffer(__int64 a1, __int64 a2)
{
  *(_WORD *)(a2 + 52) = 0;
  EtwpEnqueueAvailableBuffer(a1, (unsigned int *)a2, 0LL);
}

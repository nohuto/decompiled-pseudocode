/*
 * XREFs of RtlpFcInitializeBuffers @ 0x1404F4690
 * Callers:
 *     RtlpFcBufferManagerUpdateBuffers @ 0x140A30428 (RtlpFcBufferManagerUpdateBuffers.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void *__fastcall RtlpFcInitializeBuffers(void *a1)
{
  return memset_0(a1, 0, 0x60uLL);
}

/*
 * XREFs of RtlpFcInitializeBuffers @ 0x1404F4AE0
 * Callers:
 *     RtlpFcBufferManagerUpdateBuffers @ 0x140A2B208 (RtlpFcBufferManagerUpdateBuffers.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void *__fastcall RtlpFcInitializeBuffers(void *a1)
{
  return memset_0(a1, 0, 0x60uLL);
}

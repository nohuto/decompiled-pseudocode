/*
 * XREFs of RtlpFcInitializeBuffers @ 0x1404F7200
 * Callers:
 *     RtlpFcBufferManagerUpdateBuffers @ 0x140A35CEC (RtlpFcBufferManagerUpdateBuffers.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void *__fastcall RtlpFcInitializeBuffers(void *a1)
{
  return memset_0(a1, 0, 0x60uLL);
}

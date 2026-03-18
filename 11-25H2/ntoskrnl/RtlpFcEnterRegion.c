/*
 * XREFs of RtlpFcEnterRegion @ 0x140A767A4
 * Callers:
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1403B7F5C (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlQueryFeatureConfiguration @ 0x1403BA040 (RtlQueryFeatureConfiguration.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *RtlpFcEnterRegion()
{
  struct _KTHREAD *result; // rax

  result = KeGetCurrentThread();
  --result->KernelApcDisable;
  return result;
}

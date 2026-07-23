/*
 * XREFs of RtlpFcEnterRegion @ 0x140A72878
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x140496030 (RtlQueryFeatureConfiguration.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1404975C8 (RtlpFcBufferManagerReferenceBuffers.c)
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

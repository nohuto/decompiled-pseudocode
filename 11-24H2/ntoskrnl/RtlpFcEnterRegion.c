/*
 * XREFs of RtlpFcEnterRegion @ 0x140A78578
 * Callers:
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1403A6924 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlQueryFeatureConfiguration @ 0x1403A7E90 (RtlQueryFeatureConfiguration.c)
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

/*
 * XREFs of RtlInitializeExceptionLog @ 0x140C369B8
 * Callers:
 *     InitBootProcessor @ 0x140C0AC88 (InitBootProcessor.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

void *RtlInitializeExceptionLog()
{
  void *result; // rax

  result = (void *)ExAllocatePool2(0x40uLL, 0x11620uLL, 0x67626445uLL);
  RtlpExceptionLog2 = (__int64)result;
  if ( result )
  {
    result = memset_0(result, 0, 0x11620uLL);
    RtlpExceptionLogSize = 50;
  }
  return result;
}

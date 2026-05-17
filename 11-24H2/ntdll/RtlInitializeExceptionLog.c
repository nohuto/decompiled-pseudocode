/*
 * XREFs of RtlInitializeExceptionLog @ 0x18011F59C
 * Callers:
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

void *RtlInitializeExceptionLog()
{
  void *result; // rax

  result = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0x11620uLL);
  RtlpExceptionLog2 = (__int64)result;
  if ( result )
  {
    result = memset_thunk_772440563353939046(result, 0, 0x11620uLL);
    RtlpExceptionLogSize = 50;
  }
  return result;
}

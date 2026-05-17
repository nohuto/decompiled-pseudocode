/*
 * XREFs of RtlpInitializeMap @ 0x180095D80
 * Callers:
 *     RtlpSetBlockInfo @ 0x180094F5C (RtlpSetBlockInfo.c)
 *     RtlpInitializeLeakDetection @ 0x1800FE428 (RtlpInitializeLeakDetection.c)
 * Callees:
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

void *__fastcall RtlpInitializeMap(_QWORD *a1, _QWORD *a2)
{
  void *result; // rax

  result = memset_thunk_772440563353939046(a1, 0, 0x838uLL);
  a1[263] = a2;
  if ( a2 )
  {
    result = (void *)(*a2 >> 8);
    *a1 = result;
  }
  return result;
}

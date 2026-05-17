/*
 * XREFs of RtlpHeapFatalExceptionFilter @ 0x18013D8A4
 * Callers:
 *     RtlReAllocateHeap @ 0x180029DE0 (RtlReAllocateHeap.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 * Callees:
 *     RtlpHeapExceptionFilter @ 0x18010CF40 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHeapFatalExceptionFilter(int a1, __int64 a2)
{
  __int64 result; // rax

  result = RtlpHeapExceptionFilter(a1, a2);
  if ( (_DWORD)result == 1 )
    __fastfail(0x23u);
  return result;
}

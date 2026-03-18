/*
 * XREFs of RtlpHeapFatalExceptionFilter @ 0x1405E8D8C
 * Callers:
 *     RtlAllocateHeap @ 0x14047A1B0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x14047DE70 (RtlFreeHeap.c)
 * Callees:
 *     RtlpHeapExceptionFilter @ 0x1405F28D0 (RtlpHeapExceptionFilter.c)
 */

__int64 RtlpHeapFatalExceptionFilter()
{
  __int64 result; // rax

  result = RtlpHeapExceptionFilter();
  if ( (_DWORD)result == 1 )
    __fastfail(0x23u);
  return result;
}

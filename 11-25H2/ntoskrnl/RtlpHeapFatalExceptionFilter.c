/*
 * XREFs of RtlpHeapFatalExceptionFilter @ 0x1405DCC3C
 * Callers:
 *     RtlAllocateHeap @ 0x1403CA980 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x14047F160 (RtlFreeHeap.c)
 * Callees:
 *     RtlpHeapExceptionFilter @ 0x1405E6580 (RtlpHeapExceptionFilter.c)
 */

__int64 RtlpHeapFatalExceptionFilter()
{
  __int64 result; // rax

  result = RtlpHeapExceptionFilter();
  if ( (_DWORD)result == 1 )
    __fastfail(0x23u);
  return result;
}

/*
 * XREFs of RtlpHeapFatalExceptionFilter @ 0x1405E62DC
 * Callers:
 *     RtlAllocateHeap @ 0x1403686E0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x140479100 (RtlFreeHeap.c)
 * Callees:
 *     RtlpHeapExceptionFilter @ 0x1405EFF10 (RtlpHeapExceptionFilter.c)
 */

__int64 RtlpHeapFatalExceptionFilter()
{
  __int64 result; // rax

  result = RtlpHeapExceptionFilter();
  if ( (_DWORD)result == 1 )
    __fastfail(0x23u);
  return result;
}

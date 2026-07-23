/*
 * XREFs of RtlpHeapFatalExceptionFilter @ 0x18013A364
 * Callers:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlReAllocateHeap @ 0x18007A7D0 (RtlReAllocateHeap.c)
 * Callees:
 *     RtlpHeapExceptionFilter @ 0x180105400 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHeapFatalExceptionFilter(int a1, __int64 a2)
{
  __int64 result; // rax

  result = RtlpHeapExceptionFilter(a1, a2);
  if ( (_DWORD)result == 1 )
    __fastfail(0x23u);
  return result;
}

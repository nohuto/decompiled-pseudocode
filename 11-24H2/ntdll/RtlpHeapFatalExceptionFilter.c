/*
 * XREFs of RtlpHeapFatalExceptionFilter @ 0x18013C174
 * Callers:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlReAllocateHeap @ 0x1800A0E30 (RtlReAllocateHeap.c)
 * Callees:
 *     RtlpHeapExceptionFilter @ 0x18010A4D0 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHeapFatalExceptionFilter(int a1, __int64 a2)
{
  __int64 result; // rax

  result = RtlpHeapExceptionFilter(a1, a2);
  if ( (_DWORD)result == 1 )
    __fastfail(0x23u);
  return result;
}

/*
 * XREFs of LdrpGetNewTlsVector @ 0x18003321C
 * Callers:
 *     LdrpHandleTlsData @ 0x180034C00 (LdrpHandleTlsData.c)
 *     LdrpAllocateTls @ 0x18003EF80 (LdrpAllocateTls.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

_DWORD *__fastcall LdrpGetNewTlsVector(unsigned int a1)
{
  __int64 v1; // rdi
  _DWORD *result; // rax
  _DWORD *v3; // rbx

  v1 = a1;
  result = RtlAllocateHeap(LdrpTlsHeap, NtdllBaseTag + 786432, 8LL * a1 + 16);
  v3 = result;
  if ( result )
  {
    *result = v1;
    memset_thunk_772440563353939046(result + 4, 0, 8 * v1);
    return v3 + 4;
  }
  return result;
}

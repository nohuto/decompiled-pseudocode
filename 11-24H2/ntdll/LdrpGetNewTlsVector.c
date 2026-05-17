/*
 * XREFs of LdrpGetNewTlsVector @ 0x18000681C
 * Callers:
 *     LdrpHandleTlsData @ 0x180008200 (LdrpHandleTlsData.c)
 *     LdrpAllocateTls @ 0x180012580 (LdrpAllocateTls.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

_DWORD *__fastcall LdrpGetNewTlsVector(unsigned int a1)
{
  __int64 v1; // rdi
  _DWORD *result; // rax
  _DWORD *v3; // rbx

  v1 = a1;
  result = (_DWORD *)RtlAllocateHeap(LdrpTlsHeap, (unsigned int)(NtdllBaseTag + 786432), 8LL * a1 + 16);
  v3 = result;
  if ( result )
  {
    *result = v1;
    memset_thunk_772440563353939046(result + 4, 0, 8 * v1);
    return v3 + 4;
  }
  return result;
}

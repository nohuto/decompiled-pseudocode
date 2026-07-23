/*
 * XREFs of RtlpAllocateListLookup @ 0x180038190
 * Callers:
 *     RtlpInitializeUCRIndex @ 0x180037B60 (RtlpInitializeUCRIndex.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 */

_QWORD *__fastcall RtlpAllocateListLookup(void *a1, __int64 a2, int a3)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdi
  _QWORD *result; // rax

  v4 = (a3 + 31) & 0xFFFFFFE0;
  v5 = (unsigned __int64)v4 >> 3;
  result = RtlAllocateHeap(a1, 0x80000Au, v5 + 8 * (v4 + 7LL));
  if ( result )
  {
    *((_BYTE *)result - 1) = 1;
    result[5] = result + 7;
    result[6] = (char *)result + v5 + 56;
    *((_DWORD *)result + 2) = v4;
    result[4] = a2;
  }
  return result;
}

/*
 * XREFs of RtlpAllocateListLookup @ 0x180038190
 * Callers:
 *     RtlpInitializeUCRIndex @ 0x180037B60 (RtlpInitializeUCRIndex.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlpAllocateListLookup(void *a1, __int64 a2, int a3)
{
  unsigned int v4; // ebx
  __int64 result; // rax

  v4 = (a3 + 31) & 0xFFFFFFE0;
  result = RtlAllocateHeap(a1);
  if ( result )
  {
    *(_BYTE *)(result - 1) = 1;
    *(_QWORD *)(result + 40) = result + 56;
    *(_QWORD *)(result + 48) = ((unsigned __int64)v4 >> 3) + result + 56;
    *(_DWORD *)(result + 8) = v4;
    *(_QWORD *)(result + 32) = a2;
  }
  return result;
}

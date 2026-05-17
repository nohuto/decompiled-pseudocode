/*
 * XREFs of RtlpAllocateListLookup @ 0x1800A9350
 * Callers:
 *     RtlpInitializeUCRIndex @ 0x1800A8D20 (RtlpInitializeUCRIndex.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlpAllocateListLookup(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdi
  __int64 result; // rax

  v4 = (a3 + 31) & 0xFFFFFFE0;
  v5 = (unsigned __int64)v4 >> 3;
  result = RtlAllocateHeap(a1, 0x80000Au, v5 + 8 * (v4 + 7LL));
  if ( result )
  {
    *(_BYTE *)(result - 1) = 1;
    *(_QWORD *)(result + 40) = result + 56;
    *(_QWORD *)(result + 48) = v5 + result + 56;
    *(_DWORD *)(result + 8) = v4;
    *(_QWORD *)(result + 32) = a2;
  }
  return result;
}

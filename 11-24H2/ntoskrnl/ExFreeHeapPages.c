/*
 * XREFs of ExFreeHeapPages @ 0x1403E931C
 * Callers:
 *     ExGetBigPoolInfo @ 0x1403E9100 (ExGetBigPoolInfo.c)
 *     ExPoolCleanupExpansionTable @ 0x1406528C4 (ExPoolCleanupExpansionTable.c)
 * Callees:
 *     RtlpHpFreeHeap @ 0x14035B220 (RtlpHpFreeHeap.c)
 *     ExGetHeapFromVA @ 0x14035C310 (ExGetHeapFromVA.c)
 */

__int64 __fastcall ExFreeHeapPages(ULONG_PTR a1)
{
  ULONG_PTR HeapFromVA; // rax
  unsigned int v3; // r8d

  HeapFromVA = ExGetHeapFromVA(a1);
  return RtlpHpFreeHeap(HeapFromVA, a1, v3);
}

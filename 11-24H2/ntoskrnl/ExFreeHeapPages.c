/*
 * XREFs of ExFreeHeapPages @ 0x14044074C
 * Callers:
 *     ExGetBigPoolInfo @ 0x140440530 (ExGetBigPoolInfo.c)
 *     ExPoolCleanupExpansionTable @ 0x1406541CC (ExPoolCleanupExpansionTable.c)
 * Callees:
 *     RtlpHpFreeHeap @ 0x1402B2660 (RtlpHpFreeHeap.c)
 *     ExGetHeapFromVA @ 0x1402B3750 (ExGetHeapFromVA.c)
 */

__int64 __fastcall ExFreeHeapPages(ULONG_PTR a1)
{
  ULONG_PTR HeapFromVA; // rax
  unsigned int v3; // r8d

  HeapFromVA = ExGetHeapFromVA(a1);
  return RtlpHpFreeHeap(HeapFromVA, a1, v3);
}

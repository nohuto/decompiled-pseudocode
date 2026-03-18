/*
 * XREFs of ExFreeHeapPages @ 0x1402F72DC
 * Callers:
 *     ExGetBigPoolInfo @ 0x1402F70C0 (ExGetBigPoolInfo.c)
 *     ExPoolCleanupExpansionTable @ 0x1406482CC (ExPoolCleanupExpansionTable.c)
 * Callees:
 *     RtlpHpFreeHeap @ 0x1402DE7F0 (RtlpHpFreeHeap.c)
 *     ExGetHeapFromVA @ 0x1403C7CD0 (ExGetHeapFromVA.c)
 */

__int64 __fastcall ExFreeHeapPages(ULONG_PTR a1)
{
  __int64 HeapFromVA; // rax
  unsigned int v3; // r8d

  HeapFromVA = ExGetHeapFromVA(a1);
  return RtlpHpFreeHeap(HeapFromVA, a1, v3);
}

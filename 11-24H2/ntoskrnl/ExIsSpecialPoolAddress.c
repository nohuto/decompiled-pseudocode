/*
 * XREFs of ExIsSpecialPoolAddress @ 0x14048BD64
 * Callers:
 *     ExReturnPoolQuota @ 0x14021ACC0 (ExReturnPoolQuota.c)
 *     IoFreeIrp @ 0x1402C30B0 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x1402C37E0 (IopFreeIrp.c)
 *     ExFreeHeapPool @ 0x140359950 (ExFreeHeapPool.c)
 *     ExQueryPoolBlockSize @ 0x140652E50 (ExQueryPoolBlockSize.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     DifpLwSPProcessPostPoolAlloc @ 0x140BA623C (DifpLwSPProcessPostPoolAlloc.c)
 *     ExFreePoolSanityChecks @ 0x140BA64B0 (ExFreePoolSanityChecks.c)
 *     VfHandlePoolAlloc @ 0x140BAAAA0 (VfHandlePoolAlloc.c)
 * Callees:
 *     ExGetHeapFromVA @ 0x14035C310 (ExGetHeapFromVA.c)
 *     ExpHpIsSpecialPoolHeap @ 0x14048BD84 (ExpHpIsSpecialPoolHeap.c)
 */

__int64 __fastcall ExIsSpecialPoolAddress(ULONG_PTR a1)
{
  ULONG_PTR HeapFromVA; // rax

  HeapFromVA = ExGetHeapFromVA(a1);
  return ExpHpIsSpecialPoolHeap(HeapFromVA);
}

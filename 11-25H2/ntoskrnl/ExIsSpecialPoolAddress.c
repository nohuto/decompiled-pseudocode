/*
 * XREFs of ExIsSpecialPoolAddress @ 0x1403C6C50
 * Callers:
 *     IoFreeIrp @ 0x1402508A0 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x140250FE0 (IopFreeIrp.c)
 *     ExAllocateHeapPool @ 0x1402DAB20 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1402DECE0 (ExFreeHeapPool.c)
 *     ExReturnPoolQuota @ 0x1403C5CF0 (ExReturnPoolQuota.c)
 *     ExQueryPoolBlockSize @ 0x140648850 (ExQueryPoolBlockSize.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     DifpLwSPProcessPostPoolAlloc @ 0x140B9425C (DifpLwSPProcessPostPoolAlloc.c)
 *     ExFreePoolSanityChecks @ 0x140B944D0 (ExFreePoolSanityChecks.c)
 *     VfHandlePoolAlloc @ 0x140B98AC0 (VfHandlePoolAlloc.c)
 * Callees:
 *     ExpHpIsSpecialPoolHeap @ 0x1403C6C70 (ExpHpIsSpecialPoolHeap.c)
 *     ExGetHeapFromVA @ 0x1403C7CD0 (ExGetHeapFromVA.c)
 */

__int64 __fastcall ExIsSpecialPoolAddress(ULONG_PTR a1)
{
  __int64 HeapFromVA; // rax

  HeapFromVA = ExGetHeapFromVA(a1);
  return ExpHpIsSpecialPoolHeap(HeapFromVA);
}

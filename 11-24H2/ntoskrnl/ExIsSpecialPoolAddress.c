/*
 * XREFs of ExIsSpecialPoolAddress @ 0x1402B4928
 * Callers:
 *     ExAllocateHeapPool @ 0x1402ACDB0 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1402B0E50 (ExFreeHeapPool.c)
 *     ExReturnPoolQuota @ 0x1402B4980 (ExReturnPoolQuota.c)
 *     IoFreeIrp @ 0x14031A520 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x14031AC50 (IopFreeIrp.c)
 *     ExQueryPoolBlockSize @ 0x140654750 (ExQueryPoolBlockSize.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     DifpLwSPProcessPostPoolAlloc @ 0x140BA423C (DifpLwSPProcessPostPoolAlloc.c)
 *     ExFreePoolSanityChecks @ 0x140BA44B0 (ExFreePoolSanityChecks.c)
 *     VfHandlePoolAlloc @ 0x140BA8AA0 (VfHandlePoolAlloc.c)
 * Callees:
 *     ExGetHeapFromVA @ 0x1402B3750 (ExGetHeapFromVA.c)
 *     ExpHpIsSpecialPoolHeap @ 0x1402B4948 (ExpHpIsSpecialPoolHeap.c)
 */

__int64 __fastcall ExIsSpecialPoolAddress(ULONG_PTR a1)
{
  ULONG_PTR HeapFromVA; // rax

  HeapFromVA = ExGetHeapFromVA(a1);
  return ExpHpIsSpecialPoolHeap(HeapFromVA);
}

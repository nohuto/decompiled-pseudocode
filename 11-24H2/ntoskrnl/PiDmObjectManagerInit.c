/*
 * XREFs of PiDmObjectManagerInit @ 0x1407270E8
 * Callers:
 *     PiDmInit @ 0x140C241DC (PiDmInit.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1403655E0 (ExInitializeResourceLite.c)
 *     RtlInitializeGenericTableAvl @ 0x14045C170 (RtlInitializeGenericTableAvl.c)
 */

void __fastcall PiDmObjectManagerInit(__int64 a1, int a2)
{
  ExInitializeResourceLite((PERESOURCE)a1);
  RtlInitializeGenericTableAvl(
    (PRTL_AVL_TABLE)(a1 + 104),
    PiDmCompareObjects,
    PiDmAllocateGenericTableEntry,
    (PRTL_AVL_FREE_ROUTINE)PiDmFreeGenericTableEntry,
    0LL);
  *(_DWORD *)(a1 + 208) = a2;
}

/*
 * XREFs of PiDmObjectManagerInit @ 0x14071B168
 * Callers:
 *     PiDmInit @ 0x140C1314C (PiDmInit.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1402D6540 (ExInitializeResourceLite.c)
 *     RtlInitializeGenericTableAvl @ 0x14045CC60 (RtlInitializeGenericTableAvl.c)
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

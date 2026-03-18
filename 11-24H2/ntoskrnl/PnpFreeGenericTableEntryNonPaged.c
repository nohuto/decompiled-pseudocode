/*
 * XREFs of PnpFreeGenericTableEntryNonPaged @ 0x1404711C0
 * Callers:
 *     MiSegmentDelete @ 0x140A131E4 (MiSegmentDelete.c)
 *     MiDeletePageFileSectionNodes @ 0x140A13384 (MiDeletePageFileSectionNodes.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PnpFreeGenericTableEntryNonPaged(__int64 a1, void *a2)
{
  ExFreePoolWithTag(a2, 0);
}

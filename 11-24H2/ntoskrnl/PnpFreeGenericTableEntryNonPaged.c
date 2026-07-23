/*
 * XREFs of PnpFreeGenericTableEntryNonPaged @ 0x14046B940
 * Callers:
 *     MiSegmentDelete @ 0x140A0B944 (MiSegmentDelete.c)
 *     MiDeletePageFileSectionNodes @ 0x140A0BAE4 (MiDeletePageFileSectionNodes.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PnpFreeGenericTableEntryNonPaged(__int64 a1, void *a2)
{
  ExFreePoolWithTag(a2, 0);
}

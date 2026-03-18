/*
 * XREFs of MiFreeProtoPool @ 0x140472BA0
 * Callers:
 *     MiSegmentDelete @ 0x140A095FC (MiSegmentDelete.c)
 *     MiDeletePageFileSectionNodes @ 0x140A09798 (MiDeletePageFileSectionNodes.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeProtoPool(__int64 a1, void *a2)
{
  ExFreePoolWithTag(a2, 0);
}

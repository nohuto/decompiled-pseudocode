/*
 * XREFs of DifObjTrkFreeNode @ 0x14060BCF0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall DifObjTrkFreeNode(__int64 a1, void *a2)
{
  ExFreePoolWithTag(a2, 0x744F6644u);
}

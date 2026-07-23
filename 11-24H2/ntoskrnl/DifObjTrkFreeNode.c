/*
 * XREFs of DifObjTrkFreeNode @ 0x140616270
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall DifObjTrkFreeNode(__int64 a1, void *a2)
{
  ExFreePoolWithTag(a2, 0x744F6644u);
}

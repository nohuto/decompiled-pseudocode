/*
 * XREFs of SepRmCapPoolExpand @ 0x1406098B4
 * Callers:
 *     SepReadAndInsertCaps @ 0x1407952E0 (SepReadAndInsertCaps.c)
 *     SepReadAndPopulateCapes @ 0x140795638 (SepReadAndPopulateCapes.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepRmCapPoolExpand(void *a1)
{
  ExFreePoolWithTag(a1, 0x70536553u);
  return ExAllocatePool2(0x100uLL);
}

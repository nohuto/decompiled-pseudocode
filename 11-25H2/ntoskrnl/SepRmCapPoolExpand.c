/*
 * XREFs of SepRmCapPoolExpand @ 0x1405FD3C4
 * Callers:
 *     SepReadAndInsertCaps @ 0x140785F10 (SepReadAndInsertCaps.c)
 *     SepReadAndPopulateCapes @ 0x140786268 (SepReadAndPopulateCapes.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepRmCapPoolExpand(void *a1)
{
  ExFreePoolWithTag(a1, 0x70536553u);
  return ExAllocatePool2(0x100uLL);
}

/*
 * XREFs of SepRmCapPoolExpand @ 0x140607E6C
 * Callers:
 *     SepReadAndInsertCaps @ 0x1407953F0 (SepReadAndInsertCaps.c)
 *     SepReadAndPopulateCapes @ 0x140795748 (SepReadAndPopulateCapes.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepRmCapPoolExpand(void *a1, ULONG_PTR a2)
{
  ExFreePoolWithTag(a1, 0x70536553u);
  return ExAllocatePool2(0x100uLL, a2, 0x70536553u);
}

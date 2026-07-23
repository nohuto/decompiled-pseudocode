/*
 * XREFs of CarAllocDbNode @ 0x140617870
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall CarAllocDbNode(__int64 a1, unsigned int a2)
{
  return ExAllocatePool2(0x40uLL, a2, 0x6F4E6143u);
}

/*
 * XREFs of PopEtInternerAllocate @ 0x140A6B600
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopEtInternerAllocate(__int64 a1, ULONG_PTR a2)
{
  return ExAllocatePool2(0x100uLL, a2, 0x54456F50u);
}

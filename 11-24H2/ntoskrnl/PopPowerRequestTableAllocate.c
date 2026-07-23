/*
 * XREFs of PopPowerRequestTableAllocate @ 0x140A63D20
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopPowerRequestTableAllocate(__int64 a1, unsigned int a2)
{
  return ExAllocatePool2(0x100uLL, a2, 0x54515750u);
}

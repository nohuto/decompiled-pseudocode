/*
 * XREFs of PnpAllocateGenericTableEntry @ 0x140A85980
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpAllocateGenericTableEntry(__int64 a1, unsigned int a2)
{
  return ExAllocatePool2(0x100uLL, a2, 0x75737050u);
}

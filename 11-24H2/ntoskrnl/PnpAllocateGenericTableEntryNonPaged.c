/*
 * XREFs of PnpAllocateGenericTableEntryNonPaged @ 0x1405A2900
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpAllocateGenericTableEntryNonPaged(__int64 a1, unsigned int a2)
{
  return ExAllocatePool2(0x40uLL, a2, 0x75737050u);
}

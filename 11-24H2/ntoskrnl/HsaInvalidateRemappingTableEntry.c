/*
 * XREFs of HsaInvalidateRemappingTableEntry @ 0x140573410
 * Callers:
 *     <none>
 * Callees:
 *     HsaInvalidateRemappingTableEntries @ 0x1405733B4 (HsaInvalidateRemappingTableEntries.c)
 */

__int64 __fastcall HsaInvalidateRemappingTableEntry(__int64 *a1, __int64 a2)
{
  return HsaInvalidateRemappingTableEntries(a1, a2, 0);
}

/*
 * XREFs of HsaInvalidateRemappingTableEntry @ 0x140570110
 * Callers:
 *     <none>
 * Callees:
 *     HsaInvalidateRemappingTableEntries @ 0x1405700B4 (HsaInvalidateRemappingTableEntries.c)
 */

__int64 __fastcall HsaInvalidateRemappingTableEntry(unsigned __int64 *a1, __int64 a2)
{
  return HsaInvalidateRemappingTableEntries(a1, a2, 0);
}

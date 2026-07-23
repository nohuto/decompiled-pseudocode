/*
 * XREFs of IvtGetContextEntryType @ 0x1404F8270
 * Callers:
 *     IvtInitializeIommu @ 0x140B53BE0 (IvtInitializeIommu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IvtGetContextEntryType(__int64 a1, __int64 a2, char a3)
{
  return a3 == 0 ? 2 : 0;
}

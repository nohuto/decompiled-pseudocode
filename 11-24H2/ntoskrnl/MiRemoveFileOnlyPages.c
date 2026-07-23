/*
 * XREFs of MiRemoveFileOnlyPages @ 0x1407F0C3C
 * Callers:
 *     MiCreateFileOnlyPfns @ 0x1407F06F4 (MiCreateFileOnlyPfns.c)
 * Callees:
 *     MiRemovePhysicalMemory @ 0x1407EA37C (MiRemovePhysicalMemory.c)
 */

__int64 __fastcall MiRemoveFileOnlyPages(__int64 a1, __int64 a2)
{
  return MiRemovePhysicalMemory(a1, a2, 34);
}

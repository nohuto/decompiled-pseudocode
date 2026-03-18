/*
 * XREFs of MiRemoveFileOnlyPages @ 0x1407E07CC
 * Callers:
 *     MiCreateFileOnlyPfns @ 0x1407E0284 (MiCreateFileOnlyPfns.c)
 * Callees:
 *     MiRemovePhysicalMemory @ 0x1407D9EEC (MiRemovePhysicalMemory.c)
 */

__int64 __fastcall MiRemoveFileOnlyPages(__int64 a1, __int64 a2)
{
  return MiRemovePhysicalMemory(a1, a2, 34);
}

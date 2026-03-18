/*
 * XREFs of MiRemoveFileOnlyPages @ 0x1407F066C
 * Callers:
 *     MiCreateFileOnlyPfns @ 0x1407F0124 (MiCreateFileOnlyPfns.c)
 * Callees:
 *     MiRemovePhysicalMemory @ 0x1407E9DAC (MiRemovePhysicalMemory.c)
 */

__int64 __fastcall MiRemoveFileOnlyPages(__int64 a1, __int64 a2)
{
  return MiRemovePhysicalMemory(a1, a2, 34);
}

/*
 * XREFs of MmTrimAllSystemPagableMemory @ 0x14067A0D0
 * Callers:
 *     <none>
 * Callees:
 *     MiTrimAllSystemPagableMemory @ 0x140679F28 (MiTrimAllSystemPagableMemory.c)
 */

__int64 __fastcall MmTrimAllSystemPagableMemory(int a1)
{
  return MiTrimAllSystemPagableMemory(a1);
}

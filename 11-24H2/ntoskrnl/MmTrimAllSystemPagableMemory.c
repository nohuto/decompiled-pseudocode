/*
 * XREFs of MmTrimAllSystemPagableMemory @ 0x140678EF0
 * Callers:
 *     <none>
 * Callees:
 *     MiTrimAllSystemPagableMemory @ 0x140678D48 (MiTrimAllSystemPagableMemory.c)
 */

__int64 __fastcall MmTrimAllSystemPagableMemory(int a1)
{
  return MiTrimAllSystemPagableMemory(a1);
}
